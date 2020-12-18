#include <QtCore>
#include <QtWidgets>
#include <QtGui>

#include "ui_mainwindow.h"
#include "namewidget.h"

static QVector<QString> con={"r","q","t","p","s","d","f","g","h","j","k","l","z",
							 "x","c","v","b","n","m","ch","th","sh","gh","kh","ph",
							 "bl","gl","cl","sl","fl","br","tr","dr","fr","gr",
							 "kr","br","chr","thr","shr"};
static QVector<QString> vow={"a","e","i","o","u","y","ea"};
static QVector<QString> con_suf={"tch","s","t","th","n","m","f","ve","p",
								 "se","ce","x","d","sh","l","k","g","ze"};
static QVector<QString> vow_suf={"e","i","o","u","r","y","l","ng","gh"};
static std::mt19937 random(time(0));

class MainWindow: public Ui_MainWindow,public QMainWindow
{
 private:
	QList<QWidget*> widgets;
	void resetFontSize()
	{
		QFont f;
		double mul=qMin(width()/800.0,height()/600.0);
		for(auto &i: widgets)
		{
			f=i->font();
			f.setPointSizeF(mul*9);
			i->setFont(f);
		}
		f=label_title->font();
		f.setPointSizeF(mul*18);
		label_title->setFont(f);
	}
	static void tie(QSpinBox* x,QSlider* y,int& value_saver)
	{
		connect(x,static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged),
						 [&value_saver,y](int val)
			{ y->setValue(val),value_saver=val; });
		connect(y,static_cast<void(QSlider::*)(int)>(&QSlider::valueChanged),
						 [&value_saver,x](int val)
			{ x->setValue(val),value_saver=val; });
	}
	int minsyl=1,maxsyl=1,wordnum=1;
	NameWidget names;
	QString makeWord()
	{
		QString res;
		std::uniform_int_distribution<int> dist(minsyl,maxsyl);
		int sylnum=dist(random);
		for(int j=1;j<=sylnum;j++)
		{
			if(random()%4)
				res+=con[random()%con.size()];
			res+=vow[random()%vow.size()];
			if(random()%3==0 && res[res.size()-1]!='y')
				res+=vow_suf[random()%vow_suf.size()];
			if(random()%3==0)
				res+=con_suf[random()%con_suf.size()];
		}
		return res;
	}

 public:
	MainWindow(QWidget* parent=nullptr): QMainWindow(parent),names("./savednames.dat")
	{
		setupUi(this);
		setWindowIcon(QIcon("./icon.png"));
		widgets.append({label1,label2,label3,
						minsyl_spin,maxsyl_spin,word_spin,
					    make_one,make_many,
					    show_name,copy,see_names});
		tie(minsyl_spin,minsyl_slider,minsyl);
		tie(maxsyl_spin,maxsyl_slider,maxsyl);
		tie(word_spin,word_slider,wordnum);
		connect(minsyl_spin,static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged),
						 [this](int val)
			{
				if(val>maxsyl_spin->value())
					maxsyl_spin->setValue(val);
			});
		connect(maxsyl_spin,static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged),
						 [this](int val)
			{
				if(val<minsyl_spin->value())
					minsyl_spin->setValue(val);
			});
		connect(make_one,&QPushButton::clicked,this,&MainWindow::makeOneName);
		connect(make_many,&QPushButton::clicked,this,&MainWindow::makeManyNames);
		connect(copy,&QPushButton::clicked,this,&MainWindow::copyName);
		connect(see_names,&QPushButton::clicked,this,&MainWindow::showNames);
	}
	void makeOneName()
	{
		QString name,now;
		for(int i=1;i<=wordnum;i++)
		{
			now=makeWord();
			now[0]=now[0].toUpper();
			name+=now;
			if(i!=wordnum)	name.append(' ');
		}
		names.addName(name);
		show_name->setText(name);
	}
	void makeManyNames()
	{
		int num=QInputDialog::getInt(this,"Make Names","How many names do you want?",0,0,1000);
		while(num--)
			makeOneName();
		QMessageBox::information(this,"Tips","Finished making");
	}
	void copyName()
	{
		QClipboard* clip=QApplication::clipboard();
		clip->setText(show_name->text());
	}
	void showNames()
		{ names.show(); }
	void closeEvent(QCloseEvent* event)
	{
		int rep=QMessageBox::warning(this,
									 "Quit","Do you want do save your changes?",
									 QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
		if(rep==QMessageBox::Cancel)
			event->ignore();
		else
		{
			if(rep==QMessageBox::Yes)
				names.saveNames();
			event->accept();
		}
	}
	void resizeEvent(QResizeEvent* event)
		{ resetFontSize(); }
};

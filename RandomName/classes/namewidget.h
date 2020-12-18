#include <QtWidgets/QLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMessageBox>
#include <QtGui/QClipboard>

#include <iostream>
#include <fstream>

#include "ui_namewidget.h"

class Container: public QFrame
{
	Q_OBJECT
 private:
	QString str;
	QHBoxLayout* hlayout=new QHBoxLayout(this);
	QPushButton* btn_copy=new QPushButton("Copy",this);
	QPushButton* btn_del=new QPushButton("Remove",this);
	QLabel* label=new QLabel(this);

 signals:
	void removed();

 public:
	Container(const QString& s,QWidget* parent=nullptr):
			QFrame(parent),str(s)
	{
		setFrameStyle(QFrame::Box);
		setFrameShadow(QFrame::Plain);
		setLineWidth(1);
		label->setText(s);
		QSizePolicy p;
		QFont f("consolas",10);
		p.setHorizontalPolicy(QSizePolicy::Preferred);
		p.setVerticalPolicy(QSizePolicy::Fixed);
		p.setHorizontalStretch(3);
		label->setSizePolicy(p),label->setFixedHeight(50),label->setFont(f);
		p.setHorizontalStretch(1);
		btn_copy->setSizePolicy(p),btn_copy->setFixedHeight(50),btn_copy->setFont(f);
		btn_del->setSizePolicy(p),btn_del->setFixedHeight(50),btn_del->setFont(f);
		hlayout->addWidget(label);
		hlayout->addWidget(btn_copy);
		hlayout->addWidget(btn_del);
		connect(btn_copy,&QPushButton::clicked,this,&Container::copyString);
		connect(btn_del,&QPushButton::clicked,this,&Container::remove);
	}
	void copyString()
	{
		QClipboard* clip=QApplication::clipboard();
		clip->setText(label->text());
	}
	void remove()
	{
		int rep=QMessageBox::warning(this,
									 "Remove Name","Do you really want to remove it?",
									 QMessageBox::Yes|QMessageBox::No);
		if(rep==QMessageBox::Yes)
		{
			emit removed();
			deleteLater();
		}
	}
};

class NameWidget: public Ui_NameWidget,public QWidget
{
 private:
	QList<QString> names;
	QBoxLayout* boxlayout;
	QMap<QString,bool> has_made;
	QString file_name;

 public:
	void addName(QString s)
	{
		if(has_made[s])
			return;
		Container* cont=new Container(s,scroll_area);
		boxlayout->addWidget(cont);
		names.append(s);
		has_made[s]=true;
		connect(cont,&Container::removed,[cont,s,this]()
			{
				names.removeAll(s);
				boxlayout->removeWidget(cont);
				has_made[s]=false;
			});
	}
	void readNames()
	{
		std::ifstream fin;
		std::string s;
		fin.open(file_name.toStdString());
		while(true)
		{
			std::getline(fin,s);
			if(fin.eof())
				break;
			addName(s.c_str());
		}
		fin.close();
	}
	void saveNames()
	{
		std::ofstream fout(file_name.toStdString());
		for(auto& i: names)
			fout<<i.toStdString()<<std::endl;
		fout.close();
	}
	NameWidget(QString f,QWidget* parent=nullptr): QWidget(parent),file_name(f)
	{
		setupUi(this);
		setWindowIcon(QIcon("./icon.png"));
		setMinimumSize(400,300);
		boxlayout=new QBoxLayout(QBoxLayout::BottomToTop);
		boxlayout->addStretch();
		scroll_content->setLayout(boxlayout);
		connect(btn_quit,&QPushButton::clicked,this,&NameWidget::hide);
		readNames();
	}
};

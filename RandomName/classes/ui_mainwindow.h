/********************************************************************************
** Form generated from reading UI file 'ui_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label1;
    QSpinBox *minsyl_spin;
    QSlider *minsyl_slider;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLabel *label2;
    QSpinBox *maxsyl_spin;
    QSlider *maxsyl_slider;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QLabel *label3;
    QSpinBox *word_spin;
    QSlider *word_slider;
    QWidget *container4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *show_name;
    QPushButton *copy;
    QWidget *container5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *make_one;
    QPushButton *make_many;
    QPushButton *see_names;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(label_title->sizePolicy().hasHeightForWidth());
        label_title->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Impact"));
        font.setPointSize(20);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_title);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(widget);
        label1->setObjectName(QString::fromUtf8("label1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label1->sizePolicy().hasHeightForWidth());
        label1->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        label1->setFont(font1);

        gridLayout->addWidget(label1, 0, 0, 2, 1);

        minsyl_spin = new QSpinBox(widget);
        minsyl_spin->setObjectName(QString::fromUtf8("minsyl_spin"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(minsyl_spin->sizePolicy().hasHeightForWidth());
        minsyl_spin->setSizePolicy(sizePolicy3);
        minsyl_spin->setFont(font1);
        minsyl_spin->setMinimum(1);
        minsyl_spin->setMaximum(10);

        gridLayout->addWidget(minsyl_spin, 0, 1, 1, 1);

        minsyl_slider = new QSlider(widget);
        minsyl_slider->setObjectName(QString::fromUtf8("minsyl_slider"));
        sizePolicy3.setHeightForWidth(minsyl_slider->sizePolicy().hasHeightForWidth());
        minsyl_slider->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(10);
        minsyl_slider->setFont(font2);
        minsyl_slider->setMinimum(1);
        minsyl_slider->setMaximum(10);
        minsyl_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(minsyl_slider, 1, 1, 1, 1);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setSpacing(10);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label2 = new QLabel(widget_2);
        label2->setObjectName(QString::fromUtf8("label2"));
        sizePolicy2.setHeightForWidth(label2->sizePolicy().hasHeightForWidth());
        label2->setSizePolicy(sizePolicy2);
        label2->setFont(font1);

        gridLayout_3->addWidget(label2, 0, 0, 2, 1);

        maxsyl_spin = new QSpinBox(widget_2);
        maxsyl_spin->setObjectName(QString::fromUtf8("maxsyl_spin"));
        sizePolicy3.setHeightForWidth(maxsyl_spin->sizePolicy().hasHeightForWidth());
        maxsyl_spin->setSizePolicy(sizePolicy3);
        maxsyl_spin->setFont(font1);
        maxsyl_spin->setMinimum(1);
        maxsyl_spin->setMaximum(10);

        gridLayout_3->addWidget(maxsyl_spin, 0, 1, 1, 1);

        maxsyl_slider = new QSlider(widget_2);
        maxsyl_slider->setObjectName(QString::fromUtf8("maxsyl_slider"));
        sizePolicy3.setHeightForWidth(maxsyl_slider->sizePolicy().hasHeightForWidth());
        maxsyl_slider->setSizePolicy(sizePolicy3);
        maxsyl_slider->setFont(font2);
        maxsyl_slider->setMinimum(1);
        maxsyl_slider->setMaximum(10);
        maxsyl_slider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(maxsyl_slider, 1, 1, 1, 1);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setSpacing(10);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label3 = new QLabel(widget_3);
        label3->setObjectName(QString::fromUtf8("label3"));
        sizePolicy2.setHeightForWidth(label3->sizePolicy().hasHeightForWidth());
        label3->setSizePolicy(sizePolicy2);
        label3->setFont(font1);

        gridLayout_4->addWidget(label3, 0, 0, 2, 1);

        word_spin = new QSpinBox(widget_3);
        word_spin->setObjectName(QString::fromUtf8("word_spin"));
        sizePolicy3.setHeightForWidth(word_spin->sizePolicy().hasHeightForWidth());
        word_spin->setSizePolicy(sizePolicy3);
        word_spin->setFont(font1);
        word_spin->setMinimum(1);
        word_spin->setMaximum(5);

        gridLayout_4->addWidget(word_spin, 0, 1, 1, 1);

        word_slider = new QSlider(widget_3);
        word_slider->setObjectName(QString::fromUtf8("word_slider"));
        sizePolicy3.setHeightForWidth(word_slider->sizePolicy().hasHeightForWidth());
        word_slider->setSizePolicy(sizePolicy3);
        word_slider->setFont(font2);
        word_slider->setMinimum(1);
        word_slider->setMaximum(5);
        word_slider->setPageStep(5);
        word_slider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(word_slider, 1, 1, 1, 1);


        verticalLayout->addWidget(widget_3);

        container4 = new QWidget(centralwidget);
        container4->setObjectName(QString::fromUtf8("container4"));
        sizePolicy1.setHeightForWidth(container4->sizePolicy().hasHeightForWidth());
        container4->setSizePolicy(sizePolicy1);
        container4->setFont(font2);
        horizontalLayout = new QHBoxLayout(container4);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        show_name = new QLineEdit(container4);
        show_name->setObjectName(QString::fromUtf8("show_name"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(7);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(show_name->sizePolicy().hasHeightForWidth());
        show_name->setSizePolicy(sizePolicy4);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Comic Sans MS"));
        font3.setPointSize(10);
        show_name->setFont(font3);
        show_name->setAlignment(Qt::AlignCenter);
        show_name->setReadOnly(true);

        horizontalLayout->addWidget(show_name);

        copy = new QPushButton(container4);
        copy->setObjectName(QString::fromUtf8("copy"));
        sizePolicy2.setHeightForWidth(copy->sizePolicy().hasHeightForWidth());
        copy->setSizePolicy(sizePolicy2);
        copy->setFont(font1);

        horizontalLayout->addWidget(copy);


        verticalLayout->addWidget(container4);

        container5 = new QWidget(centralwidget);
        container5->setObjectName(QString::fromUtf8("container5"));
        sizePolicy1.setHeightForWidth(container5->sizePolicy().hasHeightForWidth());
        container5->setSizePolicy(sizePolicy1);
        container5->setFont(font2);
        horizontalLayout_2 = new QHBoxLayout(container5);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        make_one = new QPushButton(container5);
        make_one->setObjectName(QString::fromUtf8("make_one"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(make_one->sizePolicy().hasHeightForWidth());
        make_one->setSizePolicy(sizePolicy5);
        make_one->setFont(font1);

        horizontalLayout_2->addWidget(make_one);

        make_many = new QPushButton(container5);
        make_many->setObjectName(QString::fromUtf8("make_many"));
        sizePolicy5.setHeightForWidth(make_many->sizePolicy().hasHeightForWidth());
        make_many->setSizePolicy(sizePolicy5);
        make_many->setFont(font1);

        horizontalLayout_2->addWidget(make_many);


        verticalLayout->addWidget(container5);

        see_names = new QPushButton(centralwidget);
        see_names->setObjectName(QString::fromUtf8("see_names"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(1);
        sizePolicy6.setHeightForWidth(see_names->sizePolicy().hasHeightForWidth());
        see_names->setSizePolicy(sizePolicy6);
        see_names->setFont(font1);

        verticalLayout->addWidget(see_names);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Random Name", nullptr));
        label_title->setText(QCoreApplication::translate("MainWindow", "Random Name Maker", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", " Min syllables: ", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", " Max syllables: ", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", " Number of words:", nullptr));
        show_name->setText(QString());
        copy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        make_one->setText(QCoreApplication::translate("MainWindow", "Make one name", nullptr));
        make_many->setText(QCoreApplication::translate("MainWindow", "Make many names", nullptr));
        see_names->setText(QCoreApplication::translate("MainWindow", "See the names", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

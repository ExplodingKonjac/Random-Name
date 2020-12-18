/********************************************************************************
** Form generated from reading UI file 'ui_namewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMEWIDGET_H
#define UI_NAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NameWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scroll_area;
    QWidget *scroll_content;
    QPushButton *btn_quit;

    void setupUi(QWidget *NameWidget)
    {
        if (NameWidget->objectName().isEmpty())
            NameWidget->setObjectName(QString::fromUtf8("NameWidget"));
        NameWidget->resize(400, 300);
        NameWidget->setMinimumSize(QSize(400, 300));
        verticalLayout = new QVBoxLayout(NameWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scroll_area = new QScrollArea(NameWidget);
        scroll_area->setObjectName(QString::fromUtf8("scroll_area"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(9);
        sizePolicy.setHeightForWidth(scroll_area->sizePolicy().hasHeightForWidth());
        scroll_area->setSizePolicy(sizePolicy);
        scroll_area->setFrameShape(QFrame::Box);
        scroll_area->setFrameShadow(QFrame::Plain);
        scroll_area->setLineWidth(2);
        scroll_area->setWidgetResizable(true);
        scroll_content = new QWidget();
        scroll_content->setObjectName(QString::fromUtf8("scroll_content"));
        scroll_content->setGeometry(QRect(0, 0, 376, 243));
        scroll_area->setWidget(scroll_content);

        verticalLayout->addWidget(scroll_area);

        btn_quit = new QPushButton(NameWidget);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(btn_quit->sizePolicy().hasHeightForWidth());
        btn_quit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(10);
        btn_quit->setFont(font);

        verticalLayout->addWidget(btn_quit);


        retranslateUi(NameWidget);

        QMetaObject::connectSlotsByName(NameWidget);
    } // setupUi

    void retranslateUi(QWidget *NameWidget)
    {
        NameWidget->setWindowTitle(QCoreApplication::translate("NameWidget", "Saved Names", nullptr));
        btn_quit->setText(QCoreApplication::translate("NameWidget", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NameWidget: public Ui_NameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMEWIDGET_H

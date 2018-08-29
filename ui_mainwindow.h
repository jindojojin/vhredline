/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Tue Aug 28 19:42:19 2018
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainwindow
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QStackedWidget *listMode;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *listBtn;

    void setupUi(QWidget *Mainwindow)
    {
    if (Mainwindow->objectName().isEmpty())
        Mainwindow->setObjectName(QString::fromUtf8("Mainwindow"));
    Mainwindow->resize(1078, 609);
    gridLayout_3 = new QGridLayout(Mainwindow);
    gridLayout_3->setMargin(2);
    gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
    gridLayout = new QGridLayout();
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    widget = new QWidget(Mainwindow);
    widget->setObjectName(QString::fromUtf8("widget"));
    gridLayout_2 = new QGridLayout(widget);
    gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
    listMode = new QStackedWidget(widget);
    listMode->setObjectName(QString::fromUtf8("listMode"));

    gridLayout_2->addWidget(listMode, 1, 1, 4, 9);

    horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout_2->addItem(horizontalSpacer_6, 0, 0, 1, 1);

    horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout_2->addItem(horizontalSpacer_5, 0, 3, 1, 1);

    horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout_2->addItem(horizontalSpacer_4, 0, 5, 1, 1);

    horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

    horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout_2->addItem(horizontalSpacer_3, 0, 6, 1, 1);

    listBtn = new QGridLayout();
    listBtn->setObjectName(QString::fromUtf8("listBtn"));

    gridLayout_2->addLayout(listBtn, 1, 0, 4, 1);


    gridLayout->addWidget(widget, 1, 0, 1, 1);


    gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


    retranslateUi(Mainwindow);

    QMetaObject::connectSlotsByName(Mainwindow);
    } // setupUi

    void retranslateUi(QWidget *Mainwindow)
    {
    Mainwindow->setWindowTitle(QApplication::translate("Mainwindow", "C\303\264ng c\341\273\245 thu th\341\272\255p d\341\273\257 li\341\273\207u forensic", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Mainwindow);
    } // retranslateUi

};

namespace Ui {
    class Mainwindow: public Ui_Mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

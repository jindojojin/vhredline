/********************************************************************************
** Form generated from reading ui file 'tab.ui'
**
** Created: Wed Aug 29 13:53:59 2018
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TAB_H
#define UI_TAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QScrollArea>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *Tab)
    {
    if (Tab->objectName().isEmpty())
        Tab->setObjectName(QString::fromUtf8("Tab"));
    Tab->resize(640, 480);
    gridLayout = new QGridLayout(Tab);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    scrollArea = new QScrollArea(Tab);
    scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents_2 = new QWidget();
    scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
    scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 614, 454));
    gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_2);
    gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
    gridLayout_2 = new QGridLayout();
    gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

    gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

    scrollArea->setWidget(scrollAreaWidgetContents_2);

    gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


    retranslateUi(Tab);

    QMetaObject::connectSlotsByName(Tab);
    } // setupUi

    void retranslateUi(QWidget *Tab)
    {
    Tab->setWindowTitle(QApplication::translate("Tab", "Form", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Tab);
    } // retranslateUi

};

namespace Ui {
    class Tab: public Ui_Tab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_H

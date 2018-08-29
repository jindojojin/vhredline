/********************************************************************************
** Form generated from reading ui file 'mode.ui'
**
** Created: Wed Aug 29 21:55:54 2018
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MODE_H
#define UI_MODE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mode
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QPushButton *back_btn;
    QPushButton *next_btn;
    QSpacerItem *horizontalSpacer;
    QLabel *path;

    void setupUi(QWidget *Mode)
    {
    if (Mode->objectName().isEmpty())
        Mode->setObjectName(QString::fromUtf8("Mode"));
    Mode->resize(790, 581);
    gridLayout = new QGridLayout(Mode);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabWidget = new QTabWidget(Mode);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    QFont font;
    font.setPointSize(14);
    tabWidget->setFont(font);

    gridLayout->addWidget(tabWidget, 0, 0, 1, 3);

    back_btn = new QPushButton(Mode);
    back_btn->setObjectName(QString::fromUtf8("back_btn"));
    QFont font1;
    font1.setPointSize(10);
    back_btn->setFont(font1);

    gridLayout->addWidget(back_btn, 1, 1, 1, 1);

    next_btn = new QPushButton(Mode);
    next_btn->setObjectName(QString::fromUtf8("next_btn"));
    next_btn->setFont(font1);

    gridLayout->addWidget(next_btn, 1, 2, 1, 1);

    horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

    path = new QLabel(Mode);
    path->setObjectName(QString::fromUtf8("path"));
    QFont font2;
    font2.setPointSize(11);
    path->setFont(font2);

    gridLayout->addWidget(path, 1, 0, 1, 1);


    retranslateUi(Mode);

    QMetaObject::connectSlotsByName(Mode);
    } // setupUi

    void retranslateUi(QWidget *Mode)
    {
    Mode->setWindowTitle(QApplication::translate("Mode", "Form", 0, QApplication::UnicodeUTF8));
    back_btn->setText(QApplication::translate("Mode", "Quay l\341\272\241i", 0, QApplication::UnicodeUTF8));
    next_btn->setText(QApplication::translate("Mode", "Ti\341\272\277p theo", 0, QApplication::UnicodeUTF8));
    path->setText(QString());
    Q_UNUSED(Mode);
    } // retranslateUi

};

namespace Ui {
    class Mode: public Ui_Mode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODE_H

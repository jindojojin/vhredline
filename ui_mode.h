/********************************************************************************
** Form generated from reading ui file 'mode.ui'
**
** Created: Wed Aug 29 14:00:31 2018
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Mode)
    {
    if (Mode->objectName().isEmpty())
        Mode->setObjectName(QString::fromUtf8("Mode"));
    Mode->resize(790, 581);
    gridLayout = new QGridLayout(Mode);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabWidget = new QTabWidget(Mode);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

    gridLayout->addWidget(tabWidget, 0, 0, 1, 3);

    pushButton = new QPushButton(Mode);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));

    gridLayout->addWidget(pushButton, 1, 1, 1, 1);

    pushButton_2 = new QPushButton(Mode);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

    gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

    label = new QLabel(Mode);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 1, 0, 1, 1);

    horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);


    retranslateUi(Mode);

    QMetaObject::connectSlotsByName(Mode);
    } // setupUi

    void retranslateUi(QWidget *Mode)
    {
    Mode->setWindowTitle(QApplication::translate("Mode", "Form", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("Mode", "Quay l\341\272\241i", 0, QApplication::UnicodeUTF8));
    pushButton_2->setText(QApplication::translate("Mode", "Ti\341\272\277p theo", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Mode", "TextLabel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Mode);
    } // retranslateUi

};

namespace Ui {
    class Mode: public Ui_Mode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODE_H

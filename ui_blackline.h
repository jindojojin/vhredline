/********************************************************************************
** Form generated from reading ui file 'blackline.ui'
**
** Created: Mon Aug 27 10:51:29 2018
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_BLACKLINE_H
#define UI_BLACKLINE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlackLine
{
public:
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BlackLine)
    {
    if (BlackLine->objectName().isEmpty())
        BlackLine->setObjectName(QString::fromUtf8("BlackLine"));
    BlackLine->resize(1000, 598);
    centralWidget = new QWidget(BlackLine);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    centralWidget->setMinimumSize(QSize(500, 400));
    centralWidget->setMaximumSize(QSize(1000, 600));
    centralWidget->setLayoutDirection(Qt::LeftToRight);
    BlackLine->setCentralWidget(centralWidget);
    statusBar = new QStatusBar(BlackLine);
    statusBar->setObjectName(QString::fromUtf8("statusBar"));
    BlackLine->setStatusBar(statusBar);

    retranslateUi(BlackLine);

    QMetaObject::connectSlotsByName(BlackLine);
    } // setupUi

    void retranslateUi(QMainWindow *BlackLine)
    {
    BlackLine->setWindowTitle(QApplication::translate("BlackLine", "BlackLine", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(BlackLine);
    } // retranslateUi

};

namespace Ui {
    class BlackLine: public Ui_BlackLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKLINE_H

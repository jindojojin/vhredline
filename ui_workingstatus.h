/********************************************************************************
** Form generated from reading ui file 'workingstatus.ui'
**
** Created: Wed Aug 29 22:28:32 2018
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WORKINGSTATUS_H
#define UI_WORKINGSTATUS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkingStatus
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *WorkingStatus)
    {
    if (WorkingStatus->objectName().isEmpty())
        WorkingStatus->setObjectName(QString::fromUtf8("WorkingStatus"));
    WorkingStatus->resize(640, 480);
    gridLayout = new QGridLayout(WorkingStatus);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(WorkingStatus);
    label->setObjectName(QString::fromUtf8("label"));
    QFont font;
    font.setPointSize(12);
    label->setFont(font);

    gridLayout->addWidget(label, 0, 0, 1, 1);

    progressBar = new QProgressBar(WorkingStatus);
    progressBar->setObjectName(QString::fromUtf8("progressBar"));
    QFont font1;
    font1.setPointSize(10);
    progressBar->setFont(font1);
    progressBar->setMaximum(0);
    progressBar->setValue(0);

    gridLayout->addWidget(progressBar, 1, 0, 1, 1);

    textBrowser = new QTextBrowser(WorkingStatus);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setFont(font);

    gridLayout->addWidget(textBrowser, 2, 0, 1, 1);


    retranslateUi(WorkingStatus);

    QMetaObject::connectSlotsByName(WorkingStatus);
    } // setupUi

    void retranslateUi(QWidget *WorkingStatus)
    {
    WorkingStatus->setWindowTitle(QApplication::translate("WorkingStatus", "Ti\341\272\277n \304\221\341\273\231 thu th\341\272\255p d\341\273\257 li\341\273\207u", 0, QApplication::UnicodeUTF8));
    label->setText(QString());
    progressBar->setFormat(QApplication::translate("WorkingStatus", "%v/%m", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(WorkingStatus);
    } // retranslateUi

};

namespace Ui {
    class WorkingStatus: public Ui_WorkingStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKINGSTATUS_H

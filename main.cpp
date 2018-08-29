#include <QtGui/QApplication>
#include "runnerman.h"
#include "mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mainwindow w;
    w.show();



    //QObject::connect(&w,SIGNAL(runXagtSign(QString)),r,SLOT(runXagtSlot(QString)));
    return a.exec();
}

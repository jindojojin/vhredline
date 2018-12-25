#include "xagt.h"
#include "QProcess"
#include "QDebug"
Xagt::Xagt(QObject *parent) :
    QObject(parent)
{
}
void Xagt::run(QString path) {
    QProcess proc;
    QStringList argv;
    argv << "-o" << path + "/collect" << "-f" << path + "/temp.xml";
    if(sizeof(void*) != 8) {
        proc.start("./rsc/x64/xagt.exe", argv);
    } else {
        proc.start("./rsc/x86/xagt.exe", argv);
    }
    qDebug("before wait for finish");
    proc.waitForFinished(-1);
    qDebug("da chay xong xagt");
    emit this->isFinish();
}

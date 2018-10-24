#include "xagtthread.h"

XagtThread::XagtThread(QObject *parent) :
    QThread(parent)
{
    this->terminate = false;
}
bool XagtThread::isTerminate(){
    return this->terminate;
}

void XagtThread::ter(){
    this->terminate = true;
}
void XagtThread::restart(){
    this->terminate = false;
}

#ifndef XAGTTHREAD_H
#define XAGTTHREAD_H

#include <QThread>

class XagtThread : public QThread
{
    Q_OBJECT
public:
    explicit XagtThread(QObject *parent = 0);
    bool isTerminate();
private:
    bool terminate;
signals:

public slots:
    void ter();
    void restart();
};

#endif // XAGTTHREAD_H

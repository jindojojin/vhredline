#ifndef XAGT_H
#define XAGT_H

#include <QObject>

class Xagt : public QObject
{
    Q_OBJECT
public:
    explicit Xagt(QObject *parent = 0);
private:
    bool isRunning;
signals:
    void isFinish();
public slots:
    void run(QString);
};

#endif // XAGT_H

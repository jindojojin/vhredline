#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QtXml>
#include <QFile>
#include <QProcess>
#include <QThread>
#include "xagt.h"
#include "xagtthread.h"
class Backend : public QObject
{
    Q_OBJECT
public:
    explicit Backend(QObject *parent = 0);
//#line 16    void createScript(QMap<QString, QList<QStringList> > conf);
    void setConf(QMap<QString, QList<QStringList> > conf);//quang linh fix for line 16
    void createScript();//quang linh fix for line 16
    void setFolderPath(QString fld);
    Xagt * xagt;

private:
    QString folderPath;
    void copyScript(QString source);
    QProcess proc;
    QMap<QString, int > group;
    QMap<QString, int > type;
    void setParamFalse(QDomDocument & doc,const QString & name);
    void deleteCmdByModule(QDomDocument & doc,const QString moduleName);
    QMap<QString, QList<QStringList> > conf;// this is list group & checkbox sent from mode.cpp when start collect data
signals:
    void runXagt(QString);
public slots:
    void runNextGroup();//quanglinh add this line
};

#endif // BACKEND_H

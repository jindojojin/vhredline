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
    void createScript(QMap<QString, QList<QStringList> > conf);
    void setFolderPath(QString fld);
private:
    QString folderPath;
    void copyScript(QString source);
    QProcess proc;
    QMap<QString, int > group;
    QMap<QString, int > type;
    Xagt * xagt;
    void setParamFalse(QDomDocument & doc,const QString & name);
    void deleteCmdByModule(QDomDocument & doc,const QString moduleName);
signals:
    void runXagt(QString);
public slots:

};

#endif // BACKEND_H

#ifndef SCRIPTCREATOR_H
#define SCRIPTCREATOR_H

#include<QtXml>
#include<QString>
#include<QFile>
#include<QProcess>
#include<QtXml>
#include<QObject>
#include "xagt.h"
#include "xagtthread.h"
class ScriptCreator : public QObject
{
    Q_OBJECT
public:
    explicit ScriptCreator(QObject * parent = 0);
    //ScriptCreator();
    //void autoCollect();
    //void ramBackup();
    void collectMemory(QStringList conf);
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
};
#endif // SCRIPTCREATOR_H

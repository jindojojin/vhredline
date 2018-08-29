#ifndef GROUP_H
#define GROUP_H

#include <QObject>
#include "checkbox.h"
//Class n�y d?i di?n cho m?t nh�m checkbox trong redline
class Group : public QObject
{
    Q_OBJECT
public:
    explicit Group(QObject *parent = 0);
    void addCheckBox(Checkbox *);
    QString getXmlName();
    QString getGuiName();
    void setXmlName(QString);
    void setGuiName(QString);
    void setTabID(int);
    int getTabID();

    QList<Checkbox*> listCheckBox;
private:
    QString xmlName;
    QString guiName;
    int tabID;
signals:

public slots:

};

#endif // GROUP_H

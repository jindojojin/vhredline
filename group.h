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
//    bool isChecked();
    bool isShow(int);
    bool isChecked(int);//ki?m tra xem c� du?c t? d?ng check trong mode n�y kh�ng
    bool statusCheck();// tr? v? tr?ng th�i hi?n t?i trong gui
    void setXmlName(QString);
    void setGuiName(QString);
    void setShowOnMode(QString);
    void setCheckedOnMode(QString);
    void setTabID(int);
    int getTabID();

    QList<Checkbox*> listCheckBox;
private:
    QString xmlName;
    QString guiName;
//    bool checked;
     bool status;// luu trang thai check or uncheck trong gui
    int tabID;
    QList<int> showOnMode;
    QList<int> checkedOnMode;
signals:

public slots:
    void check(bool);

};

#endif // GROUP_H

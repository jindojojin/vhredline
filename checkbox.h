#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <QObject>

class Checkbox : public QObject
{
    Q_OBJECT
public:
    explicit Checkbox(QObject *parent = 0);
    QString getXmlName();
    QString getGuiName();
    void setXmlName(QString);
    void setGuiName(QString);
    bool isShow(int);
    bool isChecked(int);//ki?m tra xem có du?c t? d?ng check trong mode này không
    bool statusCheck();// tr? v? tr?ng thái hi?n t?i trong gui
    void setShowOnMode(QString);
    void setCheckedOnMode(QString);
private:
    QString xmlName;
    QString guiName;
    bool status;// luu trang thai check or uncheck trong gui
    QList<int> showOnMode;
    QList<int> checkedOnMode;
signals:

public slots:
    void check(bool);
};

#endif // CHECKBOX_H

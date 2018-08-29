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
    bool isChecked(int);
    void setShowOnMode(QString);
    void setCheckedOnMode(QString);
private:
    QString xmlName;
    QString guiName;
    QList<int> showOnMode;
    QList<int> checkedOnMode;
signals:

public slots:

};

#endif // CHECKBOX_H

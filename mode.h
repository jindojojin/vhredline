#ifndef MODE_H
#define MODE_H

#include <QWidget>
#include <tab.h>
// Class này d?i di?n cho các ch? d? g?i redline, quy d?nh cách checkbox xu?t hi?n và du?c tích s?n
namespace Ui {
    class Mode;
}

class Mode : public QWidget
{
    Q_OBJECT

public:
    explicit Mode(QWidget *parent = 0);
    ~Mode();
    void addTab(Tab*);
    QString getXmlName();
    QString getGuiName();
    void setXmlName(QString);
    void setGuiName(QString);
    int getID();
    void setID(int);
    void initMode();
    void update();
private:
    Ui::Mode *ui;
    QList<Tab*> listTab;
    int id;
    QString xmlName;
    QString guiName;
};

#endif // MODE_H

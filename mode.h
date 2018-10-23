#ifndef MODE_H
#define MODE_H

#include <QWidget>
#include <tab.h>
// Class n�y d?i di?n cho c�c ch? d? g?i redline, quy d?nh c�ch checkbox xu?t hi?n v� du?c t�ch s?n
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
    void update();
private slots:
    void on_next_btn_clicked();
    void on_back_btn_clicked();

private:
    Ui::Mode *ui;
    QList<Tab*> listTab;
    int id;
    QString xmlName;
    QString guiName;
    bool isFolderSet;
    QString currentFolder;
    void getListCheckBox(); // l?y ra c�c checkbox kh�ng du?c tick truy?n cho executeGroup.
    void executeGroup(QStringList);
};

#endif // MODE_H

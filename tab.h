#ifndef TAB_H
#define TAB_H
#include "group.h"

#include <QWidget>

namespace Ui {
    class Tab;
}

class Tab : public QWidget
{
    Q_OBJECT

public:
    explicit Tab(QWidget *parent = 0);
    ~Tab();
    QString getXmlName();
        QString getGuiName();
        void setXmlName(QString);
        void setGuiName(QString);
        void addGroup(Group *);
        void initGroups();
        bool isShowOnMode(int);
        bool isChecked(int);
        void setShowOnMode(QString);
        int getTabID();
        void setTabID(int);
         QList<Group*> listGroup;
         void showGroup();

private:
    Ui::Tab *ui;
    QString xmlName;
    QString guiName;
    QList<int> showOnMode;
    int id;
};

#endif // TAB_H

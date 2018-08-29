#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <mode.h>
#include <tab.h>
#include <group.h>
#include <checkbox.h>

namespace Ui {
    class Mainwindow;
}

class Mainwindow : public QWidget
{
    Q_OBJECT

public:
    explicit Mainwindow(QWidget *parent = 0);
    ~Mainwindow();

private:
    Ui::Mainwindow *ui;
    QList<Mode*> listMode;
    QList<Tab*> listTab;
    QList<Group*>lisGroup;
    void readDefaultMode();
    void initMode();
    void addMode(QString);
    void analyzeTab(QString);
    void analyzeGroup(QString);    
private slots:
    void changeMode(int);
};



#endif // MAINWINDOW_H

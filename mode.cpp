#include "mode.h"
#include "ui_mode.h"
#include "QGroupBox"
#include "QCheckBox"
#include "QDebug"

Mode::Mode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mode)
{
    ui->setupUi(this);
}

Mode::~Mode()
{
    delete ui;
}

void Mode::addTab(Tab *tab){
    this->listTab.append(tab);
}
QString Mode::getGuiName(){
    return this->guiName;
}
QString Mode::getXmlName(){
    return this->xmlName;
}
void Mode::setGuiName(QString name){
    this->guiName = name;
}
void Mode::setXmlName(QString name){
    this->xmlName = name;
}
void Mode::setID(int id){
    this->id = id;
}
int Mode::getID(){
    return this->id;
}
void Mode::initMode(){
//    foreach(Tab *tab,this->listTab){
//        qDebug()<<tab->getGuiName();
//        if(tab->isShowOnMode(this->id)){
//            this->ui->tabWidget->addTab(tab,tab->getGuiName());
//            qDebug()<<tab->getGuiName();
////            this->ui->tabWidget->addTab(ne)
////            foreach(Group *group, tab->listGroup){
//                tab->showGroup();
//                qDebug()<<tab->listGroup;
////            }
//        }
//    }
}
void Mode::update(){
    this->ui->tabWidget->clear();
        foreach(Tab *tab,this->listTab){
            qDebug()<<tab->getGuiName();
            if(tab->isShowOnMode(this->id)){
                this->ui->tabWidget->addTab(tab,tab->getGuiName());
                qDebug()<<tab->getGuiName();
                foreach(Group *group, tab->listGroup){
//                    tab->showGroup();
                    qDebug()<<tab->listGroup;
                }
            }
        }
}

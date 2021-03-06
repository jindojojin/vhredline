﻿#include "mode.h"
#include "ui_mode.h"
#include "QGroupBox"
#include "QCheckBox"
#include "QDebug"
#include "QFileDialog"
#include "workingstatus.h"
#include "backend.h"
Mode::Mode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mode)
{
    ui->setupUi(this);
    this->ui->back_btn->click();
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
void Mode::update(){
    this->ui->tabWidget->clear();
    foreach(Tab *tab,this->listTab){
        qDebug()<<tab->getGuiName();
        if(tab->isShowOnMode(this->id)){
            this->ui->tabWidget->addTab(tab,tab->getGuiName());
            qDebug()<<tab->getGuiName();
            tab->showGroup(this->id);
        }
    }
}

void Mode::on_next_btn_clicked()
{
    if(!this->isFolderSet){
    this->folder = QFileDialog::getExistingDirectory(this,QString::fromUtf8("Chọn thư mục lưu kết quả"),
                                                       "/home",QFileDialog::DontResolveSymlinks| QFileDialog::ShowDirsOnly);
    if(folder!=""){
        qDebug()<<folder;
        this->ui->path->setText(QString::fromUtf8("Kết quả thu thập sẽ được lưu tại: ")+folder);
        this->ui->back_btn->setEnabled(true);
        this->ui->next_btn->setText(QString::fromUtf8("Bắt đầu thu thập"));
        this->isFolderSet=true;
        this->currentFolder=folder;
    }
    }else{// bat dau goi den cml
//        WorkingStatus *ws = new WorkingStatus();
//        ws->show();
        this->getListCheckBox();
    }
}

void Mode::on_back_btn_clicked()
{
    this->ui->back_btn->setEnabled(false);
    this->ui->path->setText("");
    this->ui->next_btn->setText(QString::fromUtf8("Tiếp theo"));
    this->isFolderSet=false;
}

void Mode::getListCheckBox(){
    QMap<QString, QList<QStringList> > allGroup;
    foreach(Tab *tab, this->listTab){
        //qDebug()<< tab->getXmlName();
//        QList<QStringList> tabList;
//        tabList.append(tab->getXmlName());
        bool tabDisable = true;
        foreach(Group * group, tab->listGroup) {
            if(group->statusCheck()) {
                qDebug()<< tab->getGuiName()<<" chứa "<<group->getGuiName();
                tabDisable = false;
                break;
            }
        }
        if(tabDisable) continue;


        foreach(Group *group, tab->listGroup){
            if(!group->statusCheck()){
                //qDebug()<<"-----"<<group->getXmlName();
//                allGroup[tab->getXmlName()].push_back(QStringList(group->getXmlName()));
 //               allGroup.append(groupToExecute);
            } else {
                QStringList groupToExecute;
                groupToExecute.append(group->getXmlName());

                foreach(Checkbox *c, group->listCheckBox){
                    if(!c->statusCheck()) {
                        groupToExecute.append(c->getXmlName());
                        //qDebug()<< "**********"<< c->getXmlName();
                    }
                }
//                if(groupToExecute.size() >1 ) allGroup[tab->getXmlName()].push_back(groupToExecute);
                 allGroup[tab->getXmlName()].push_back(groupToExecute);
            }
        }
    }
    this->executeAll(allGroup);
}

void Mode::executeAll(QMap<QString, QList<QStringList> > listGroup){
    //Hướng làm ở đây
    // QString đầu tiên là tên tab
    // QString thứ 2 là tên group
    // Các QString tiếp theo là các checkbox không được click

    qDebug()<<"##############################";
    qDebug()<<listGroup;
    Backend backend;
    backend.setFolderPath(this->folder);
    backend.setConf(listGroup);// subtitude for line 132
//#line 132    backend.createScript(listGroup);
    backend.runNextGroup();
}

#include "tab.h"
#include "ui_tab.h"
#include "QGroupBox"
#include "QCheckBox"
#include "QDebug"

Tab::Tab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab)
{
    ui->setupUi(this);
}

Tab::~Tab()
{
    delete ui;
}
QString Tab::getGuiName(){
    return this->guiName;
}
QString Tab::getXmlName(){
    return this->xmlName;
}
void Tab::setGuiName(QString name){
    this->guiName = name;
}
void Tab::setXmlName(QString name){
    this->xmlName = name;
}
void Tab::addGroup(Group * g){
    this->listGroup.append(g);
}
void Tab::setTabID(int id){
    this->id = id;
}
int Tab::getTabID(){
    return this->id;
}

void Tab::setShowOnMode(QString string){
//    qDebug()<<string;
    QStringList list = string.split("\ ");
    foreach(QString number,list){
        this->showOnMode.append(number.toInt());
//        qDebug()<<number;
    }
}
bool Tab::isShowOnMode(int modeID){
    foreach(int mode, this->showOnMode){
        if(mode == modeID) return true;
        qDebug()<<mode;
    }
    return false;
}
void Tab::showGroup(){
    foreach(Group* group, this->listGroup){
        QGroupBox *groupBox = new QGroupBox();
        groupBox->setTitle(group->getGuiName());
        QVBoxLayout *vbox = new QVBoxLayout();
        foreach(Checkbox *checkbox, group->listCheckBox){
            if(checkbox->isShow(this->id)){
                QCheckBox *chBox= new QCheckBox();
                chBox->setText(checkbox->getGuiName());
                chBox->setChecked(checkbox->isChecked(this->id));
                vbox->addWidget(chBox);
            }
        }
        vbox->addStretch(1);
        groupBox->setLayout(vbox);
        this->ui->gridLayout_2->addWidget(groupBox);
    }
}

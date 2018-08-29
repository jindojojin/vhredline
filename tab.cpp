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
void Tab::showGroup(int modeID){
    delete this->ui->scrollAreaWidgetContents_2->layout();
    QGridLayout *layout= new QGridLayout();
    foreach(Group* group, this->listGroup){
        QGroupBox *groupBox = new QGroupBox();
        groupBox->setTitle(group->getGuiName());
        QVBoxLayout *vbox = new QVBoxLayout();
        foreach(Checkbox *checkbox, group->listCheckBox){
            if(checkbox->isShow(modeID)){
                QCheckBox *chBox= new QCheckBox();
                chBox->setText(checkbox->getGuiName());
                chBox->setChecked(checkbox->isChecked(modeID));
                chBox->setStyleSheet("margin-left:15");
                chBox->setFont(QFont("MS Shell Dlg 2",12,-1,false));
                vbox->addWidget(chBox);
            }
        }
        groupBox->setCheckable(true);
        groupBox->setLayout(vbox);
        layout->addWidget(groupBox);
    }
    this->ui->scrollAreaWidgetContents_2->setLayout(layout);
}

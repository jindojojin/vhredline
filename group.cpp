#include "group.h"
#include "QDebug"
#include "QStringList"

Group::Group(QObject *parent) :
    QObject(parent)
{
}
QString Group::getGuiName(){
    return this->guiName;
}
QString Group::getXmlName(){
    return this->xmlName;
}

void Group::setGuiName(QString name){
    this->guiName = name;
}
void Group::setXmlName(QString name){
    this->xmlName = name;
}
void Group::addCheckBox(Checkbox * c){
    this->listCheckBox.append(c);
}
void Group::setTabID(int id){
    this->tabID = id;
}
int Group::getTabID(){
    return this->tabID;
}
void Group::setCheckedOnMode(QString string){
    QStringList list = string.split("\ ");
    foreach(QString number,list){
        this->checkedOnMode.append(number.toInt());
    }
}
void Group::setShowOnMode(QString string){
    QStringList list = string.split("\ ");
    foreach(QString number,list){
        this->showOnMode.append(number.toInt());
    }
}
bool Group::isShow(int modeID){
    foreach(int id, this->showOnMode){
        if(id==modeID) return true;
    }
    return false;
}
bool Group::isChecked(int modeID){
    foreach(int id, this->checkedOnMode){
        if(id==modeID) return true;
    }
    return false;
}
bool Group::statusCheck(){
    return this->status;
}

void Group::check(bool x){
    qDebug()<<"check "<<x;
    this->status=x;
}

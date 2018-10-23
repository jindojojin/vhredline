#include "checkbox.h"
#include "QStringList"

Checkbox::Checkbox(QObject *parent) :
    QObject(parent)
{
}

QString Checkbox::getGuiName(){
    return this->guiName;
}
QString Checkbox::getXmlName(){
    return this->xmlName;
}
void Checkbox::setGuiName(QString name){
    this->guiName = name;
}
void Checkbox::setXmlName(QString name){
    this->xmlName = name;
}
bool Checkbox::isShow(int modeID){
    foreach(int id, this->showOnMode){
        if(id==modeID) return true;
    }
    return false;
}
bool Checkbox::isChecked(int modeID){
    foreach(int id, this->checkedOnMode){
        if(id==modeID) return true;
    }
    return false;
}
void Checkbox::setCheckedOnMode(QString string){
    QStringList list = string.split("\ ");
    foreach(QString number,list){
        this->checkedOnMode.append(number.toInt());
    }
}
void Checkbox::setShowOnMode(QString string){
    QStringList list = string.split("\ ");
    foreach(QString number,list){
        this->showOnMode.append(number.toInt());
    }
}

bool Checkbox::statusCheck(){
    return this->status;
}

void Checkbox::check(bool x){
    this->status=x;
}

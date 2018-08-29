#include "group.h"

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

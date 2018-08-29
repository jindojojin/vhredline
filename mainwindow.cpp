#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QTextStream"
#include "mode.h"
#include "tab.h"
#include "group.h"
#include "checkbox.h"
#include "QPushButton"
#include "QDebug"
#include "QListWidgetItem"
#include "QSignalMapper"

QRegExp mode_matcher("<mode>([^\\n]*)<\/mode>");
QRegExp modeID_matcher("<modeID>(\\d)<\/modeID>");
QRegExp xmlName_matcher("<xmlName>([^<]*)<\/xmlName>");
QRegExp guiName_matcher("<guiName>([^<]*)<\/guiName>");
QRegExp tab_matcher("<tab>([^\\n]*)<\/tab>");
QRegExp tabID_matcher("<tabID>(.*)<\/tabID>");
QRegExp showOnMode_matcher("<showOnMode>([^<]*)<\/showOnMode>");
QRegExp checkbox_matcher("<checkbox>(<showOnMode>[^<]*<\/showOnMode><checkedOnMode>[^<]*<\/checkedOnMode><xmlName>[^<]*<\/xmlName><guiName>[^<]*<\/guiName>)<\/checkbox>");
QRegExp checkedOnMode_matcher("<checkedOnMode>([^<]*)<\/checkedOnMode>");
QRegExp group_matcher("<group>([^\\n]*)<\/group>");

Mainwindow::Mainwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mainwindow)
{
    ui->setupUi(this);
    this->readDefaultMode();
    this->initMode();
}

Mainwindow::~Mainwindow()
{
    delete ui;
}
void Mainwindow::initMode(){
    //add group to Tab
    foreach(Mode *mode, this->listMode){        
        this->ui->listMode->addWidget(mode);
        QPushButton *btn = new QPushButton();
        btn->setText(mode->getGuiName());
        this->ui->listBtn->addWidget(btn);
        QSignalMapper *mapper= new QSignalMapper();
        mapper->setMapping(btn,mode->getID());
        connect(btn,SIGNAL(clicked()),mapper,SLOT(map()));
        connect(mapper,SIGNAL(mapped(int)),this,SLOT(changeMode(int)));
    }
    listMode[0]->update();
}
void Mainwindow::changeMode(int modeID){
    if(this->ui->listMode->currentIndex() == modeID) return;
    this->listMode[modeID]->update();
    qDebug()<<"da chuyen mode"<<modeID;
    this->ui->listMode->setCurrentIndex(modeID);
}

void Mainwindow::readDefaultMode(){
    QFile config("defaultCheckBox.xml");
    if(config.open(QFile::Text|QFile::ReadOnly)){
        QTextStream reader(&config);
        reader.setCodec("UTF-8");
        QString configData = reader.readAll();
        QStringList listMode;
        int pos = 0;
        while ((pos = mode_matcher.indexIn(configData, pos)) != -1) {
            listMode.append(mode_matcher.cap(1));
            pos += mode_matcher.matchedLength();
        }
        foreach(QString modeData,listMode){
            this->addMode(modeData);
        }
        pos=0;
        QStringList listTab;
        while ((pos = tab_matcher.indexIn(configData, pos)) != -1) {
            listTab.append(tab_matcher.cap(1));
            pos += tab_matcher.matchedLength();
        }
        foreach(QString tabData,listTab){
            this->analyzeTab(tabData);
        }
        pos=0;
        QStringList listGroup;
        while ((pos = group_matcher.indexIn(configData, pos)) != -1) {
            listGroup.append(group_matcher.cap(1));
            pos += group_matcher.matchedLength();
        }
        foreach(QString groupData,listGroup){
            this->analyzeGroup(groupData);
        }
    }
}

void Mainwindow::addMode(QString modeData){
    Mode *mode = new Mode();
    modeID_matcher.indexIn(modeData);
    xmlName_matcher.indexIn(modeData);
    guiName_matcher.indexIn(modeData);
    mode->setXmlName(xmlName_matcher.cap(1));
    mode->setGuiName(guiName_matcher.cap(1));
    mode->setID(modeID_matcher.cap(1).toInt());
    qDebug()<<"đã them mode co id ="<<modeID_matcher.cap(1);
    this->listMode.append(mode);
}

void Mainwindow::analyzeTab(QString tabData){
    Tab *tab = new Tab();
//    qDebug()<<tabData;
    tabID_matcher.indexIn(tabData);
    showOnMode_matcher.indexIn(tabData);
    xmlName_matcher.indexIn(tabData);
    guiName_matcher.indexIn(tabData);
    tab->setGuiName(guiName_matcher.cap(1));
    tab->setXmlName(xmlName_matcher.cap(1));
    tab->setShowOnMode(showOnMode_matcher.cap(1));
    tab->setTabID(tabID_matcher.cap(1).toInt());
//    qDebug()<<guiName_matcher.cap(1);
    this->listTab.append(tab);
    foreach(Mode *mode, this->listMode) mode->addTab(tab);
}
void Mainwindow::analyzeGroup(QString groupData){
    Group *group = new Group();
    tabID_matcher.indexIn(groupData);
    guiName_matcher.indexIn(groupData);
    xmlName_matcher.indexIn(groupData);
    checkbox_matcher.indexIn(groupData);
    group->setXmlName(xmlName_matcher.cap(1));
    group->setGuiName(guiName_matcher.cap(1));
    group->setTabID(tabID_matcher.cap(1).toInt());
    int pos=0;
    QStringList list;
    while ((pos = checkbox_matcher.indexIn(groupData, pos)) != -1) {
        list.append(checkbox_matcher.cap(1));
        pos += checkbox_matcher.matchedLength();
    }
    foreach(QString c, list){
        Checkbox *checkbox = new Checkbox();
        showOnMode_matcher.indexIn(c);
        checkedOnMode_matcher.indexIn(c);
        xmlName_matcher.indexIn(c);
        guiName_matcher.indexIn(c);
        checkbox->setCheckedOnMode(checkedOnMode_matcher.cap(1));
        checkbox->setShowOnMode(showOnMode_matcher.cap(1));
        checkbox->setGuiName(guiName_matcher.cap(1));
        checkbox->setXmlName(xmlName_matcher.cap(1));
        group->addCheckBox(checkbox);
    }
    foreach(Tab* tab, this->listTab){
        if(tab->getTabID() == group->getTabID()){
            tab->addGroup(group);
            break;
        }
    }
}

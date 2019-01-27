#include "backend.h"

Backend::Backend(QObject *parent) :
    QObject(parent)
{
        XagtThread * thread = new XagtThread();
        thread->start();
        this->xagt = new Xagt();
        xagt->moveToThread(thread);
        QObject::connect(this, SIGNAL(runXagt(QString)),xagt,SLOT(run(QString)));
        QObject::connect(xagt,SIGNAL(isFinish()),this, SLOT(runNextGroup()));
}

void Backend::setConf(QMap<QString, QList<QStringList> > conf){
    this->conf=conf;
}

void Backend::runNextGroup(){
    qDebug()<<"run next group";
    this->createScript();
}

void Backend::createScript() {
    qDebug()<<"Start create script";
    QMap<QString, QList<QStringList> >::iterator i = this->conf.begin();
    if(i != this->conf.end()) {
        qDebug()<<"Còn l?i"<<this->conf.keys();
        this->copyScript( i.key()+ ".xml");
        qDebug()<<"Da bat dau thu thap"+i.key();

        QFile file(this->folderPath + "/temp.xml");
        file.open(QIODevice::ReadWrite);
        QByteArray xmlData(file.readAll());
        file.close();

        QDomDocument doc;
        doc.setContent(xmlData);

        for(int j= 0; j< i.value().count(); j++) {
            if(i.value().at(j).count() == 1) {
                this->deleteCmdByModule(doc, i.value().at(j).at(0));
            }
            if(i.value().at(j).count() > 1) {
                for(int k = 1; k<i.value().at(j).count(); k++) {
                    this->setParamFalse(doc, i.value().at(j).at(k));
                }

            }
        }
        //qDebug() << doc.toString();
        QFile newFile(this->folderPath +"/temp.xml");
        newFile.open(QIODevice::ReadWrite);
        QTextStream qts(&newFile);
        doc.save(qts,4);
        newFile.close();

        emit this->runXagt(this->folderPath);

//        i++;
        this->conf.remove(i.key());// subtitude for upper line
        qDebug()<<"Còn l?i"<<this->conf.keys();
    }else qDebug()<<"Het thu de thu thap";




   // QFile::remove(this->folderPath + "/temp.xml");


//    for(int i=0; i<con.count(); i++) {
//        QStringList conf = con.at(i);
//        this->copyScript(conf.at(0) + ".xml");
//        QFile file(this->folderPath + "/temp.xml");
//        file.open(QIODevice::ReadWrite);
//        QByteArray xmlData(file.readAll());
//        file.close();

//        QDomDocument doc;
//        doc.setContent(xmlData);
//        switch(this->group[conf.at(1)]) {
//        case 1:
//            break;
//        case 2:
//            QStringList::Iterator i = conf.begin();
//            i++;i++;
//            while(i != conf.end()) {
//                this->setParamFalse(doc, *i);
//                //this->deleteCmdByModule(doc, *i);
//                i++;
//            }

//        }
//        //qDebug() << doc.toString();
//        QFile newFile(this->folderPath +"/temp.xml");
//        newFile.open(QIODevice::ReadWrite);
//        QTextStream qts(&newFile);
//        doc.save(qts,4);
//        newFile.close();
//    }
}
void Backend::copyScript(QString source){
    QString des = this->folderPath + "/temp.xml";
    QString src = "./rsc/" + source;
    if (QFile::exists(des))
    {
        QFile::remove(des);
    }

    QFile::copy(src, des);
}
void Backend::setFolderPath(QString fld){
    this->folderPath = fld;
}
void Backend::setParamFalse(QDomDocument &doc, const QString &name){
    qDebug() << "~~~~~~~~~~~~~~~~~~~~~~~~~";
    qDebug() << name;
    QDomNodeList list = doc.elementsByTagName("param");
    for(int i=0; i<list.length(); i++) {
        QDomElement e = list.item(i).toElement();
        if(e.hasAttribute("name") && e.attribute("name") == name) {
            e.firstChild().firstChild().toText().setData("false");
        }
    }
}

void Backend::deleteCmdByModule(QDomDocument &doc, const QString moduleName) {
    QDomNodeList list = doc.elementsByTagName("module");
    for(int i=0; i<list.length(); i++) {
        QDomElement node = list.item(i).toElement();
        if(node.hasAttribute("name") && node.attribute("name") == moduleName) {
            //node.toElement().setAttribute("1", "1");
            QDomNode parent = node.parentNode();
            parent.parentNode().removeChild(parent);
        }
    }
}

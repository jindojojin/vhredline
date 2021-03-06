#include "scriptcreator.h"

//#include <QDebug>
ScriptCreator::ScriptCreator(QObject *parent) :
    QObject(parent)
{
//    XagtThread * thread = new XagtThread();
//    thread->start();
//    xagt = new Xagt();
//    xagt->moveToThread(thread);
//    QObject::connect(this, SIGNAL(runXagt(QString)),xagt,SLOT(run(QString)));
}
/*
  // Ham dung de chinh sua script
  // @conf:
  */
void ScriptCreator::createScript(QMap<QString, QList<QStringList> > con) {
    QMap<QString, QList<QStringList> >::iterator i = con.begin();
    while(i++ != con.end()) {
        this->copyScript( i.key()+ ".xml");
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




        //emit this->runXagt(this->folderPath);




    }


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

/*
// ham de copy file xml vao thu muc luu ket qua
// @source: duong dan den file xml
*/
void ScriptCreator::copyScript(QString source) {
    QString des = this->folderPath + "/temp.xml";
    QString src = "./rsc/" + source;
    if (QFile::exists(des))
    {
        QFile::remove(des);
    }

    QFile::copy(src, des);
}
void ScriptCreator::setFolderPath(QString fld) {
    this->folderPath = fld;
}
/*
// ham de set 1 param thanh false
// @doc: cay dom can sua
// @name: ten param
// @index: trong th co nhieu param cung ten, index la param minh chon
*/
void ScriptCreator:: setParamFalse(QDomDocument & doc,const QString & name) {
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
/*
  // ham dung de xoa 1 module theo ten cua no
  // @doc: xml can xoa
  // @ moduleName: ten module can xoa
  */
void ScriptCreator::deleteCmdByModule(QDomDocument & doc,const QString moduleName){
    QDomNodeList list = doc.elementsByTagName("module");
    for(int i=0; i<list.length(); i++) {
        QDomElement node = list.item(i).toElement();
        if(node.hasAttribute("name") && node.attribute("name") == moduleName) {
            node.toElement().setAttribute("1", "1");
            QDomNode parent = node.parentNode();
            parent.parentNode().removeChild(parent);
        }
    }
}


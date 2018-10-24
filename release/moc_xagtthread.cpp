/****************************************************************************
** Meta object code from reading C++ file 'xagtthread.h'
**
** Created: Wed Oct 24 12:15:06 2018
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../xagtthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xagtthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XagtThread[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      18,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XagtThread[] = {
    "XagtThread\0\0ter()\0restart()\0"
};

const QMetaObject XagtThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_XagtThread,
      qt_meta_data_XagtThread, 0 }
};

const QMetaObject *XagtThread::metaObject() const
{
    return &staticMetaObject;
}

void *XagtThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XagtThread))
	return static_cast<void*>(const_cast< XagtThread*>(this));
    return QThread::qt_metacast(_clname);
}

int XagtThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ter(); break;
        case 1: restart(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

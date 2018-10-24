/****************************************************************************
** Meta object code from reading C++ file 'xagt.h'
**
** Created: Wed Oct 24 12:15:04 2018
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../xagt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xagt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Xagt[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      11,    5,    6,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      22,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Xagt[] = {
    "Xagt\0\0bool\0isFinish()\0run(QString)\0"
};

const QMetaObject Xagt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Xagt,
      qt_meta_data_Xagt, 0 }
};

const QMetaObject *Xagt::metaObject() const
{
    return &staticMetaObject;
}

void *Xagt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Xagt))
	return static_cast<void*>(const_cast< Xagt*>(this));
    return QObject::qt_metacast(_clname);
}

int Xagt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = isFinish();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: run((*reinterpret_cast< QString(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
bool Xagt::isFinish()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE

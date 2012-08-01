/****************************************************************************
** Meta object code from reading C++ file 'remotecontrol.h'
**
** Created: Mon Jul 16 19:41:35 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../remotecontrol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remotecontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RemoteControl[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      40,   30,   14,   14, 0x08,
      69,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RemoteControl[] = {
    "RemoteControl\0\0receivedData()\0cmdString\0"
    "handleCommandString(QString)\0applyCache()\0"
};

const QMetaObject RemoteControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RemoteControl,
      qt_meta_data_RemoteControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RemoteControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RemoteControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RemoteControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteControl))
        return static_cast<void*>(const_cast< RemoteControl*>(this));
    return QObject::qt_metacast(_clname);
}

int RemoteControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: receivedData(); break;
        case 1: handleCommandString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: applyCache(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'conversionwizard.h'
**
** Created: Mon Jul 16 19:42:24 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../conversionwizard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'conversionwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConversionWizard[] = {

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
      21,   18,   17,   17, 0x08,
      45,   38,   17,   17, 0x08,
      60,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConversionWizard[] = {
    "ConversionWizard\0\0id\0pageChanged(int)\0"
    "toggle\0showHelp(bool)\0convert()\0"
};

const QMetaObject ConversionWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_ConversionWizard,
      qt_meta_data_ConversionWizard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConversionWizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConversionWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConversionWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConversionWizard))
        return static_cast<void*>(const_cast< ConversionWizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int ConversionWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: pageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: showHelp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: convert(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

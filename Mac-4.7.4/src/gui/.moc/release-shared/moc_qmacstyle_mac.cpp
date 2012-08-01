/****************************************************************************
** Meta object code from reading C++ file 'qmacstyle_mac.h'
**
** Created: Mon Jul 16 17:10:27 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../styles/qmacstyle_mac.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmacstyle_mac.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMacStyle[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   17,   11,   10, 0x09,
     136,  119,   11,   10, 0x29,
     212,  199,   11,   10, 0x29,
     303,  259,  255,   10, 0x09,
     470,  433,  255,   10, 0x29,
     615,  585,  255,   10, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_QMacStyle[] = {
    "QMacStyle\0\0QIcon\0standardIcon,opt,widget\0"
    "standardIconImplementation(StandardPixmap,const QStyleOption*,const QW"
    "idget*)\0"
    "standardIcon,opt\0"
    "standardIconImplementation(StandardPixmap,const QStyleOption*)\0"
    "standardIcon\0standardIconImplementation(StandardPixmap)\0"
    "int\0control1,control2,orientation,option,widget\0"
    "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::Cont"
    "rolType,Qt::Orientation,const QStyleOption*,const QWidget*)\0"
    "control1,control2,orientation,option\0"
    "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::Cont"
    "rolType,Qt::Orientation,const QStyleOption*)\0"
    "control1,control2,orientation\0"
    "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::Cont"
    "rolType,Qt::Orientation)\0"
};

const QMetaObject QMacStyle::staticMetaObject = {
    { &QWindowsStyle::staticMetaObject, qt_meta_stringdata_QMacStyle,
      qt_meta_data_QMacStyle, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMacStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMacStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMacStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMacStyle))
        return static_cast<void*>(const_cast< QMacStyle*>(this));
    return QWindowsStyle::qt_metacast(_clname);
}

int QMacStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindowsStyle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QIcon _r = standardIconImplementation((*reinterpret_cast< StandardPixmap(*)>(_a[1])),(*reinterpret_cast< const QStyleOption*(*)>(_a[2])),(*reinterpret_cast< const QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 1: { QIcon _r = standardIconImplementation((*reinterpret_cast< StandardPixmap(*)>(_a[1])),(*reinterpret_cast< const QStyleOption*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 2: { QIcon _r = standardIconImplementation((*reinterpret_cast< StandardPixmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 3: { int _r = layoutSpacingImplementation((*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QStyleOption*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = layoutSpacingImplementation((*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QStyleOption*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = layoutSpacingImplementation((*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

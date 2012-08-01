/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_menubar_p.h'
**
** Created: Mon Jul 16 19:54:23 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../shared/qdesigner_menubar_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_menubar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__SpecialMenuAction[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__SpecialMenuAction[] = {
    "qdesigner_internal::SpecialMenuAction\0"
};

const QMetaObject qdesigner_internal::SpecialMenuAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_qdesigner_internal__SpecialMenuAction,
      qt_meta_data_qdesigner_internal__SpecialMenuAction, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::SpecialMenuAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::SpecialMenuAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::SpecialMenuAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__SpecialMenuAction))
        return static_cast<void*>(const_cast< SpecialMenuAction*>(this));
    return QAction::qt_metacast(_clname);
}

int qdesigner_internal::SpecialMenuAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDesignerMenuBar[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      31,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerMenuBar[] = {
    "QDesignerMenuBar\0\0deleteMenu()\0"
    "slotRemoveMenuBar()\0"
};

const QMetaObject QDesignerMenuBar::staticMetaObject = {
    { &QMenuBar::staticMetaObject, qt_meta_stringdata_QDesignerMenuBar,
      qt_meta_data_QDesignerMenuBar, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesignerMenuBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesignerMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesignerMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerMenuBar))
        return static_cast<void*>(const_cast< QDesignerMenuBar*>(this));
    return QMenuBar::qt_metacast(_clname);
}

int QDesignerMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenuBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: deleteMenu(); break;
        case 1: slotRemoveMenuBar(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

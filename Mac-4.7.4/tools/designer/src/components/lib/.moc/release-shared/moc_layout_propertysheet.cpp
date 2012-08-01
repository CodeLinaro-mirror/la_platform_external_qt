/****************************************************************************
** Meta object code from reading C++ file 'layout_propertysheet.h'
**
** Created: Mon Jul 16 20:01:10 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../formeditor/layout_propertysheet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layout_propertysheet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__LayoutPropertySheet[] = {

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

static const char qt_meta_stringdata_qdesigner_internal__LayoutPropertySheet[] = {
    "qdesigner_internal::LayoutPropertySheet\0"
};

const QMetaObject qdesigner_internal::LayoutPropertySheet::staticMetaObject = {
    { &QDesignerPropertySheet::staticMetaObject, qt_meta_stringdata_qdesigner_internal__LayoutPropertySheet,
      qt_meta_data_qdesigner_internal__LayoutPropertySheet, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::LayoutPropertySheet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::LayoutPropertySheet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::LayoutPropertySheet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__LayoutPropertySheet))
        return static_cast<void*>(const_cast< LayoutPropertySheet*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.PropertySheet"))
        return static_cast< QDesignerPropertySheetExtension*>(const_cast< LayoutPropertySheet*>(this));
    return QDesignerPropertySheet::qt_metacast(_clname);
}

int qdesigner_internal::LayoutPropertySheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerPropertySheet::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

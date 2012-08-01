/****************************************************************************
** Meta object code from reading C++ file 'line_propertysheet.h'
**
** Created: Mon Jul 16 20:01:13 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../formeditor/line_propertysheet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'line_propertysheet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__LinePropertySheet[] = {

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

static const char qt_meta_stringdata_qdesigner_internal__LinePropertySheet[] = {
    "qdesigner_internal::LinePropertySheet\0"
};

const QMetaObject qdesigner_internal::LinePropertySheet::staticMetaObject = {
    { &QDesignerPropertySheet::staticMetaObject, qt_meta_stringdata_qdesigner_internal__LinePropertySheet,
      qt_meta_data_qdesigner_internal__LinePropertySheet, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::LinePropertySheet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::LinePropertySheet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::LinePropertySheet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__LinePropertySheet))
        return static_cast<void*>(const_cast< LinePropertySheet*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.PropertySheet"))
        return static_cast< QDesignerPropertySheetExtension*>(const_cast< LinePropertySheet*>(this));
    return QDesignerPropertySheet::qt_metacast(_clname);
}

int qdesigner_internal::LinePropertySheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerPropertySheet::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

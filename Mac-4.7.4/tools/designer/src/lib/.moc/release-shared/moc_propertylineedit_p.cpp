/****************************************************************************
** Meta object code from reading C++ file 'propertylineedit_p.h'
**
** Created: Mon Jul 16 19:54:33 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../shared/propertylineedit_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertylineedit_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__PropertyLineEdit[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   37,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__PropertyLineEdit[] = {
    "qdesigner_internal::PropertyLineEdit\0"
    "\0insertNewLine()\0"
};

const QMetaObject qdesigner_internal::PropertyLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_qdesigner_internal__PropertyLineEdit,
      qt_meta_data_qdesigner_internal__PropertyLineEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::PropertyLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::PropertyLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::PropertyLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__PropertyLineEdit))
        return static_cast<void*>(const_cast< PropertyLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int qdesigner_internal::PropertyLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: insertNewLine(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

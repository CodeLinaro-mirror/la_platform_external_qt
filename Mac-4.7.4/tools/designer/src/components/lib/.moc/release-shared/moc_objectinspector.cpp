/****************************************************************************
** Meta object code from reading C++ file 'objectinspector.h'
**
** Created: Mon Jul 16 20:00:50 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../objectinspector/objectinspector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectinspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__ObjectInspector[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x0a,
      80,   60,   36,   36, 0x08,
     136,  132,   36,   36, 0x08,
     172,  165,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__ObjectInspector[] = {
    "qdesigner_internal::ObjectInspector\0"
    "\0mainContainerChanged()\0selected,deselected\0"
    "slotSelectionChanged(QItemSelection,QItemSelection)\0"
    "pos\0slotPopupContextMenu(QPoint)\0"
    "column\0slotHeaderDoubleClicked(int)\0"
};

const QMetaObject qdesigner_internal::ObjectInspector::staticMetaObject = {
    { &QDesignerObjectInspector::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ObjectInspector,
      qt_meta_data_qdesigner_internal__ObjectInspector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::ObjectInspector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::ObjectInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::ObjectInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ObjectInspector))
        return static_cast<void*>(const_cast< ObjectInspector*>(this));
    return QDesignerObjectInspector::qt_metacast(_clname);
}

int qdesigner_internal::ObjectInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerObjectInspector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mainContainerChanged(); break;
        case 1: slotSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: slotPopupContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: slotHeaderDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

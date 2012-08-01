/****************************************************************************
** Meta object code from reading C++ file 'findwidget.h'
**
** Created: Mon Jul 16 19:41:23 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../findwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FindWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      28,   11,   11,   11, 0x05,
      39,   11,   11,   11, 0x05,
      67,   54,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   11,   11,   11, 0x08,
     107,  102,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FindWidget[] = {
    "FindWidget\0\0escapePressed()\0findNext()\0"
    "findPrevious()\0text,forward\0"
    "find(QString,bool)\0updateButtons()\0"
    "text\0textChanged(QString)\0"
};

const QMetaObject FindWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FindWidget,
      qt_meta_data_FindWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FindWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FindWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FindWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FindWidget))
        return static_cast<void*>(const_cast< FindWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FindWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: escapePressed(); break;
        case 1: findNext(); break;
        case 2: findPrevious(); break;
        case 3: find((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: updateButtons(); break;
        case 5: textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FindWidget::escapePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FindWidget::findNext()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FindWidget::findPrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void FindWidget::find(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

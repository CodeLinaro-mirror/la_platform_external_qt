/****************************************************************************
** Meta object code from reading C++ file 'bookmarkdialog.h'
**
** Created: Mon Jul 16 19:41:12 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bookmarkdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarkdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BookmarkDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x08,
      47,   16,   15,   15, 0x08,
      80,   15,   15,   15, 0x08,
      91,   15,   15,   15, 0x08,
     102,   15,   15,   15, 0x08,
     114,   15,   15,   15, 0x08,
     139,  134,   15,   15, 0x08,
     166,  160,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkDialog[] = {
    "BookmarkDialog\0\0index\0currentIndexChanged(int)\0"
    "currentIndexChanged(QModelIndex)\0"
    "accepted()\0rejected()\0addFolder()\0"
    "toolButtonClicked()\0text\0textChanged(QString)\0"
    "point\0customContextMenuRequested(QPoint)\0"
};

const QMetaObject BookmarkDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BookmarkDialog,
      qt_meta_data_BookmarkDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkDialog))
        return static_cast<void*>(const_cast< BookmarkDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BookmarkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: currentIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: accepted(); break;
        case 3: rejected(); break;
        case 4: addFolder(); break;
        case 5: toolButtonClicked(); break;
        case 6: textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

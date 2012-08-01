/****************************************************************************
** Meta object code from reading C++ file 'bookmarkmanagerwidget.h'
**
** Created: Mon Jul 16 19:41:17 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bookmarkmanagerwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarkmanagerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BookmarkManagerWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   23,   22,   22, 0x05,
      43,   23,   22,   22, 0x05,
      67,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   22,   22,   22, 0x08,
     106,   22,   22,   22, 0x08,
     121,   22,   22,   22, 0x08,
     139,   22,   22,   22, 0x08,
     157,   22,   22,   22, 0x08,
     184,  179,   22,   22, 0x08,
     211,  205,   22,   22, 0x08,
     235,   22,   22,   22, 0x28,
     254,  248,   22,   22, 0x08,
     302,  289,   22,   22, 0x08,
     339,  205,   22,   22, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkManagerWidget[] = {
    "BookmarkManagerWidget\0\0url\0setSource(QUrl)\0"
    "setSourceInNewTab(QUrl)\0"
    "managerWidgetAboutToClose()\0findNext()\0"
    "findPrevious()\0importBookmarks()\0"
    "exportBookmarks()\0refeshBookmarkCache()\0"
    "text\0textChanged(QString)\0index\0"
    "removeItem(QModelIndex)\0removeItem()\0"
    "point\0customContextMenuRequested(QPoint)\0"
    "index,newTab\0setSourceFromIndex(QModelIndex,bool)\0"
    "setSourceFromIndex(QModelIndex)\0"
};

const QMetaObject BookmarkManagerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BookmarkManagerWidget,
      qt_meta_data_BookmarkManagerWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkManagerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkManagerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkManagerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManagerWidget))
        return static_cast<void*>(const_cast< BookmarkManagerWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BookmarkManagerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: setSourceInNewTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: managerWidgetAboutToClose(); break;
        case 3: findNext(); break;
        case 4: findPrevious(); break;
        case 5: importBookmarks(); break;
        case 6: exportBookmarks(); break;
        case 7: refeshBookmarkCache(); break;
        case 8: textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: removeItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: removeItem(); break;
        case 11: customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: setSourceFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: setSourceFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void BookmarkManagerWidget::setSource(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BookmarkManagerWidget::setSourceInNewTab(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BookmarkManagerWidget::managerWidgetAboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'bookmarkmanager.h'
**
** Created: Mon Jul 16 19:41:15 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bookmarkmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarkmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BookmarkManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      37,   33,   16,   16, 0x05,
      53,   33,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   77,   16,   16, 0x0a,
     116,   16,   16,   16, 0x08,
     132,   16,   16,   16, 0x08,
     146,   16,   16,   16, 0x08,
     163,   16,   16,   16, 0x08,
     181,   16,   16,   16, 0x08,
     208,  202,   16,   16, 0x08,
     243,  236,   16,   16, 0x08,
     286,  273,   16,   16, 0x08,
     323,  202,   16,   16, 0x28,
     355,   16,   16,   16, 0x08,
     370,   16,   16,   16, 0x08,
     403,  398,   16,   16, 0x08,
     430,  424,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkManager[] = {
    "BookmarkManager\0\0escapePressed()\0url\0"
    "setSource(QUrl)\0setSourceInNewTab(QUrl)\0"
    "title,url\0addBookmark(QString,QString)\0"
    "setupFinished()\0addBookmark()\0"
    "removeBookmark()\0manageBookmarks()\0"
    "refeshBookmarkMenu()\0index\0"
    "renameBookmark(QModelIndex)\0action\0"
    "setSourceFromAction(QAction*)\0"
    "index,newTab\0setSourceFromIndex(QModelIndex,bool)\0"
    "setSourceFromIndex(QModelIndex)\0"
    "focusInEvent()\0managerWidgetAboutToClose()\0"
    "text\0textChanged(QString)\0point\0"
    "customContextMenuRequested(QPoint)\0"
};

const QMetaObject BookmarkManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BookmarkManager,
      qt_meta_data_BookmarkManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManager))
        return static_cast<void*>(const_cast< BookmarkManager*>(this));
    return QObject::qt_metacast(_clname);
}

int BookmarkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: escapePressed(); break;
        case 1: setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: setSourceInNewTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: addBookmark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: setupFinished(); break;
        case 5: addBookmark(); break;
        case 6: removeBookmark(); break;
        case 7: manageBookmarks(); break;
        case 8: refeshBookmarkMenu(); break;
        case 9: renameBookmark((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: setSourceFromAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: setSourceFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: setSourceFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: focusInEvent(); break;
        case 14: managerWidgetAboutToClose(); break;
        case 15: textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void BookmarkManager::escapePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void BookmarkManager::setSource(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BookmarkManager::setSourceInNewTab(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_BookmarkManager__BookmarkWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkManager__BookmarkWidget[] = {
    "BookmarkManager::BookmarkWidget\0\0"
    "focusInEvent()\0"
};

const QMetaObject BookmarkManager::BookmarkWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BookmarkManager__BookmarkWidget,
      qt_meta_data_BookmarkManager__BookmarkWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkManager::BookmarkWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkManager::BookmarkWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkManager::BookmarkWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManager__BookmarkWidget))
        return static_cast<void*>(const_cast< BookmarkWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BookmarkManager::BookmarkWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: focusInEvent(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void BookmarkManager::BookmarkWidget::focusInEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_BookmarkManager__BookmarkTreeView[] = {

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
      41,   35,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkManager__BookmarkTreeView[] = {
    "BookmarkManager::BookmarkTreeView\0\0"
    "index\0setExpandedData(QModelIndex)\0"
};

const QMetaObject BookmarkManager::BookmarkTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_BookmarkManager__BookmarkTreeView,
      qt_meta_data_BookmarkManager__BookmarkTreeView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkManager::BookmarkTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkManager::BookmarkTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkManager::BookmarkTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManager__BookmarkTreeView))
        return static_cast<void*>(const_cast< BookmarkTreeView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int BookmarkManager::BookmarkTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setExpandedData((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

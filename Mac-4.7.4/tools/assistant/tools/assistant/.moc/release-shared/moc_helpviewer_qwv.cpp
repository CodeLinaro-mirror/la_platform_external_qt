/****************************************************************************
** Meta object code from reading C++ file 'helpviewer_qwv.h'
**
** Created: Mon Jul 16 19:41:40 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../helpviewer_qwv.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helpviewer_qwv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HelpViewer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x05,
      40,   12,   11,   11, 0x05,
      63,   12,   11,   11, 0x05,
      87,   11,   11,   11, 0x05,
     108,   11,   11,   11, 0x05,
     128,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     145,   11,   11,   11, 0x0a,
     152,   11,   11,   11, 0x0a,
     163,   11,   11,   11, 0x08,
     179,   11,   11,   11, 0x08,
     199,  196,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HelpViewer[] = {
    "HelpViewer\0\0enabled\0copyAvailable(bool)\0"
    "forwardAvailable(bool)\0backwardAvailable(bool)\0"
    "highlighted(QString)\0sourceChanged(QUrl)\0"
    "printRequested()\0home()\0backward()\0"
    "actionChanged()\0setLoadStarted()\0ok\0"
    "setLoadFinished(bool)\0"
};

const QMetaObject HelpViewer::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_HelpViewer,
      qt_meta_data_HelpViewer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HelpViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HelpViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HelpViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelpViewer))
        return static_cast<void*>(const_cast< HelpViewer*>(this));
    if (!strcmp(_clname, "AbstractHelpViewer"))
        return static_cast< AbstractHelpViewer*>(const_cast< HelpViewer*>(this));
    return QWebView::qt_metacast(_clname);
}

int HelpViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: forwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: backwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: highlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: printRequested(); break;
        case 6: home(); break;
        case 7: backward(); break;
        case 8: actionChanged(); break;
        case 9: setLoadStarted(); break;
        case 10: setLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void HelpViewer::copyAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HelpViewer::forwardAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HelpViewer::backwardAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HelpViewer::highlighted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HelpViewer::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HelpViewer::printRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE

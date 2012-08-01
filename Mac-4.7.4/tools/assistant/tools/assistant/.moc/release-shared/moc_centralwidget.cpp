/****************************************************************************
** Meta object code from reading C++ file 'centralwidget.h'
**
** Created: Mon Jul 16 19:41:20 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../centralwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'centralwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CentralWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      42,   38,   14,   14, 0x05,
      66,   62,   14,   14, 0x05,
      91,   86,   14,   14, 0x05,
     122,  112,   14,   14, 0x05,
     145,  112,   14,   14, 0x05,
     179,  169,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     208,   14,   14,   14, 0x0a,
     217,   14,   14,   14, 0x0a,
     227,   14,   14,   14, 0x0a,
     238,   14,   14,   14, 0x0a,
     250,   14,   14,   14, 0x0a,
     265,   14,   14,   14, 0x0a,
     281,   14,   14,   14, 0x0a,
     298,   14,   14,   14, 0x0a,
     306,   14,   14,   14, 0x0a,
     318,   14,   14,   14, 0x0a,
     333,   14,   14,   14, 0x0a,
     353,   62,   14,   14, 0x0a,
     378,  369,   14,   14, 0x0a,
     408,   62,   14,   14, 0x2a,
     444,   14,  432,   14, 0x0a,
     458,   14,   14,   14, 0x0a,
     465,   14,   14,   14, 0x0a,
     475,   14,   14,   14, 0x0a,
     501,  486,   14,   14, 0x0a,
     519,   14,   14,   14, 0x2a,
     533,   14,   14,   14, 0x0a,
     544,   14,   14,   14, 0x0a,
     572,  559,   14,   14, 0x0a,
     591,   14,   14,   14, 0x08,
     600,   14,   14,   14, 0x08,
     611,   62,   14,   14, 0x08,
     635,  629,   14,   14, 0x08,
     665,  659,   14,   14, 0x08,
     703,  695,   14,   14, 0x08,
     727,   62,   14,   14, 0x08,
     753,   62,   14,   14, 0x08,
     787,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CentralWidget[] = {
    "CentralWidget\0\0currentViewerChanged()\0"
    "yes\0copyAvailable(bool)\0url\0"
    "sourceChanged(QUrl)\0link\0highlighted(QString)\0"
    "available\0forwardAvailable(bool)\0"
    "backwardAvailable(bool)\0title,url\0"
    "addBookmark(QString,QString)\0zoomIn()\0"
    "zoomOut()\0nextPage()\0resetZoom()\0"
    "previousPage()\0copySelection()\0"
    "showTextSearch()\0print()\0pageSetup()\0"
    "printPreview()\0updateBrowserFont()\0"
    "setSource(QUrl)\0url,zoom\0"
    "setSourceInNewTab(QUrl,qreal)\0"
    "setSourceInNewTab(QUrl)\0HelpViewer*\0"
    "newEmptyTab()\0home()\0forward()\0"
    "backward()\0onlyHelpViewer\0activateTab(bool)\0"
    "activateTab()\0findNext()\0findPrevious()\0"
    "text,forward\0find(QString,bool)\0"
    "newTab()\0closeTab()\0setTabTitle(QUrl)\0"
    "index\0currentPageChanged(int)\0point\0"
    "showTabBarContextMenu(QPoint)\0printer\0"
    "printPreview(QPrinter*)\0"
    "setSourceFromSearch(QUrl)\0"
    "setSourceFromSearchInNewTab(QUrl)\0"
    "highlightSearchTerms()\0"
};

const QMetaObject CentralWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CentralWidget,
      qt_meta_data_CentralWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CentralWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CentralWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CentralWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CentralWidget))
        return static_cast<void*>(const_cast< CentralWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CentralWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentViewerChanged(); break;
        case 1: copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: highlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: forwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: backwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: addBookmark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: zoomIn(); break;
        case 8: zoomOut(); break;
        case 9: nextPage(); break;
        case 10: resetZoom(); break;
        case 11: previousPage(); break;
        case 12: copySelection(); break;
        case 13: showTextSearch(); break;
        case 14: print(); break;
        case 15: pageSetup(); break;
        case 16: printPreview(); break;
        case 17: updateBrowserFont(); break;
        case 18: setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 19: setSourceInNewTab((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 20: setSourceInNewTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 21: { HelpViewer* _r = newEmptyTab();
            if (_a[0]) *reinterpret_cast< HelpViewer**>(_a[0]) = _r; }  break;
        case 22: home(); break;
        case 23: forward(); break;
        case 24: backward(); break;
        case 25: activateTab((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: activateTab(); break;
        case 27: findNext(); break;
        case 28: findPrevious(); break;
        case 29: find((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: newTab(); break;
        case 31: closeTab(); break;
        case 32: setTabTitle((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 33: currentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: showTabBarContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 35: printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 36: setSourceFromSearch((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 37: setSourceFromSearchInNewTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 38: highlightSearchTerms(); break;
        default: ;
        }
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void CentralWidget::currentViewerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CentralWidget::copyAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CentralWidget::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CentralWidget::highlighted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CentralWidget::forwardAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CentralWidget::backwardAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CentralWidget::addBookmark(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE

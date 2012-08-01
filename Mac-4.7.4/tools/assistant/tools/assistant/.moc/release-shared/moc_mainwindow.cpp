/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon Jul 16 19:41:31 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   23,   11,   11, 0x0a,
      56,   23,   11,   11, 0x0a,
      78,   23,   11,   11, 0x0a,
     104,   23,   11,   11, 0x0a,
     127,   11,   11,   11, 0x0a,
     146,   11,   11,   11, 0x0a,
     161,   11,   11,   11, 0x0a,
     202,  195,   11,   11, 0x0a,
     232,   11,   11,   11, 0x08,
     247,   11,   11,   11, 0x08,
     259,   11,   11,   11, 0x08,
     272,   11,   11,   11, 0x08,
     290,   11,   11,   11, 0x08,
     304,   11,   11,   11, 0x08,
     322,   11,   11,   11, 0x08,
     339,   11,   11,   11, 0x08,
     361,  357,   11,   11, 0x08,
     381,   11,   11,   11, 0x08,
     405,   11,   11,   11, 0x08,
     432,  428,   11,   11, 0x08,
     467,  453,   11,   11, 0x08,
     512,   11,   11,   11, 0x08,
     549,  536,   11,   11, 0x08,
     578,   11,   11,   11, 0x08,
     597,   11,   11,   11, 0x08,
     625,   11,   11,   11, 0x08,
     643,   11,   11,   11, 0x08,
     662,   11,   11,   11, 0x08,
     711,  689,   11,   11, 0x08,
     760,  750,   11,   11, 0x08,
     784,   11,   11,   11, 0x08,
     815,  801,   11,   11, 0x08,
     845,  801,   11,   11, 0x08,
     875,   11,   11,   11, 0x08,
     901,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0initDone()\0visible\0"
    "setContentsVisible(bool)\0setIndexVisible(bool)\0"
    "setBookmarksVisible(bool)\0"
    "setSearchVisible(bool)\0showSearchWidget()\0"
    "syncContents()\0activateCurrentCentralWidgetTab()\0"
    "filter\0currentFilterChanged(QString)\0"
    "showContents()\0showIndex()\0showSearch()\0"
    "insertLastPages()\0gotoAddress()\0"
    "showPreferences()\0showNewAddress()\0"
    "showAboutDialog()\0yes\0copyAvailable(bool)\0"
    "updateNavigationItems()\0updateTabCloseAction()\0"
    "url\0showNewAddress(QUrl)\0links,keyword\0"
    "showTopicChooser(QMap<QString,QUrl>,QString)\0"
    "updateApplicationFont()\0customFilter\0"
    "filterDocumentation(QString)\0"
    "setupFilterCombo()\0lookForNewQtDocumentation()\0"
    "indexingStarted()\0indexingFinished()\0"
    "qtDocumentationInstalled()\0"
    "component,absFileName\0"
    "registerDocumentation(QString,QString)\0"
    "component\0resetQtDocInfo(QString)\0"
    "checkInitState()\0namespaceName\0"
    "documentationRemoved(QString)\0"
    "documentationUpdated(QString)\0"
    "showBookmarksDockWidget()\0"
    "hideBookmarksDockWidget()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initDone(); break;
        case 1: setContentsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: setIndexVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: setBookmarksVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: setSearchVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: showSearchWidget(); break;
        case 6: syncContents(); break;
        case 7: activateCurrentCentralWidgetTab(); break;
        case 8: currentFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: showContents(); break;
        case 10: showIndex(); break;
        case 11: showSearch(); break;
        case 12: insertLastPages(); break;
        case 13: gotoAddress(); break;
        case 14: showPreferences(); break;
        case 15: showNewAddress(); break;
        case 16: showAboutDialog(); break;
        case 17: copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: updateNavigationItems(); break;
        case 19: updateTabCloseAction(); break;
        case 20: showNewAddress((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 21: showTopicChooser((*reinterpret_cast< const QMap<QString,QUrl>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 22: updateApplicationFont(); break;
        case 23: filterDocumentation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: setupFilterCombo(); break;
        case 25: lookForNewQtDocumentation(); break;
        case 26: indexingStarted(); break;
        case 27: indexingFinished(); break;
        case 28: qtDocumentationInstalled(); break;
        case 29: registerDocumentation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: resetQtDocInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: checkInitState(); break;
        case 32: documentationRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: documentationUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: showBookmarksDockWidget(); break;
        case 35: hideBookmarksDockWidget(); break;
        default: ;
        }
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::initDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'qhelpsearchindexwriter_clucene_p.h'
**
** Created: Mon Jul 16 19:39:56 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qhelpsearchindexwriter_clucene_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpsearchindexwriter_clucene_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fulltextsearch__clucene__QHelpSearchIndexWriter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      49,   48,   48,   48, 0x05,
      67,   48,   48,   48, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_fulltextsearch__clucene__QHelpSearchIndexWriter[] = {
    "fulltextsearch::clucene::QHelpSearchIndexWriter\0"
    "\0indexingStarted()\0indexingFinished()\0"
};

const QMetaObject fulltextsearch::clucene::QHelpSearchIndexWriter::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_fulltextsearch__clucene__QHelpSearchIndexWriter,
      qt_meta_data_fulltextsearch__clucene__QHelpSearchIndexWriter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fulltextsearch::clucene::QHelpSearchIndexWriter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fulltextsearch::clucene::QHelpSearchIndexWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fulltextsearch::clucene::QHelpSearchIndexWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fulltextsearch__clucene__QHelpSearchIndexWriter))
        return static_cast<void*>(const_cast< QHelpSearchIndexWriter*>(this));
    return QThread::qt_metacast(_clname);
}

int fulltextsearch::clucene::QHelpSearchIndexWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: indexingStarted(); break;
        case 1: indexingFinished(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void fulltextsearch::clucene::QHelpSearchIndexWriter::indexingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void fulltextsearch::clucene::QHelpSearchIndexWriter::indexingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE

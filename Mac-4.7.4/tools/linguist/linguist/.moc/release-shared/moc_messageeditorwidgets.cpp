/****************************************************************************
** Meta object code from reading C++ file 'messageeditorwidgets.h'
**
** Created: Mon Jul 16 20:08:33 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../messageeditorwidgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messageeditorwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExpandingTextEdit[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   19,   18,   18, 0x08,
      53,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExpandingTextEdit[] = {
    "ExpandingTextEdit\0\0documentSize\0"
    "updateHeight(QSizeF)\0reallyEnsureCursorVisible()\0"
};

const QMetaObject ExpandingTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_ExpandingTextEdit,
      qt_meta_data_ExpandingTextEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExpandingTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExpandingTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExpandingTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExpandingTextEdit))
        return static_cast<void*>(const_cast< ExpandingTextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int ExpandingTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateHeight((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 1: reallyEnsureCursorVisible(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_FormatTextEdit[] = {

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
      32,   16,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FormatTextEdit[] = {
    "FormatTextEdit\0\0text,userAction\0"
    "setPlainText(QString,bool)\0"
};

const QMetaObject FormatTextEdit::staticMetaObject = {
    { &ExpandingTextEdit::staticMetaObject, qt_meta_stringdata_FormatTextEdit,
      qt_meta_data_FormatTextEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FormatTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FormatTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FormatTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormatTextEdit))
        return static_cast<void*>(const_cast< FormatTextEdit*>(this));
    return ExpandingTextEdit::qt_metacast(_clname);
}

int FormatTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExpandingTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setPlainText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_FormWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      36,   11,   11,   11, 0x05,
      65,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   11,   11,   11, 0x08,
     112,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FormWidget[] = {
    "FormWidget\0\0textChanged(QTextEdit*)\0"
    "selectionChanged(QTextEdit*)\0"
    "cursorPositionChanged()\0slotSelectionChanged()\0"
    "slotTextChanged()\0"
};

const QMetaObject FormWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormWidget,
      qt_meta_data_FormWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FormWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FormWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FormWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormWidget))
        return static_cast<void*>(const_cast< FormWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: textChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 1: selectionChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 2: cursorPositionChanged(); break;
        case 3: slotSelectionChanged(); break;
        case 4: slotTextChanged(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FormWidget::textChanged(QTextEdit * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormWidget::selectionChanged(QTextEdit * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FormWidget::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_FormMultiWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      43,   16,   16,   16, 0x05,
      67,   16,   16,   16, 0x05,
      96,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     120,   16,   16,   16, 0x08,
     138,   16,   16,   16, 0x08,
     161,   16,   16,   16, 0x08,
     182,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FormMultiWidget[] = {
    "FormMultiWidget\0\0editorCreated(QTextEdit*)\0"
    "textChanged(QTextEdit*)\0"
    "selectionChanged(QTextEdit*)\0"
    "cursorPositionChanged()\0slotTextChanged()\0"
    "slotSelectionChanged()\0minusButtonClicked()\0"
    "plusButtonClicked()\0"
};

const QMetaObject FormMultiWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormMultiWidget,
      qt_meta_data_FormMultiWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FormMultiWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FormMultiWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FormMultiWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormMultiWidget))
        return static_cast<void*>(const_cast< FormMultiWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormMultiWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: editorCreated((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 1: textChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 2: selectionChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 3: cursorPositionChanged(); break;
        case 4: slotTextChanged(); break;
        case 5: slotSelectionChanged(); break;
        case 6: minusButtonClicked(); break;
        case 7: plusButtonClicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FormMultiWidget::editorCreated(QTextEdit * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormMultiWidget::textChanged(QTextEdit * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FormMultiWidget::selectionChanged(QTextEdit * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FormMultiWidget::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'CQStyleControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/CQStyleControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CQStyleControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CQStyleControl_t {
    QByteArrayData data[11];
    char stringdata[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CQStyleControl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CQStyleControl_t qt_meta_stringdata_CQStyleControl = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 15),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 5),
QT_MOC_LITERAL(4, 38, 14),
QT_MOC_LITERAL(5, 53, 1),
QT_MOC_LITERAL(6, 55, 14),
QT_MOC_LITERAL(7, 70, 14),
QT_MOC_LITERAL(8, 85, 11),
QT_MOC_LITERAL(9, 97, 4),
QT_MOC_LITERAL(10, 102, 12)
    },
    "CQStyleControl\0setCurrentStyle\0\0style\0"
    "fgColorChanged\0c\0bgCheckChanged\0"
    "bgColorChanged\0fontChanged\0font\0"
    "spaceChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CQStyleControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a,
       4,    1,   47,    2, 0x08,
       6,    0,   50,    2, 0x08,
       7,    1,   51,    2, 0x08,
       8,    1,   54,    2, 0x08,
      10,    0,   57,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QFont,    9,
    QMetaType::Void,

       0        // eod
};

void CQStyleControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CQStyleControl *_t = static_cast<CQStyleControl *>(_o);
        switch (_id) {
        case 0: _t->setCurrentStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fgColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->bgCheckChanged(); break;
        case 3: _t->bgColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->fontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 5: _t->spaceChanged(); break;
        default: ;
        }
    }
}

const QMetaObject CQStyleControl::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CQStyleControl.data,
      qt_meta_data_CQStyleControl,  qt_static_metacall, 0, 0}
};


const QMetaObject *CQStyleControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CQStyleControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CQStyleControl.stringdata))
        return static_cast<void*>(const_cast< CQStyleControl*>(this));
    return QFrame::qt_metacast(_clname);
}

int CQStyleControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_CQStyleList_t {
    QByteArrayData data[4];
    char stringdata[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CQStyleList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CQStyleList_t qt_meta_stringdata_CQStyleList = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 13),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 12)
    },
    "CQStyleList\0styleSelected\0\0listItemSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CQStyleList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   27,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CQStyleList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CQStyleList *_t = static_cast<CQStyleList *>(_o);
        switch (_id) {
        case 0: _t->styleSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->listItemSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CQStyleList::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CQStyleList::styleSelected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CQStyleList::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_CQStyleList.data,
      qt_meta_data_CQStyleList,  qt_static_metacall, 0, 0}
};


const QMetaObject *CQStyleList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CQStyleList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CQStyleList.stringdata))
        return static_cast<void*>(const_cast< CQStyleList*>(this));
    return QListWidget::qt_metacast(_clname);
}

int CQStyleList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CQStyleList::styleSelected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

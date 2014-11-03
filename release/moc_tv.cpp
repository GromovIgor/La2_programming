/****************************************************************************
** Meta object code from reading C++ file 'tv.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tv.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tv_t {
    QByteArrayData data[15];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tv_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tv_t qt_meta_stringdata_tv = {
    {
QT_MOC_LITERAL(0, 0, 2),
QT_MOC_LITERAL(1, 3, 8),
QT_MOC_LITERAL(2, 12, 0),
QT_MOC_LITERAL(3, 13, 8),
QT_MOC_LITERAL(4, 22, 1),
QT_MOC_LITERAL(5, 24, 7),
QT_MOC_LITERAL(6, 32, 7),
QT_MOC_LITERAL(7, 40, 8),
QT_MOC_LITERAL(8, 49, 5),
QT_MOC_LITERAL(9, 55, 4),
QT_MOC_LITERAL(10, 60, 10),
QT_MOC_LITERAL(11, 71, 6),
QT_MOC_LITERAL(12, 78, 8),
QT_MOC_LITERAL(13, 87, 10),
QT_MOC_LITERAL(14, 98, 12)
    },
    "tv\0setTable\0\0QDVector\0t\0AddItem\0company\0"
    "diagonal\0color\0cost\0DeleteItem\0curRow\0"
    "EditItem\0SaveToFile\0OpenFromFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tv[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    4,   47,    2, 0x08 /* Private */,
      10,    1,   56,    2, 0x08 /* Private */,
      12,    5,   59,    2, 0x08 /* Private */,
      13,    0,   70,    2, 0x08 /* Private */,
      14,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,    6,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tv *_t = static_cast<tv *>(_o);
        switch (_id) {
        case 0: _t->setTable((*reinterpret_cast< QDVector(*)>(_a[1]))); break;
        case 1: _t->AddItem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->DeleteItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->EditItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 4: _t->SaveToFile(); break;
        case 5: _t->OpenFromFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (tv::*_t)(QDVector );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tv::setTable)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject tv::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tv.data,
      qt_meta_data_tv,  qt_static_metacall, 0, 0}
};


const QMetaObject *tv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tv::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tv.stringdata))
        return static_cast<void*>(const_cast< tv*>(this));
    return QObject::qt_metacast(_clname);
}

int tv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void tv::setTable(QDVector _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

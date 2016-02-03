/****************************************************************************
** Meta object code from reading C++ file 'mycv.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../OptrisThreadTest/mycv.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mycv_t {
    QByteArrayData data[6];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mycv_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mycv_t qt_meta_stringdata_mycv = {
    {
QT_MOC_LITERAL(0, 0, 4), // "mycv"
QT_MOC_LITERAL(1, 5, 15), // "calculationDone"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "processData"
QT_MOC_LITERAL(4, 34, 15), // "unsigned short*"
QT_MOC_LITERAL(5, 50, 13) // "ptrDataBuffer"

    },
    "mycv\0calculationDone\0\0processData\0"
    "unsigned short*\0ptrDataBuffer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mycv[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void mycv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mycv *_t = static_cast<mycv *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calculationDone(); break;
        case 1: _t->processData((*reinterpret_cast< unsigned short*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mycv::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mycv::calculationDone)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject mycv::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mycv.data,
      qt_meta_data_mycv,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mycv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mycv::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mycv.stringdata0))
        return static_cast<void*>(const_cast< mycv*>(this));
    return QObject::qt_metacast(_clname);
}

int mycv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void mycv::calculationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'pi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../OptrisThreadTest/pi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pi_t {
    QByteArrayData data[10];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pi_t qt_meta_stringdata_Pi = {
    {
QT_MOC_LITERAL(0, 0, 2), // "Pi"
QT_MOC_LITERAL(1, 3, 11), // "startSignal"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 10), // "stopSignal"
QT_MOC_LITERAL(4, 27, 21), // "newDataForCalculation"
QT_MOC_LITERAL(5, 49, 15), // "unsigned short*"
QT_MOC_LITERAL(6, 65, 5), // "ready"
QT_MOC_LITERAL(7, 71, 9), // "printInfo"
QT_MOC_LITERAL(8, 81, 15), // "receiveNewImage"
QT_MOC_LITERAL(9, 97, 9) // "slotReady"

    },
    "Pi\0startSignal\0\0stopSignal\0"
    "newDataForCalculation\0unsigned short*\0"
    "ready\0printInfo\0receiveNewImage\0"
    "slotReady"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,
       6,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   57,    2, 0x0a /* Public */,
       8,    0,   58,    2, 0x0a /* Public */,
       9,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::LongLong,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Pi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Pi *_t = static_cast<Pi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startSignal(); break;
        case 1: _t->stopSignal(); break;
        case 2: _t->newDataForCalculation((*reinterpret_cast< unsigned short*(*)>(_a[1]))); break;
        case 3: _t->ready((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->printInfo(); break;
        case 5: _t->receiveNewImage(); break;
        case 6: _t->slotReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Pi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pi::startSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (Pi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pi::stopSignal)) {
                *result = 1;
            }
        }
        {
            typedef void (Pi::*_t)(unsigned short * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pi::newDataForCalculation)) {
                *result = 2;
            }
        }
        {
            typedef void (Pi::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pi::ready)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Pi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Pi.data,
      qt_meta_data_Pi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pi.stringdata0))
        return static_cast<void*>(const_cast< Pi*>(this));
    return QObject::qt_metacast(_clname);
}

int Pi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Pi::startSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Pi::stopSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Pi::newDataForCalculation(unsigned short * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Pi::ready(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

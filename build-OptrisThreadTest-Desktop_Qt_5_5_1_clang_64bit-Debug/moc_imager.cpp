/****************************************************************************
** Meta object code from reading C++ file 'imager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../OptrisThreadTest/imager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_imager_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_imager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_imager_t qt_meta_stringdata_imager = {
    {
QT_MOC_LITERAL(0, 0, 6), // "imager"
QT_MOC_LITERAL(1, 7, 16), // "stopStreamingNow"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "newImage"
QT_MOC_LITERAL(4, 34, 14), // "startStreaming"
QT_MOC_LITERAL(5, 49, 13), // "stopStreaming"
QT_MOC_LITERAL(6, 63, 13), // "generateImage"
QT_MOC_LITERAL(7, 77, 12) // "timerTimeout"

    },
    "imager\0stopStreamingNow\0\0newImage\0"
    "startStreaming\0stopStreaming\0generateImage\0"
    "timerTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void imager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        imager *_t = static_cast<imager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopStreamingNow(); break;
        case 1: _t->newImage(); break;
        case 2: _t->startStreaming(); break;
        case 3: _t->stopStreaming(); break;
        case 4: _t->generateImage(); break;
        case 5: _t->timerTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (imager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&imager::stopStreamingNow)) {
                *result = 0;
            }
        }
        {
            typedef void (imager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&imager::newImage)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject imager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_imager.data,
      qt_meta_data_imager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *imager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_imager.stringdata0))
        return static_cast<void*>(const_cast< imager*>(this));
    return QObject::qt_metacast(_clname);
}

int imager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void imager::stopStreamingNow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void imager::newImage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_imagerThread_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_imagerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_imagerThread_t qt_meta_stringdata_imagerThread = {
    {
QT_MOC_LITERAL(0, 0, 12) // "imagerThread"

    },
    "imagerThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imagerThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void imagerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject imagerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_imagerThread.data,
      qt_meta_data_imagerThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *imagerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imagerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_imagerThread.stringdata0))
        return static_cast<void*>(const_cast< imagerThread*>(this));
    return QThread::qt_metacast(_clname);
}

int imagerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

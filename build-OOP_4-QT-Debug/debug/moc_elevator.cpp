/****************************************************************************
** Meta object code from reading C++ file 'elevator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OOP_4/elevator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elevator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_elevator_t {
    QByteArrayData data[10];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_elevator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_elevator_t qt_meta_stringdata_elevator = {
    {
QT_MOC_LITERAL(0, 0, 8), // "elevator"
QT_MOC_LITERAL(1, 9, 12), // "signals_stop"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "signals_move"
QT_MOC_LITERAL(4, 36, 7), // "ssize_t"
QT_MOC_LITERAL(5, 44, 4), // "koef"
QT_MOC_LITERAL(6, 49, 10), // "slots_move"
QT_MOC_LITERAL(7, 60, 8), // "slots_up"
QT_MOC_LITERAL(8, 69, 10), // "slots_down"
QT_MOC_LITERAL(9, 80, 10) // "slots_stop"

    },
    "elevator\0signals_stop\0\0signals_move\0"
    "ssize_t\0koef\0slots_move\0slots_up\0"
    "slots_down\0slots_stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_elevator[] = {

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
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x0a /* Public */,
       8,    0,   50,    2, 0x0a /* Public */,
       9,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void elevator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        elevator *_t = static_cast<elevator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signals_stop(); break;
        case 1: _t->signals_move((*reinterpret_cast< ssize_t(*)>(_a[1]))); break;
        case 2: _t->slots_move(); break;
        case 3: _t->slots_up(); break;
        case 4: _t->slots_down(); break;
        case 5: _t->slots_stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (elevator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&elevator::signals_stop)) {
                *result = 0;
            }
        }
        {
            typedef void (elevator::*_t)(ssize_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&elevator::signals_move)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject elevator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_elevator.data,
      qt_meta_data_elevator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *elevator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *elevator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_elevator.stringdata0))
        return static_cast<void*>(const_cast< elevator*>(this));
    return QObject::qt_metacast(_clname);
}

int elevator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void elevator::signals_stop()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void elevator::signals_move(ssize_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OOP_4/controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_controller_t {
    QByteArrayData data[15];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_controller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_controller_t qt_meta_stringdata_controller = {
    {
QT_MOC_LITERAL(0, 0, 10), // "controller"
QT_MOC_LITERAL(1, 11, 7), // "lift_up"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "lift_down"
QT_MOC_LITERAL(4, 30, 9), // "lift_stop"
QT_MOC_LITERAL(5, 40, 14), // "lift_open_door"
QT_MOC_LITERAL(6, 55, 7), // "call_in"
QT_MOC_LITERAL(7, 63, 6), // "size_t"
QT_MOC_LITERAL(8, 70, 5), // "floor"
QT_MOC_LITERAL(9, 76, 9), // "lift_wait"
QT_MOC_LITERAL(10, 86, 9), // "lift_move"
QT_MOC_LITERAL(11, 96, 7), // "ssize_t"
QT_MOC_LITERAL(12, 104, 4), // "koef"
QT_MOC_LITERAL(13, 109, 14), // "slot_open_door"
QT_MOC_LITERAL(14, 124, 15) // "slot_close_door"

    },
    "controller\0lift_up\0\0lift_down\0lift_stop\0"
    "lift_open_door\0call_in\0size_t\0floor\0"
    "lift_wait\0lift_move\0ssize_t\0koef\0"
    "slot_open_door\0slot_close_door"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_controller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   63,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,
      13,    0,   70,    2, 0x08 /* Private */,
      14,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        controller *_t = static_cast<controller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lift_up(); break;
        case 1: _t->lift_down(); break;
        case 2: _t->lift_stop(); break;
        case 3: _t->lift_open_door(); break;
        case 4: _t->call_in((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 5: _t->lift_wait(); break;
        case 6: _t->lift_move((*reinterpret_cast< ssize_t(*)>(_a[1]))); break;
        case 7: _t->slot_open_door(); break;
        case 8: _t->slot_close_door(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (controller::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::lift_up)) {
                *result = 0;
            }
        }
        {
            typedef void (controller::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::lift_down)) {
                *result = 1;
            }
        }
        {
            typedef void (controller::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::lift_stop)) {
                *result = 2;
            }
        }
        {
            typedef void (controller::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::lift_open_door)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject controller::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_controller.data,
      qt_meta_data_controller,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *controller::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_controller.stringdata0))
        return static_cast<void*>(const_cast< controller*>(this));
    return QObject::qt_metacast(_clname);
}

int controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void controller::lift_up()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void controller::lift_down()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void controller::lift_stop()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void controller::lift_open_door()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

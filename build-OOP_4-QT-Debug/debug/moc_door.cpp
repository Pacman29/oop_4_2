/****************************************************************************
** Meta object code from reading C++ file 'door.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OOP_4/door.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'door.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_door_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_door_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_door_t qt_meta_stringdata_door = {
    {
QT_MOC_LITERAL(0, 0, 4), // "door"
QT_MOC_LITERAL(1, 5, 19), // "signal_door_is_open"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 20), // "signal_door_is_close"
QT_MOC_LITERAL(4, 47, 9), // "slot_open"
QT_MOC_LITERAL(5, 57, 10), // "slot_close"
QT_MOC_LITERAL(6, 68, 12), // "slot_opening"
QT_MOC_LITERAL(7, 81, 13) // "slot_closeing"

    },
    "door\0signal_door_is_open\0\0"
    "signal_door_is_close\0slot_open\0"
    "slot_close\0slot_opening\0slot_closeing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_door[] = {

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
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

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

void door::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        door *_t = static_cast<door *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_door_is_open(); break;
        case 1: _t->signal_door_is_close(); break;
        case 2: _t->slot_open(); break;
        case 3: _t->slot_close(); break;
        case 4: _t->slot_opening(); break;
        case 5: _t->slot_closeing(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (door::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&door::signal_door_is_open)) {
                *result = 0;
            }
        }
        {
            typedef void (door::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&door::signal_door_is_close)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject door::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_door.data,
      qt_meta_data_door,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *door::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *door::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_door.stringdata0))
        return static_cast<void*>(const_cast< door*>(this));
    return QObject::qt_metacast(_clname);
}

int door::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void door::signal_door_is_open()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void door::signal_door_is_close()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

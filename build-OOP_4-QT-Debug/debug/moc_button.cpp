/****************************************************************************
** Meta object code from reading C++ file 'button.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OOP_4/button.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_button_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_button_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_button_t qt_meta_stringdata_button = {
    {
QT_MOC_LITERAL(0, 0, 6), // "button"
QT_MOC_LITERAL(1, 7, 14), // "signal_Pressed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "size_t"
QT_MOC_LITERAL(4, 30, 15), // "signal_Released"
QT_MOC_LITERAL(5, 46, 19), // "signal_Released_out"
QT_MOC_LITERAL(6, 66, 12), // "slot_Pressed"
QT_MOC_LITERAL(7, 79, 13) // "slot_Released"

    },
    "button\0signal_Pressed\0\0size_t\0"
    "signal_Released\0signal_Released_out\0"
    "slot_Pressed\0slot_Released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_button[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    0,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void button::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        button *_t = static_cast<button *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_Pressed((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 1: _t->signal_Released(); break;
        case 2: _t->signal_Released_out(); break;
        case 3: _t->slot_Pressed(); break;
        case 4: _t->slot_Released(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (button::*_t)(size_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&button::signal_Pressed)) {
                *result = 0;
            }
        }
        {
            typedef void (button::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&button::signal_Released)) {
                *result = 1;
            }
        }
        {
            typedef void (button::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&button::signal_Released_out)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject button::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_button.data,
      qt_meta_data_button,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *button::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *button::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_button.stringdata0))
        return static_cast<void*>(const_cast< button*>(this));
    return QObject::qt_metacast(_clname);
}

int button::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void button::signal_Pressed(size_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void button::signal_Released()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void button::signal_Released_out()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

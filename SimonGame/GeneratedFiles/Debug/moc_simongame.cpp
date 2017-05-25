/****************************************************************************
** Meta object code from reading C++ file 'simongame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../simongame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simongame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SimonGame_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimonGame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimonGame_t qt_meta_stringdata_SimonGame = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SimonGame"
QT_MOC_LITERAL(1, 10, 10), // "addElement"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "startApp"
QT_MOC_LITERAL(4, 31, 11), // "changeColor"
QT_MOC_LITERAL(5, 43, 9), // "numberAdd"
QT_MOC_LITERAL(6, 53, 11), // "btnRedAcion"
QT_MOC_LITERAL(7, 65, 14), // "btnGreenAction"
QT_MOC_LITERAL(8, 80, 13), // "btnBlueAction"
QT_MOC_LITERAL(9, 94, 15) // "btnYellowAction"

    },
    "SimonGame\0addElement\0\0startApp\0"
    "changeColor\0numberAdd\0btnRedAcion\0"
    "btnGreenAction\0btnBlueAction\0"
    "btnYellowAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimonGame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SimonGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimonGame *_t = static_cast<SimonGame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addElement(); break;
        case 1: _t->startApp(); break;
        case 2: _t->changeColor(); break;
        case 3: _t->numberAdd(); break;
        case 4: _t->btnRedAcion(); break;
        case 5: _t->btnGreenAction(); break;
        case 6: _t->btnBlueAction(); break;
        case 7: _t->btnYellowAction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SimonGame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SimonGame::addElement)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SimonGame::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SimonGame.data,
      qt_meta_data_SimonGame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SimonGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimonGame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SimonGame.stringdata0))
        return static_cast<void*>(const_cast< SimonGame*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SimonGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SimonGame::addElement()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

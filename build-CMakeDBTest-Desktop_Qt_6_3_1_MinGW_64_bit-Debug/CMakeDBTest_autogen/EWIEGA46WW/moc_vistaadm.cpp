/****************************************************************************
** Meta object code from reading C++ file 'vistaadm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../CMakeDBTest/vistaadm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vistaadm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_vistaadm_t {
    const uint offsetsAndSize[12];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_vistaadm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_vistaadm_t qt_meta_stringdata_vistaadm = {
    {
QT_MOC_LITERAL(0, 8), // "vistaadm"
QT_MOC_LITERAL(9, 25), // "on_btn_agregarpac_clicked"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 25), // "on_btn_agregarmed_clicked"
QT_MOC_LITERAL(62, 26), // "on_btn_agregarcita_clicked"
QT_MOC_LITERAL(89, 21) // "on_btn_cerrar_clicked"

    },
    "vistaadm\0on_btn_agregarpac_clicked\0\0"
    "on_btn_agregarmed_clicked\0"
    "on_btn_agregarcita_clicked\0"
    "on_btn_cerrar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vistaadm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x0a,    2 /* Public */,
       4,    0,   40,    2, 0x0a,    3 /* Public */,
       5,    0,   41,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void vistaadm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<vistaadm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_agregarpac_clicked(); break;
        case 1: _t->on_btn_agregarmed_clicked(); break;
        case 2: _t->on_btn_agregarcita_clicked(); break;
        case 3: _t->on_btn_cerrar_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject vistaadm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_vistaadm.offsetsAndSize,
    qt_meta_data_vistaadm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_vistaadm_t
, QtPrivate::TypeAndForceComplete<vistaadm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *vistaadm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vistaadm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vistaadm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int vistaadm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
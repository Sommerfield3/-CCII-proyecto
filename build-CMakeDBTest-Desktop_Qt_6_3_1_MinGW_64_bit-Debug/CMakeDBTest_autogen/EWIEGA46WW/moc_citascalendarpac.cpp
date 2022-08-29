/****************************************************************************
** Meta object code from reading C++ file 'citascalendarpac.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../CMakeDBTest/citascalendarpac.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'citascalendarpac.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_citascalendarpac_t {
    const uint offsetsAndSize[16];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_citascalendarpac_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_citascalendarpac_t qt_meta_stringdata_citascalendarpac = {
    {
QT_MOC_LITERAL(0, 16), // "citascalendarpac"
QT_MOC_LITERAL(17, 18), // "updateDataCalendar"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 1), // "d"
QT_MOC_LITERAL(39, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(63, 22), // "on_tableView_6_clicked"
QT_MOC_LITERAL(86, 11), // "QModelIndex"
QT_MOC_LITERAL(98, 5) // "index"

    },
    "citascalendarpac\0updateDataCalendar\0"
    "\0d\0on_pushButton_6_clicked\0"
    "on_tableView_6_clicked\0QModelIndex\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_citascalendarpac[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       4,    0,   35,    2, 0x08,    3 /* Private */,
       5,    1,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void citascalendarpac::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<citascalendarpac *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateDataCalendar((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 1: _t->on_pushButton_6_clicked(); break;
        case 2: _t->on_tableView_6_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject citascalendarpac::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_citascalendarpac.offsetsAndSize,
    qt_meta_data_citascalendarpac,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_citascalendarpac_t
, QtPrivate::TypeAndForceComplete<citascalendarpac, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>


>,
    nullptr
} };


const QMetaObject *citascalendarpac::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *citascalendarpac::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_citascalendarpac.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int citascalendarpac::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

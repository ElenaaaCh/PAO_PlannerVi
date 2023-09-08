/****************************************************************************
** Meta object code from reading C++ file 'mypren_controller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Controller/mypren_controller.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mypren_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMyPrenControllerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMyPrenControllerENDCLASS = QtMocHelpers::stringData(
    "MyPrenController",
    "aggiungi_enter",
    "",
    "rimuovi_enter",
    "i",
    "indietro_enter",
    "onViewClosed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMyPrenControllerENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[17];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[2];
    char stringdata5[15];
    char stringdata6[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMyPrenControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMyPrenControllerENDCLASS_t qt_meta_stringdata_CLASSMyPrenControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "MyPrenController"
        QT_MOC_LITERAL(17, 14),  // "aggiungi_enter"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 13),  // "rimuovi_enter"
        QT_MOC_LITERAL(47, 1),  // "i"
        QT_MOC_LITERAL(49, 14),  // "indietro_enter"
        QT_MOC_LITERAL(64, 12)   // "onViewClosed"
    },
    "MyPrenController",
    "aggiungi_enter",
    "",
    "rimuovi_enter",
    "i",
    "indietro_enter",
    "onViewClosed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMyPrenControllerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    6,   38,    2, 0x10a,    1 /* Public | MethodIsConst  */,
       3,    1,   51,    2, 0x0a,    8 /* Public */,
       5,    0,   54,    2, 0x0a,   10 /* Public */,
       6,    0,   55,    2, 0x10a,   11 /* Public | MethodIsConst  */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QDate, QMetaType::QTime, QMetaType::QTime, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MyPrenController::staticMetaObject = { {
    QMetaObject::SuperData::link<Controller::staticMetaObject>(),
    qt_meta_stringdata_CLASSMyPrenControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMyPrenControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMyPrenControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MyPrenController, std::true_type>,
        // method 'aggiungi_enter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'rimuovi_enter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'indietro_enter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onViewClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MyPrenController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyPrenController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aggiungi_enter((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QTime>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QTime>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6]))); break;
        case 1: _t->rimuovi_enter((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 2: _t->indietro_enter(); break;
        case 3: _t->onViewClosed(); break;
        default: ;
        }
    }
}

const QMetaObject *MyPrenController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyPrenController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMyPrenControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Controller::qt_metacast(_clname);
}

int MyPrenController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Controller::qt_metacall(_c, _id, _a);
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

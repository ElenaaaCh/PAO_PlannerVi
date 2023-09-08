/****************************************************************************
** Meta object code from reading C++ file 'aula_controller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Controller/aula_controller.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aula_controller.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSaula_controllerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSaula_controllerENDCLASS = QtMocHelpers::stringData(
    "aula_controller",
    "onViewClosed",
    "",
    "aggiungi_concerto",
    "aggiungi_strum",
    "aggiungi_studio",
    "rimuovi_concerto",
    "i",
    "rimuovi_str",
    "rimuovi_studio"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSaula_controllerENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[16];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[15];
    char stringdata5[16];
    char stringdata6[17];
    char stringdata7[2];
    char stringdata8[12];
    char stringdata9[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSaula_controllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSaula_controllerENDCLASS_t qt_meta_stringdata_CLASSaula_controllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "aula_controller"
        QT_MOC_LITERAL(16, 12),  // "onViewClosed"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 17),  // "aggiungi_concerto"
        QT_MOC_LITERAL(48, 14),  // "aggiungi_strum"
        QT_MOC_LITERAL(63, 15),  // "aggiungi_studio"
        QT_MOC_LITERAL(79, 16),  // "rimuovi_concerto"
        QT_MOC_LITERAL(96, 1),  // "i"
        QT_MOC_LITERAL(98, 11),  // "rimuovi_str"
        QT_MOC_LITERAL(110, 14)   // "rimuovi_studio"
    },
    "aula_controller",
    "onViewClosed",
    "",
    "aggiungi_concerto",
    "aggiungi_strum",
    "aggiungi_studio",
    "rimuovi_concerto",
    "i",
    "rimuovi_str",
    "rimuovi_studio"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSaula_controllerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x10a,    1 /* Public | MethodIsConst  */,
       3,    8,   57,    2, 0x10a,    2 /* Public | MethodIsConst  */,
       4,    5,   74,    2, 0x10a,   11 /* Public | MethodIsConst  */,
       5,    6,   85,    2, 0x10a,   17 /* Public | MethodIsConst  */,
       6,    1,   98,    2, 0x0a,   24 /* Public */,
       8,    1,  101,    2, 0x0a,   26 /* Public */,
       9,    1,  104,    2, 0x0a,   28 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void, QMetaType::UInt,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject aula_controller::staticMetaObject = { {
    QMetaObject::SuperData::link<Controller::staticMetaObject>(),
    qt_meta_stringdata_CLASSaula_controllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSaula_controllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSaula_controllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<aula_controller, std::true_type>,
        // method 'onViewClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aggiungi_concerto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>,
        // method 'aggiungi_strum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'aggiungi_studio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'rimuovi_concerto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'rimuovi_str'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'rimuovi_studio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>
    >,
    nullptr
} };

void aula_controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<aula_controller *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onViewClosed(); break;
        case 1: _t->aggiungi_concerto((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[8]))); break;
        case 2: _t->aggiungi_strum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 3: _t->aggiungi_studio((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6]))); break;
        case 4: _t->rimuovi_concerto((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 5: _t->rimuovi_str((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 6: _t->rimuovi_studio((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *aula_controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *aula_controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSaula_controllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Controller::qt_metacast(_clname);
}

int aula_controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Controller::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP

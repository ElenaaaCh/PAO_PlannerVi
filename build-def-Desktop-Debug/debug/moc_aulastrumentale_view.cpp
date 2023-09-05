/****************************************************************************
** Meta object code from reading C++ file 'aulastrumentale_view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../View/aulastrumentale_view.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aulastrumentale_view.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSaulaStrumentale_viewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSaulaStrumentale_viewENDCLASS = QtMocHelpers::stringData(
    "aulaStrumentale_view",
    "viewClosed",
    "",
    "rimuovi_signal_strumentale",
    "rimuovi_signal_str"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSaulaStrumentale_viewENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[21];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSaulaStrumentale_viewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSaulaStrumentale_viewENDCLASS_t qt_meta_stringdata_CLASSaulaStrumentale_viewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "aulaStrumentale_view"
        QT_MOC_LITERAL(21, 10),  // "viewClosed"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 26),  // "rimuovi_signal_strumentale"
        QT_MOC_LITERAL(60, 18)   // "rimuovi_signal_str"
    },
    "aulaStrumentale_view",
    "viewClosed",
    "",
    "rimuovi_signal_strumentale",
    "rimuovi_signal_str"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSaulaStrumentale_viewENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x106,    1 /* Public | MethodIsConst  */,
       3,    1,   33,    2, 0x106,    2 /* Public | MethodIsConst  */,
       4,    1,   36,    2, 0x106,    4 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject aulaStrumentale_view::staticMetaObject = { {
    QMetaObject::SuperData::link<Aula_View::staticMetaObject>(),
    qt_meta_stringdata_CLASSaulaStrumentale_viewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSaulaStrumentale_viewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSaulaStrumentale_viewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<aulaStrumentale_view, std::true_type>,
        // method 'viewClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rimuovi_signal_strumentale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'rimuovi_signal_str'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>
    >,
    nullptr
} };

void aulaStrumentale_view::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<aulaStrumentale_view *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewClosed(); break;
        case 1: _t->rimuovi_signal_strumentale((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 2: _t->rimuovi_signal_str((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (aulaStrumentale_view::*)() const;
            if (_t _q_method = &aulaStrumentale_view::viewClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (aulaStrumentale_view::*)(uint ) const;
            if (_t _q_method = &aulaStrumentale_view::rimuovi_signal_strumentale; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (aulaStrumentale_view::*)(uint ) const;
            if (_t _q_method = &aulaStrumentale_view::rimuovi_signal_str; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *aulaStrumentale_view::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *aulaStrumentale_view::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSaulaStrumentale_viewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Aula_View::qt_metacast(_clname);
}

int aulaStrumentale_view::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Aula_View::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void aulaStrumentale_view::viewClosed()const
{
    QMetaObject::activate(const_cast< aulaStrumentale_view *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void aulaStrumentale_view::rimuovi_signal_strumentale(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< aulaStrumentale_view *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void aulaStrumentale_view::rimuovi_signal_str(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< aulaStrumentale_view *>(this), &staticMetaObject, 2, _a);
}
QT_WARNING_POP

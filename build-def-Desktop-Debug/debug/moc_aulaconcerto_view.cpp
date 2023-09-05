/****************************************************************************
** Meta object code from reading C++ file 'aulaconcerto_view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../View/aulaconcerto_view.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aulaconcerto_view.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS = QtMocHelpers::stringData(
    "aulaConcerto_view",
    "viewClosed",
    "",
    "aggiungi_signal_c",
    "rimuovi_signal",
    "elimina_signal",
    "aggiungi_slot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[18];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[15];
    char stringdata5[15];
    char stringdata6[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS_t qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "aulaConcerto_view"
        QT_MOC_LITERAL(18, 10),  // "viewClosed"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 17),  // "aggiungi_signal_c"
        QT_MOC_LITERAL(48, 14),  // "rimuovi_signal"
        QT_MOC_LITERAL(63, 14),  // "elimina_signal"
        QT_MOC_LITERAL(78, 13)   // "aggiungi_slot"
    },
    "aulaConcerto_view",
    "viewClosed",
    "",
    "aggiungi_signal_c",
    "rimuovi_signal",
    "elimina_signal",
    "aggiungi_slot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSaulaConcerto_viewENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x106,    1 /* Public | MethodIsConst  */,
       3,    8,   45,    2, 0x06,    2 /* Public */,
       4,    1,   62,    2, 0x106,   11 /* Public | MethodIsConst  */,
       5,    1,   65,    2, 0x106,   13 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   68,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject aulaConcerto_view::staticMetaObject = { {
    QMetaObject::SuperData::link<Aula_View::staticMetaObject>(),
    qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSaulaConcerto_viewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<aulaConcerto_view, std::true_type>,
        // method 'viewClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aggiungi_signal_c'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>,
        // method 'rimuovi_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'elimina_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'aggiungi_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void aulaConcerto_view::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<aulaConcerto_view *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewClosed(); break;
        case 1: _t->aggiungi_signal_c((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[8]))); break;
        case 2: _t->rimuovi_signal((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 3: _t->elimina_signal((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 4: _t->aggiungi_slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (aulaConcerto_view::*)() const;
            if (_t _q_method = &aulaConcerto_view::viewClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (aulaConcerto_view::*)(const int & , const int & , const QString & , const int & , const QString & , const QString & , const int & , const bool & );
            if (_t _q_method = &aulaConcerto_view::aggiungi_signal_c; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (aulaConcerto_view::*)(uint ) const;
            if (_t _q_method = &aulaConcerto_view::rimuovi_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (aulaConcerto_view::*)(uint ) const;
            if (_t _q_method = &aulaConcerto_view::elimina_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *aulaConcerto_view::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *aulaConcerto_view::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Aula_View::qt_metacast(_clname);
}

int aulaConcerto_view::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Aula_View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void aulaConcerto_view::viewClosed()const
{
    QMetaObject::activate(const_cast< aulaConcerto_view *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void aulaConcerto_view::aggiungi_signal_c(const int & _t1, const int & _t2, const QString & _t3, const int & _t4, const QString & _t5, const QString & _t6, const int & _t7, const bool & _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void aulaConcerto_view::rimuovi_signal(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< aulaConcerto_view *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void aulaConcerto_view::elimina_signal(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< aulaConcerto_view *>(this), &staticMetaObject, 3, _a);
}
QT_WARNING_POP

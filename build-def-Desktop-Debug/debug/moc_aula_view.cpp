/****************************************************************************
** Meta object code from reading C++ file 'aula_view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../View/aula_view.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aula_view.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAula_ViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAula_ViewENDCLASS = QtMocHelpers::stringData(
    "Aula_View",
    "rimuovi_signal_studio",
    "",
    "aggiungi_signal_s",
    "aggiungi_signal_c",
    "rimuovi_signal_concerto",
    "rimuovi_signal_strumentale",
    "aggiungi_signal_str"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAula_ViewENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[10];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[18];
    char stringdata5[24];
    char stringdata6[27];
    char stringdata7[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAula_ViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAula_ViewENDCLASS_t qt_meta_stringdata_CLASSAula_ViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "Aula_View"
        QT_MOC_LITERAL(10, 21),  // "rimuovi_signal_studio"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 17),  // "aggiungi_signal_s"
        QT_MOC_LITERAL(51, 17),  // "aggiungi_signal_c"
        QT_MOC_LITERAL(69, 23),  // "rimuovi_signal_concerto"
        QT_MOC_LITERAL(93, 26),  // "rimuovi_signal_strumentale"
        QT_MOC_LITERAL(120, 19)   // "aggiungi_signal_str"
    },
    "Aula_View",
    "rimuovi_signal_studio",
    "",
    "aggiungi_signal_s",
    "aggiungi_signal_c",
    "rimuovi_signal_concerto",
    "rimuovi_signal_strumentale",
    "aggiungi_signal_str"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAula_ViewENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x106,    1 /* Public | MethodIsConst  */,
       3,    6,   53,    2, 0x06,    3 /* Public */,
       4,    8,   66,    2, 0x06,   10 /* Public */,
       5,    1,   83,    2, 0x106,   19 /* Public | MethodIsConst  */,
       6,    1,   86,    2, 0x106,   21 /* Public | MethodIsConst  */,
       7,    5,   89,    2, 0x06,   23 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString,    2,    2,    2,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject Aula_View::staticMetaObject = { {
    QMetaObject::SuperData::link<View::staticMetaObject>(),
    qt_meta_stringdata_CLASSAula_ViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAula_ViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAula_ViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Aula_View, std::true_type>,
        // method 'rimuovi_signal_studio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'aggiungi_signal_s'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
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
        // method 'rimuovi_signal_concerto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'rimuovi_signal_strumentale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'aggiungi_signal_str'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Aula_View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Aula_View *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rimuovi_signal_studio((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 1: _t->aggiungi_signal_s((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6]))); break;
        case 2: _t->aggiungi_signal_c((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[8]))); break;
        case 3: _t->rimuovi_signal_concerto((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 4: _t->rimuovi_signal_strumentale((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 5: _t->aggiungi_signal_str((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Aula_View::*)(uint ) const;
            if (_t _q_method = &Aula_View::rimuovi_signal_studio; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Aula_View::*)(const int & , const int & , const QString & , const int & , const int & , const int & );
            if (_t _q_method = &Aula_View::aggiungi_signal_s; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Aula_View::*)(const int & , const int & , const QString & , const int & , const QString & , const QString & , const int & , const bool & );
            if (_t _q_method = &Aula_View::aggiungi_signal_c; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Aula_View::*)(uint ) const;
            if (_t _q_method = &Aula_View::rimuovi_signal_concerto; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Aula_View::*)(uint ) const;
            if (_t _q_method = &Aula_View::rimuovi_signal_strumentale; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Aula_View::*)(const int & , const int & , const QString & , const int & , const QString & );
            if (_t _q_method = &Aula_View::aggiungi_signal_str; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *Aula_View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Aula_View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAula_ViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return View::qt_metacast(_clname);
}

int Aula_View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Aula_View::rimuovi_signal_studio(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Aula_View *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Aula_View::aggiungi_signal_s(const int & _t1, const int & _t2, const QString & _t3, const int & _t4, const int & _t5, const int & _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Aula_View::aggiungi_signal_c(const int & _t1, const int & _t2, const QString & _t3, const int & _t4, const QString & _t5, const QString & _t6, const int & _t7, const bool & _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Aula_View::rimuovi_signal_concerto(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Aula_View *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Aula_View::rimuovi_signal_strumentale(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Aula_View *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Aula_View::aggiungi_signal_str(const int & _t1, const int & _t2, const QString & _t3, const int & _t4, const QString & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP

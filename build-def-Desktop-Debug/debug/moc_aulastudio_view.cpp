/****************************************************************************
** Meta object code from reading C++ file 'aulastudio_view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../View/aulastudio_view.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aulastudio_view.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSaulaStudio_viewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSaulaStudio_viewENDCLASS = QtMocHelpers::stringData(
    "aulaStudio_view",
    "viewClosed",
    "",
    "rimuovi_signal_studio",
    "rimuovi_signal_s"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSaulaStudio_viewENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[16];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSaulaStudio_viewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSaulaStudio_viewENDCLASS_t qt_meta_stringdata_CLASSaulaStudio_viewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "aulaStudio_view"
        QT_MOC_LITERAL(16, 10),  // "viewClosed"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 21),  // "rimuovi_signal_studio"
        QT_MOC_LITERAL(50, 16)   // "rimuovi_signal_s"
    },
    "aulaStudio_view",
    "viewClosed",
    "",
    "rimuovi_signal_studio",
    "rimuovi_signal_s"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSaulaStudio_viewENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject aulaStudio_view::staticMetaObject = { {
    QMetaObject::SuperData::link<Aula_View::staticMetaObject>(),
    qt_meta_stringdata_CLASSaulaStudio_viewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSaulaStudio_viewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSaulaStudio_viewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<aulaStudio_view, std::true_type>,
        // method 'viewClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rimuovi_signal_studio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'rimuovi_signal_s'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>
    >,
    nullptr
} };

void aulaStudio_view::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<aulaStudio_view *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewClosed(); break;
        case 1: _t->rimuovi_signal_studio((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 2: _t->rimuovi_signal_s((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (aulaStudio_view::*)() const;
            if (_t _q_method = &aulaStudio_view::viewClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (aulaStudio_view::*)(uint ) const;
            if (_t _q_method = &aulaStudio_view::rimuovi_signal_studio; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (aulaStudio_view::*)(uint ) const;
            if (_t _q_method = &aulaStudio_view::rimuovi_signal_s; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *aulaStudio_view::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *aulaStudio_view::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSaulaStudio_viewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Aula_View::qt_metacast(_clname);
}

int aulaStudio_view::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void aulaStudio_view::viewClosed()const
{
    QMetaObject::activate(const_cast< aulaStudio_view *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void aulaStudio_view::rimuovi_signal_studio(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< aulaStudio_view *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void aulaStudio_view::rimuovi_signal_s(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< aulaStudio_view *>(this), &staticMetaObject, 2, _a);
}
QT_WARNING_POP

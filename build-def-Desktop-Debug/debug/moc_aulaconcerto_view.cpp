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
    "aggiungi_slot",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[18];
    char stringdata1[14];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS_t qt_meta_stringdata_CLASSaulaConcerto_viewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "aulaConcerto_view"
        QT_MOC_LITERAL(18, 13),  // "aggiungi_slot"
        QT_MOC_LITERAL(32, 0)   // ""
    },
    "aulaConcerto_view",
    "aggiungi_slot",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSaulaConcerto_viewENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

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
        case 0: _t->aggiungi_slot(); break;
        default: ;
        }
    }
    (void)_a;
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
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP

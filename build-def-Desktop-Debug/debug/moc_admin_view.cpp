/****************************************************************************
** Meta object code from reading C++ file 'admin_view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../View/admin_view.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin_view.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSadmin_viewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadmin_viewENDCLASS = QtMocHelpers::stringData(
    "admin_view",
    "View_concerto_signal",
    "",
    "View_str_signal",
    "View_studio_signal",
    "viewClosed",
    "slot1",
    "slot2",
    "slot3"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadmin_viewENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[19];
    char stringdata5[11];
    char stringdata6[6];
    char stringdata7[6];
    char stringdata8[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadmin_viewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadmin_viewENDCLASS_t qt_meta_stringdata_CLASSadmin_viewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "admin_view"
        QT_MOC_LITERAL(11, 20),  // "View_concerto_signal"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 15),  // "View_str_signal"
        QT_MOC_LITERAL(49, 18),  // "View_studio_signal"
        QT_MOC_LITERAL(68, 10),  // "viewClosed"
        QT_MOC_LITERAL(79, 5),  // "slot1"
        QT_MOC_LITERAL(85, 5),  // "slot2"
        QT_MOC_LITERAL(91, 5)   // "slot3"
    },
    "admin_view",
    "View_concerto_signal",
    "",
    "View_str_signal",
    "View_studio_signal",
    "viewClosed",
    "slot1",
    "slot2",
    "slot3"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadmin_viewENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x106,    1 /* Public | MethodIsConst  */,
       3,    0,   57,    2, 0x106,    2 /* Public | MethodIsConst  */,
       4,    0,   58,    2, 0x106,    3 /* Public | MethodIsConst  */,
       5,    0,   59,    2, 0x106,    4 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   60,    2, 0x10a,    5 /* Public | MethodIsConst  */,
       7,    0,   61,    2, 0x10a,    6 /* Public | MethodIsConst  */,
       8,    0,   62,    2, 0x10a,    7 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject admin_view::staticMetaObject = { {
    QMetaObject::SuperData::link<View::staticMetaObject>(),
    qt_meta_stringdata_CLASSadmin_viewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadmin_viewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadmin_viewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<admin_view, std::true_type>,
        // method 'View_concerto_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'View_str_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'View_studio_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'viewClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void admin_view::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<admin_view *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->View_concerto_signal(); break;
        case 1: _t->View_str_signal(); break;
        case 2: _t->View_studio_signal(); break;
        case 3: _t->viewClosed(); break;
        case 4: _t->slot1(); break;
        case 5: _t->slot2(); break;
        case 6: _t->slot3(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (admin_view::*)() const;
            if (_t _q_method = &admin_view::View_concerto_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (admin_view::*)() const;
            if (_t _q_method = &admin_view::View_str_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (admin_view::*)() const;
            if (_t _q_method = &admin_view::View_studio_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (admin_view::*)() const;
            if (_t _q_method = &admin_view::viewClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *admin_view::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *admin_view::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadmin_viewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return View::qt_metacast(_clname);
}

int admin_view::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void admin_view::View_concerto_signal()const
{
    QMetaObject::activate(const_cast< admin_view *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void admin_view::View_str_signal()const
{
    QMetaObject::activate(const_cast< admin_view *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void admin_view::View_studio_signal()const
{
    QMetaObject::activate(const_cast< admin_view *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void admin_view::viewClosed()const
{
    QMetaObject::activate(const_cast< admin_view *>(this), &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'login_view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../View/login_view.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login_view.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSlogin_viewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSlogin_viewENDCLASS = QtMocHelpers::stringData(
    "login_view",
    "ButtonClicked",
    "",
    "Login_signal",
    "string",
    "e",
    "p",
    "Register_signal",
    "onLoginButtonClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSlogin_viewENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[7];
    char stringdata5[2];
    char stringdata6[2];
    char stringdata7[16];
    char stringdata8[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSlogin_viewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSlogin_viewENDCLASS_t qt_meta_stringdata_CLASSlogin_viewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "login_view"
        QT_MOC_LITERAL(11, 13),  // "ButtonClicked"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 12),  // "Login_signal"
        QT_MOC_LITERAL(39, 6),  // "string"
        QT_MOC_LITERAL(46, 1),  // "e"
        QT_MOC_LITERAL(48, 1),  // "p"
        QT_MOC_LITERAL(50, 15),  // "Register_signal"
        QT_MOC_LITERAL(66, 20)   // "onLoginButtonClicked"
    },
    "login_view",
    "ButtonClicked",
    "",
    "Login_signal",
    "string",
    "e",
    "p",
    "Register_signal",
    "onLoginButtonClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSlogin_viewENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x106,    1 /* Public | MethodIsConst  */,
       3,    2,   39,    2, 0x106,    2 /* Public | MethodIsConst  */,
       7,    0,   44,    2, 0x106,    5 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   45,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject login_view::staticMetaObject = { {
    QMetaObject::SuperData::link<View::staticMetaObject>(),
    qt_meta_stringdata_CLASSlogin_viewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSlogin_viewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSlogin_viewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<login_view, std::true_type>,
        // method 'ButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Login_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const string &, std::false_type>,
        // method 'Register_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLoginButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void login_view::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<login_view *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ButtonClicked(); break;
        case 1: _t->Login_signal((*reinterpret_cast< std::add_pointer_t<string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<string>>(_a[2]))); break;
        case 2: _t->Register_signal(); break;
        case 3: _t->onLoginButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (login_view::*)() const;
            if (_t _q_method = &login_view::ButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (login_view::*)(const string & , const string & ) const;
            if (_t _q_method = &login_view::Login_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (login_view::*)() const;
            if (_t _q_method = &login_view::Register_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *login_view::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *login_view::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSlogin_viewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return View::qt_metacast(_clname);
}

int login_view::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void login_view::ButtonClicked()const
{
    QMetaObject::activate(const_cast< login_view *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void login_view::Login_signal(const string & _t1, const string & _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< login_view *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void login_view::Register_signal()const
{
    QMetaObject::activate(const_cast< login_view *>(this), &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP

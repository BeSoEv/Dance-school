/****************************************************************************
** Meta object code from reading C++ file 'coachinterface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../coachinterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coachinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
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
struct qt_meta_stringdata_CLASSCoachInterfaceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCoachInterfaceENDCLASS = QtMocHelpers::stringData(
    "CoachInterface",
    "on_applicationsOfLessonsBut_clicked",
    "",
    "on_futureLessonsBut_clicked",
    "on_historyOfLessonsBut_clicked",
    "on_moneyBut_clicked",
    "on_acceptApplicationBut_clicked",
    "on_coachApplicationsView_clicked",
    "QModelIndex",
    "index",
    "on_rejectApplicationBut_clicked",
    "on_endLessonBut_clicked",
    "on_cancelLessonBut_clicked",
    "on_coachLessonView_clicked",
    "on_coachDateBut_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCoachInterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    1,   85,    2, 0x08,    6 /* Private */,
      10,    0,   88,    2, 0x08,    8 /* Private */,
      11,    0,   89,    2, 0x08,    9 /* Private */,
      12,    0,   90,    2, 0x08,   10 /* Private */,
      13,    1,   91,    2, 0x08,   11 /* Private */,
      14,    0,   94,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CoachInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSCoachInterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCoachInterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCoachInterfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CoachInterface, std::true_type>,
        // method 'on_applicationsOfLessonsBut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_futureLessonsBut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_historyOfLessonsBut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moneyBut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_acceptApplicationBut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_coachApplicationsView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_rejectApplicationBut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_endLessonBut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancelLessonBut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_coachLessonView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_coachDateBut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CoachInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CoachInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_applicationsOfLessonsBut_clicked(); break;
        case 1: _t->on_futureLessonsBut_clicked(); break;
        case 2: _t->on_historyOfLessonsBut_clicked(); break;
        case 3: _t->on_moneyBut_clicked(); break;
        case 4: _t->on_acceptApplicationBut_clicked(); break;
        case 5: _t->on_coachApplicationsView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->on_rejectApplicationBut_clicked(); break;
        case 7: _t->on_endLessonBut_clicked(); break;
        case 8: _t->on_cancelLessonBut_clicked(); break;
        case 9: _t->on_coachLessonView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 10: _t->on_coachDateBut_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *CoachInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoachInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCoachInterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CoachInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'personmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../personmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'personmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.0. It"
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
struct qt_meta_tag_ZN13PersonManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto PersonManager::qt_create_metaobjectdata<qt_meta_tag_ZN13PersonManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PersonManager",
        "on_btnAddStudent_clicked",
        "",
        "on_btnDeleteStudent_clicked",
        "on_btnUpdateStudent_clicked",
        "on_btnQueryStudent_clicked",
        "on_btnRefreshStudent_clicked",
        "on_btnBatchAddStudent_clicked",
        "on_btnBatchDeleteStudent_clicked",
        "on_btnAddTeacher_clicked",
        "on_btnDeleteTeacher_clicked",
        "on_btnUpdateTeacher_clicked",
        "on_btnQueryTeacher_clicked",
        "on_btnRefreshTeacher_clicked",
        "on_btnBatchAddTeacher_clicked",
        "on_btnBatchDeleteTeacher_clicked",
        "on_btnStatistics_clicked",
        "on_btnReturn_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_btnAddStudent_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDeleteStudent_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnUpdateStudent_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnQueryStudent_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnRefreshStudent_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnBatchAddStudent_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnBatchDeleteStudent_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnAddTeacher_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDeleteTeacher_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnUpdateTeacher_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnQueryTeacher_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnRefreshTeacher_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnBatchAddTeacher_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnBatchDeleteTeacher_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnStatistics_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnReturn_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PersonManager, qt_meta_tag_ZN13PersonManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PersonManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PersonManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PersonManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13PersonManagerE_t>.metaTypes,
    nullptr
} };

void PersonManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PersonManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_btnAddStudent_clicked(); break;
        case 1: _t->on_btnDeleteStudent_clicked(); break;
        case 2: _t->on_btnUpdateStudent_clicked(); break;
        case 3: _t->on_btnQueryStudent_clicked(); break;
        case 4: _t->on_btnRefreshStudent_clicked(); break;
        case 5: _t->on_btnBatchAddStudent_clicked(); break;
        case 6: _t->on_btnBatchDeleteStudent_clicked(); break;
        case 7: _t->on_btnAddTeacher_clicked(); break;
        case 8: _t->on_btnDeleteTeacher_clicked(); break;
        case 9: _t->on_btnUpdateTeacher_clicked(); break;
        case 10: _t->on_btnQueryTeacher_clicked(); break;
        case 11: _t->on_btnRefreshTeacher_clicked(); break;
        case 12: _t->on_btnBatchAddTeacher_clicked(); break;
        case 13: _t->on_btnBatchDeleteTeacher_clicked(); break;
        case 14: _t->on_btnStatistics_clicked(); break;
        case 15: _t->on_btnReturn_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *PersonManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PersonManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PersonManagerE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PersonManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP

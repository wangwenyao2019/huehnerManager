/****************************************************************************
** Meta object code from reading C++ file 'frmaddmitarbeiter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../frmaddmitarbeiter.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmaddmitarbeiter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSFrmAddMitarbeiterENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFrmAddMitarbeiterENDCLASS = QtMocHelpers::stringData(
    "FrmAddMitarbeiter",
    "on_btnNeuMitarbeiter_clicked",
    "",
    "on_btnEntfernen_clicked",
    "on_btnSpeichern_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFrmAddMitarbeiterENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[18];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFrmAddMitarbeiterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFrmAddMitarbeiterENDCLASS_t qt_meta_stringdata_CLASSFrmAddMitarbeiterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "FrmAddMitarbeiter"
        QT_MOC_LITERAL(18, 28),  // "on_btnNeuMitarbeiter_clicked"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 23),  // "on_btnEntfernen_clicked"
        QT_MOC_LITERAL(72, 23)   // "on_btnSpeichern_clicked"
    },
    "FrmAddMitarbeiter",
    "on_btnNeuMitarbeiter_clicked",
    "",
    "on_btnEntfernen_clicked",
    "on_btnSpeichern_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFrmAddMitarbeiterENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FrmAddMitarbeiter::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSFrmAddMitarbeiterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFrmAddMitarbeiterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFrmAddMitarbeiterENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FrmAddMitarbeiter, std::true_type>,
        // method 'on_btnNeuMitarbeiter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnEntfernen_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSpeichern_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FrmAddMitarbeiter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FrmAddMitarbeiter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnNeuMitarbeiter_clicked(); break;
        case 1: _t->on_btnEntfernen_clicked(); break;
        case 2: _t->on_btnSpeichern_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FrmAddMitarbeiter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrmAddMitarbeiter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFrmAddMitarbeiterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FrmAddMitarbeiter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'dlgstammdaten.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dlgstammdaten.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgstammdaten.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDlgStammdatenENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDlgStammdatenENDCLASS = QtMocHelpers::stringData(
    "DlgStammdaten",
    "on_btnNeu_clicked",
    "",
    "on_btnEinfuegen_clicked",
    "on_btnSpeichern_clicked",
    "on_btnAbbrechen_clicked",
    "removeEmptyRows"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDlgStammdatenENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[14];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[24];
    char stringdata5[24];
    char stringdata6[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDlgStammdatenENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDlgStammdatenENDCLASS_t qt_meta_stringdata_CLASSDlgStammdatenENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "DlgStammdaten"
        QT_MOC_LITERAL(14, 17),  // "on_btnNeu_clicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 23),  // "on_btnEinfuegen_clicked"
        QT_MOC_LITERAL(57, 23),  // "on_btnSpeichern_clicked"
        QT_MOC_LITERAL(81, 23),  // "on_btnAbbrechen_clicked"
        QT_MOC_LITERAL(105, 15)   // "removeEmptyRows"
    },
    "DlgStammdaten",
    "on_btnNeu_clicked",
    "",
    "on_btnEinfuegen_clicked",
    "on_btnSpeichern_clicked",
    "on_btnAbbrechen_clicked",
    "removeEmptyRows"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDlgStammdatenENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DlgStammdaten::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSDlgStammdatenENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDlgStammdatenENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDlgStammdatenENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DlgStammdaten, std::true_type>,
        // method 'on_btnNeu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnEinfuegen_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSpeichern_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAbbrechen_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeEmptyRows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DlgStammdaten::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgStammdaten *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnNeu_clicked(); break;
        case 1: _t->on_btnEinfuegen_clicked(); break;
        case 2: _t->on_btnSpeichern_clicked(); break;
        case 3: _t->on_btnAbbrechen_clicked(); break;
        case 4: _t->removeEmptyRows(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *DlgStammdaten::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgStammdaten::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDlgStammdatenENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DlgStammdaten::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP

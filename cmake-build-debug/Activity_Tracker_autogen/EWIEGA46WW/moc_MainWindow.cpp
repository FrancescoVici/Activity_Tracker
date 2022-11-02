/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "activityChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "changed"
QT_MOC_LITERAL(4, 36, 19), // "openUserInputWindow"
QT_MOC_LITERAL(5, 56, 5), // "click"
QT_MOC_LITERAL(6, 62, 20), // "openUserDeleteWindow"
QT_MOC_LITERAL(7, 83, 10), // "pushNewAct"
QT_MOC_LITERAL(8, 94, 9), // "Activity*"
QT_MOC_LITERAL(9, 104, 6), // "newAct"
QT_MOC_LITERAL(10, 111, 23), // "receiveActivityToDelete"
QT_MOC_LITERAL(11, 135, 8), // "toRemove"
QT_MOC_LITERAL(12, 144, 18), // "updateRegistersBox"
QT_MOC_LITERAL(13, 163, 21), // "updateActivitiesTable"
QT_MOC_LITERAL(14, 185, 7) // "current"

    },
    "MainWindow\0activityChanged\0\0changed\0"
    "openUserInputWindow\0click\0"
    "openUserDeleteWindow\0pushNewAct\0"
    "Activity*\0newAct\0receiveActivityToDelete\0"
    "toRemove\0updateRegistersBox\0"
    "updateActivitiesTable\0current"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       1,    0,   72,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   73,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   77,    2, 0x0a /* Public */,
       6,    0,   80,    2, 0x2a /* Public | MethodCloned */,
       7,    1,   81,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x0a /* Public */,
      12,    1,   87,    2, 0x0a /* Public */,
      13,    1,   90,    2, 0x0a /* Public */,
      13,    1,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->activityChanged(); break;
        case 2: _t->openUserInputWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->openUserInputWindow(); break;
        case 4: _t->openUserDeleteWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->openUserDeleteWindow(); break;
        case 6: _t->pushNewAct((*reinterpret_cast< Activity*(*)>(_a[1]))); break;
        case 7: _t->receiveActivityToDelete((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->updateRegistersBox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->updateActivitiesTable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->updateActivitiesTable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::activityChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::activityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

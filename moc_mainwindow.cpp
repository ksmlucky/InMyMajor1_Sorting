/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tester/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "insertionSort"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "int[]"
QT_MOC_LITERAL(4, 32, 3), // "arr"
QT_MOC_LITERAL(5, 36, 4), // "size"
QT_MOC_LITERAL(6, 41, 13), // "selectionSort"
QT_MOC_LITERAL(7, 55, 10), // "bubbleSort"
QT_MOC_LITERAL(8, 66, 9), // "mergeSort"
QT_MOC_LITERAL(9, 76, 7), // "heapify"
QT_MOC_LITERAL(10, 84, 9), // "rootIndex"
QT_MOC_LITERAL(11, 94, 8), // "heapSort"
QT_MOC_LITERAL(12, 103, 9), // "quickSort"
QT_MOC_LITERAL(13, 113, 9), // "shellSort"
QT_MOC_LITERAL(14, 123, 9), // "radixSort"
QT_MOC_LITERAL(15, 133, 4), // "base"
QT_MOC_LITERAL(16, 138, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(17, 160, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(18, 184, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(19, 208, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(20, 231, 24) // "on_radioButton_2_clicked"

    },
    "MainWindow\0insertionSort\0\0int[]\0arr\0"
    "size\0selectionSort\0bubbleSort\0mergeSort\0"
    "heapify\0rootIndex\0heapSort\0quickSort\0"
    "shellSort\0radixSort\0base\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_radioButton_clicked\0on_radioButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x08 /* Private */,
       6,    2,   89,    2, 0x08 /* Private */,
       7,    2,   94,    2, 0x08 /* Private */,
       8,    2,   99,    2, 0x08 /* Private */,
       9,    3,  104,    2, 0x08 /* Private */,
      11,    2,  111,    2, 0x08 /* Private */,
      12,    2,  116,    2, 0x08 /* Private */,
      13,    2,  121,    2, 0x08 /* Private */,
      14,    3,  126,    2, 0x08 /* Private */,
      16,    0,  133,    2, 0x08 /* Private */,
      17,    0,  134,    2, 0x08 /* Private */,
      18,    0,  135,    2, 0x08 /* Private */,
      19,    0,  136,    2, 0x08 /* Private */,
      20,    0,  137,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,   10,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->insertionSort((*reinterpret_cast< int(*)[]>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->selectionSort((*reinterpret_cast< int(*)[]>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->bubbleSort((*reinterpret_cast< int(*)[]>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->mergeSort((*reinterpret_cast< int(*)[]>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->heapify((*reinterpret_cast< int(*)[]>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->heapSort((*reinterpret_cast< int(*)[]>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->quickSort((*reinterpret_cast< int(*)[]>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->shellSort((*reinterpret_cast< int(*)[]>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->radixSort((*reinterpret_cast< int(*)[]>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_pushButton_2_clicked(); break;
        case 11: _t->on_pushButton_3_clicked(); break;
        case 12: _t->on_radioButton_clicked(); break;
        case 13: _t->on_radioButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

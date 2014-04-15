/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun Feb 23 15:13:12 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "includes/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      46,   40,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,
     114,   11,   11,   11, 0x08,
     144,   11,   11,   11, 0x08,
     174,   11,   11,   11, 0x08,
     202,   11,   11,   11, 0x08,
     235,   11,   11,   11, 0x08,
     273,   11,   11,   11, 0x08,
     314,  310,   11,   11, 0x08,
     343,   11,   11,   11, 0x08,
     377,   11,   11,   11, 0x08,
     410,   11,   11,   11, 0x08,
     443,   11,   11,   11, 0x08,
     473,   11,   11,   11, 0x08,
     503,   11,   11,   11, 0x08,
     532,   11,   11,   11, 0x08,
     562,   11,   11,   11, 0x08,
     593,   11,   11,   11, 0x08,
     622,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionOuvrir_triggered()\0"
    "index\0on_fileTree_doubleClicked(QModelIndex)\0"
    "on_actionQuitter_triggered()\0"
    "on_actionCompiler_triggered()\0"
    "on_actionExecuter_triggered()\0"
    "on_actionFermer_triggered()\0"
    "on_actionSauvegarder_triggered()\0"
    "on_actionSauvegarder_sous_triggered()\0"
    "on_actionNouveau_Fichier_triggered()\0"
    "mem\0drawStackFromMemory(Memory*)\0"
    "on_actionExecuter_JJC_triggered()\0"
    "on_ExecutePasAPasMJJ_triggered()\0"
    "on_ExecutePasAPasJJC_triggered()\0"
    "on_actionArretMJJ_triggered()\0"
    "on_actionArretJJC_triggered()\0"
    "on_actionAnnuler_triggered()\0"
    "on_actionA_propos_triggered()\0"
    "on_actionRestaurer_triggered()\0"
    "on_action800x600_triggered()\0"
    "on_action1080x720_triggered()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionOuvrir_triggered(); break;
        case 1: _t->on_fileTree_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_actionQuitter_triggered(); break;
        case 3: _t->on_actionCompiler_triggered(); break;
        case 4: _t->on_actionExecuter_triggered(); break;
        case 5: _t->on_actionFermer_triggered(); break;
        case 6: _t->on_actionSauvegarder_triggered(); break;
        case 7: _t->on_actionSauvegarder_sous_triggered(); break;
        case 8: _t->on_actionNouveau_Fichier_triggered(); break;
        case 9: _t->drawStackFromMemory((*reinterpret_cast< Memory*(*)>(_a[1]))); break;
        case 10: _t->on_actionExecuter_JJC_triggered(); break;
        case 11: _t->on_ExecutePasAPasMJJ_triggered(); break;
        case 12: _t->on_ExecutePasAPasJJC_triggered(); break;
        case 13: _t->on_actionArretMJJ_triggered(); break;
        case 14: _t->on_actionArretJJC_triggered(); break;
        case 15: _t->on_actionAnnuler_triggered(); break;
        case 16: _t->on_actionA_propos_triggered(); break;
        case 17: _t->on_actionRestaurer_triggered(); break;
        case 18: _t->on_action800x600_triggered(); break;
        case 19: _t->on_action1080x720_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

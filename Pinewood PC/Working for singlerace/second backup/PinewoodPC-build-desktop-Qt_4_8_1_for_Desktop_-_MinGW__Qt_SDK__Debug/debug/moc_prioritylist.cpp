/****************************************************************************
** Meta object code from reading C++ file 'prioritylist.h'
**
** Created: Thu Nov 22 20:30:45 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "D:/PinewoodPC/prioritylist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prioritylist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_prioritylist[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      28,   13,   13,   13, 0x08,
      42,   13,   13,   13, 0x08,
      59,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_prioritylist[] = {
    "prioritylist\0\0refreshList()\0addPriority()\0"
    "removePriority()\0clearPriorities()\0"
};

void prioritylist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        prioritylist *_t = static_cast<prioritylist *>(_o);
        switch (_id) {
        case 0: _t->refreshList(); break;
        case 1: _t->addPriority(); break;
        case 2: _t->removePriority(); break;
        case 3: _t->clearPriorities(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData prioritylist::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject prioritylist::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_prioritylist,
      qt_meta_data_prioritylist, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &prioritylist::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *prioritylist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *prioritylist::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_prioritylist))
        return static_cast<void*>(const_cast< prioritylist*>(this));
    return QDialog::qt_metacast(_clname);
}

int prioritylist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

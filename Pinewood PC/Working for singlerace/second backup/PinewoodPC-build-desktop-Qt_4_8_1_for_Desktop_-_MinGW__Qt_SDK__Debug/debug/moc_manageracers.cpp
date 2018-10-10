/****************************************************************************
** Meta object code from reading C++ file 'manageracers.h'
**
** Created: Thu Nov 22 17:43:37 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "D:/PinewoodPC/manageracers.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manageracers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_manageracers[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      26,   13,   13,   13, 0x08,
      43,   13,   13,   13, 0x08,
      54,   13,   13,   13, 0x08,
      64,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_manageracers[] = {
    "manageracers\0\0deleteAll()\0deleteSelected()\0"
    "addRacer()\0closeMe()\0refreshList()\0"
};

void manageracers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        manageracers *_t = static_cast<manageracers *>(_o);
        switch (_id) {
        case 0: _t->deleteAll(); break;
        case 1: _t->deleteSelected(); break;
        case 2: _t->addRacer(); break;
        case 3: _t->closeMe(); break;
        case 4: _t->refreshList(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData manageracers::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject manageracers::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_manageracers,
      qt_meta_data_manageracers, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &manageracers::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *manageracers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *manageracers::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_manageracers))
        return static_cast<void*>(const_cast< manageracers*>(this));
    return QDialog::qt_metacast(_clname);
}

int manageracers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

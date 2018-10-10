/****************************************************************************
** Meta object code from reading C++ file 'pinewoodpc.h'
**
** Created: Thu Nov 22 01:13:10 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "D:/PinewoodPC/pinewoodpc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pinewoodpc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pinewoodPC[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      38,   11,   11,   11, 0x08,
      57,   11,   11,   11, 0x08,
      76,   11,   11,   11, 0x08,
      88,   11,   11,   11, 0x08,
     100,   11,   11,   11, 0x08,
     112,   11,   11,   11, 0x08,
     124,   11,   11,   11, 0x08,
     136,   11,   11,   11, 0x08,
     149,   11,   11,   11, 0x08,
     162,   11,   11,   11, 0x08,
     177,   11,   11,   11, 0x08,
     190,   11,   11,   11, 0x08,
     205,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,
     227,   11,   11,   11, 0x08,
     239,   11,   11,   11, 0x08,
     250,   11,   11,   11, 0x08,
     266,   11,   11,   11, 0x08,
     278,   11,   11,   11, 0x08,
     292,   11,   11,   11, 0x08,
     301,   11,   11,   11, 0x08,
     308,   11,   11,   11, 0x08,
     319,   11,   11,   11, 0x08,
     333,   11,   11,   11, 0x08,
     341,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pinewoodPC[] = {
    "pinewoodPC\0\0on_actionExit_triggered()\0"
    "changeLanguageHU()\0changeLanguageEN()\0"
    "timereset()\0timeread1()\0timeread2()\0"
    "timeread3()\0timeread4()\0timeverify()\0"
    "fullscreen()\0normalscreen()\0singlerace()\0"
    "championship()\0aboutWindow()\0helps()\0"
    "scrollled()\0nextrace()\0prioritylists()\0"
    "viewracer()\0manageracer()\0saveas()\0"
    "load()\0autosave()\0newdatabase()\0delay()\0"
    "missing()\0"
};

void pinewoodPC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pinewoodPC *_t = static_cast<pinewoodPC *>(_o);
        switch (_id) {
        case 0: _t->on_actionExit_triggered(); break;
        case 1: _t->changeLanguageHU(); break;
        case 2: _t->changeLanguageEN(); break;
        case 3: _t->timereset(); break;
        case 4: _t->timeread1(); break;
        case 5: _t->timeread2(); break;
        case 6: _t->timeread3(); break;
        case 7: _t->timeread4(); break;
        case 8: _t->timeverify(); break;
        case 9: _t->fullscreen(); break;
        case 10: _t->normalscreen(); break;
        case 11: _t->singlerace(); break;
        case 12: _t->championship(); break;
        case 13: _t->aboutWindow(); break;
        case 14: _t->helps(); break;
        case 15: _t->scrollled(); break;
        case 16: _t->nextrace(); break;
        case 17: _t->prioritylists(); break;
        case 18: _t->viewracer(); break;
        case 19: _t->manageracer(); break;
        case 20: _t->saveas(); break;
        case 21: _t->load(); break;
        case 22: _t->autosave(); break;
        case 23: _t->newdatabase(); break;
        case 24: _t->delay(); break;
        case 25: _t->missing(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pinewoodPC::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pinewoodPC::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_pinewoodPC,
      qt_meta_data_pinewoodPC, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pinewoodPC::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pinewoodPC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pinewoodPC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pinewoodPC))
        return static_cast<void*>(const_cast< pinewoodPC*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int pinewoodPC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

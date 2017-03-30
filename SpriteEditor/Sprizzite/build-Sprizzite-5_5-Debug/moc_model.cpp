/****************************************************************************
** Meta object code from reading C++ file 'model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cs3505-a7-sprite-editor-segfault/model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Model_t {
    QByteArrayData data[58];
    char stringdata0[852];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Model_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Model_t qt_meta_stringdata_Model = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Model"
QT_MOC_LITERAL(1, 6, 12), // "updateCanvas"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "timerFire"
QT_MOC_LITERAL(4, 30, 26), // "refreshScrollButtonsSignal"
QT_MOC_LITERAL(5, 57, 24), // "refreshZoomButtonsSignal"
QT_MOC_LITERAL(6, 82, 14), // "sendGridSwitch"
QT_MOC_LITERAL(7, 97, 13), // "updateCurrent"
QT_MOC_LITERAL(8, 111, 14), // "updatePrevious"
QT_MOC_LITERAL(9, 126, 10), // "updateNext"
QT_MOC_LITERAL(10, 137, 13), // "createNewFile"
QT_MOC_LITERAL(11, 151, 16), // "updateCanvasSize"
QT_MOC_LITERAL(12, 168, 10), // "fillCanvas"
QT_MOC_LITERAL(13, 179, 11), // "changeFrame"
QT_MOC_LITERAL(14, 191, 4), // "draw"
QT_MOC_LITERAL(15, 196, 5), // "erase"
QT_MOC_LITERAL(16, 202, 13), // "updatePreview"
QT_MOC_LITERAL(17, 216, 25), // "fillPreviewFromOpenAndNew"
QT_MOC_LITERAL(18, 242, 12), // "PixelCanvas*"
QT_MOC_LITERAL(19, 255, 21), // "fillPreviewFromChange"
QT_MOC_LITERAL(20, 277, 18), // "fillPreviewFromAdd"
QT_MOC_LITERAL(21, 296, 17), // "fillFramesFromNew"
QT_MOC_LITERAL(22, 314, 18), // "fillFramesFromOpen"
QT_MOC_LITERAL(23, 333, 17), // "fillFramesFromAdd"
QT_MOC_LITERAL(24, 351, 24), // "fillFramesFromDeleteLast"
QT_MOC_LITERAL(25, 376, 23), // "fillFramesFromDeleteEnd"
QT_MOC_LITERAL(26, 400, 20), // "fillFramesFromDelete"
QT_MOC_LITERAL(27, 421, 25), // "fillFramesFromFillOrPaste"
QT_MOC_LITERAL(28, 447, 14), // "addFrameButton"
QT_MOC_LITERAL(29, 462, 17), // "frameDeleteButton"
QT_MOC_LITERAL(30, 480, 9), // "nextFrame"
QT_MOC_LITERAL(31, 490, 13), // "previousFrame"
QT_MOC_LITERAL(32, 504, 8), // "slowDown"
QT_MOC_LITERAL(33, 513, 7), // "speedUp"
QT_MOC_LITERAL(34, 521, 5), // "pause"
QT_MOC_LITERAL(35, 527, 4), // "play"
QT_MOC_LITERAL(36, 532, 17), // "scrollCanvasRight"
QT_MOC_LITERAL(37, 550, 16), // "scrollCanvasLeft"
QT_MOC_LITERAL(38, 567, 16), // "scrollCanvasDown"
QT_MOC_LITERAL(39, 584, 14), // "scrollCanvasUp"
QT_MOC_LITERAL(40, 599, 11), // "changeFalse"
QT_MOC_LITERAL(41, 611, 14), // "projectStarted"
QT_MOC_LITERAL(42, 626, 9), // "beenSaved"
QT_MOC_LITERAL(43, 636, 17), // "selectionReleased"
QT_MOC_LITERAL(44, 654, 8), // "deselect"
QT_MOC_LITERAL(45, 663, 12), // "setSelecting"
QT_MOC_LITERAL(46, 676, 13), // "drawSelecting"
QT_MOC_LITERAL(47, 690, 10), // "toggleGrid"
QT_MOC_LITERAL(48, 701, 8), // "fileOpen"
QT_MOC_LITERAL(49, 710, 19), // "std::vector<Sprite>"
QT_MOC_LITERAL(50, 730, 18), // "pasteFromClipboard"
QT_MOC_LITERAL(51, 749, 15), // "copyToClipboard"
QT_MOC_LITERAL(52, 765, 6), // "zoomIn"
QT_MOC_LITERAL(53, 772, 7), // "zoomOut"
QT_MOC_LITERAL(54, 780, 13), // "fillSelection"
QT_MOC_LITERAL(55, 794, 19), // "receivePrimaryColor"
QT_MOC_LITERAL(56, 814, 21), // "receiveSecondaryColor"
QT_MOC_LITERAL(57, 836, 15) // "rotateSelection"

    },
    "Model\0updateCanvas\0\0timerFire\0"
    "refreshScrollButtonsSignal\0"
    "refreshZoomButtonsSignal\0sendGridSwitch\0"
    "updateCurrent\0updatePrevious\0updateNext\0"
    "createNewFile\0updateCanvasSize\0"
    "fillCanvas\0changeFrame\0draw\0erase\0"
    "updatePreview\0fillPreviewFromOpenAndNew\0"
    "PixelCanvas*\0fillPreviewFromChange\0"
    "fillPreviewFromAdd\0fillFramesFromNew\0"
    "fillFramesFromOpen\0fillFramesFromAdd\0"
    "fillFramesFromDeleteLast\0"
    "fillFramesFromDeleteEnd\0fillFramesFromDelete\0"
    "fillFramesFromFillOrPaste\0addFrameButton\0"
    "frameDeleteButton\0nextFrame\0previousFrame\0"
    "slowDown\0speedUp\0pause\0play\0"
    "scrollCanvasRight\0scrollCanvasLeft\0"
    "scrollCanvasDown\0scrollCanvasUp\0"
    "changeFalse\0projectStarted\0beenSaved\0"
    "selectionReleased\0deselect\0setSelecting\0"
    "drawSelecting\0toggleGrid\0fileOpen\0"
    "std::vector<Sprite>\0pasteFromClipboard\0"
    "copyToClipboard\0zoomIn\0zoomOut\0"
    "fillSelection\0receivePrimaryColor\0"
    "receiveSecondaryColor\0rotateSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Model[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  284,    2, 0x06 /* Public */,
       3,    1,  287,    2, 0x06 /* Public */,
       4,    0,  290,    2, 0x06 /* Public */,
       5,    1,  291,    2, 0x06 /* Public */,
       6,    1,  294,    2, 0x06 /* Public */,
       7,    1,  297,    2, 0x06 /* Public */,
       8,    1,  300,    2, 0x06 /* Public */,
       9,    1,  303,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,  306,    2, 0x0a /* Public */,
      11,    2,  311,    2, 0x0a /* Public */,
      12,    0,  316,    2, 0x0a /* Public */,
      13,    1,  317,    2, 0x0a /* Public */,
      14,    4,  320,    2, 0x0a /* Public */,
      15,    3,  329,    2, 0x0a /* Public */,
      16,    0,  336,    2, 0x0a /* Public */,
      17,    2,  337,    2, 0x0a /* Public */,
      19,    1,  342,    2, 0x0a /* Public */,
      20,    0,  345,    2, 0x0a /* Public */,
      21,    2,  346,    2, 0x0a /* Public */,
      22,    3,  351,    2, 0x0a /* Public */,
      23,    3,  358,    2, 0x0a /* Public */,
      24,    1,  365,    2, 0x0a /* Public */,
      25,    2,  368,    2, 0x0a /* Public */,
      26,    3,  373,    2, 0x0a /* Public */,
      27,    0,  380,    2, 0x0a /* Public */,
      28,    0,  381,    2, 0x0a /* Public */,
      29,    0,  382,    2, 0x0a /* Public */,
      30,    0,  383,    2, 0x0a /* Public */,
      31,    0,  384,    2, 0x0a /* Public */,
      32,    0,  385,    2, 0x0a /* Public */,
      33,    0,  386,    2, 0x0a /* Public */,
      34,    0,  387,    2, 0x0a /* Public */,
      35,    0,  388,    2, 0x0a /* Public */,
      36,    0,  389,    2, 0x0a /* Public */,
      37,    0,  390,    2, 0x0a /* Public */,
      38,    0,  391,    2, 0x0a /* Public */,
      39,    0,  392,    2, 0x0a /* Public */,
      40,    0,  393,    2, 0x0a /* Public */,
      41,    0,  394,    2, 0x0a /* Public */,
      42,    0,  395,    2, 0x0a /* Public */,
      43,    4,  396,    2, 0x0a /* Public */,
      44,    0,  405,    2, 0x0a /* Public */,
      45,    1,  406,    2, 0x0a /* Public */,
      46,    4,  409,    2, 0x0a /* Public */,
      47,    1,  418,    2, 0x0a /* Public */,
      48,    1,  421,    2, 0x0a /* Public */,
      50,    0,  424,    2, 0x0a /* Public */,
      51,    0,  425,    2, 0x0a /* Public */,
      52,    0,  426,    2, 0x0a /* Public */,
      53,    0,  427,    2, 0x0a /* Public */,
      54,    0,  428,    2, 0x0a /* Public */,
      55,    1,  429,    2, 0x0a /* Public */,
      56,    1,  432,    2, 0x0a /* Public */,
      57,    3,  435,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QColor, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18, 0x80000000 | 18,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18, 0x80000000 | 18,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,    2,    2,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18, 0x80000000 | 18,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 49,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,

       0        // eod
};

void Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Model *_t = static_cast<Model *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateCanvas((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 1: _t->timerFire((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 2: _t->refreshScrollButtonsSignal(); break;
        case 3: _t->refreshZoomButtonsSignal((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->sendGridSwitch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->updateCurrent((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 6: _t->updatePrevious((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 7: _t->updateNext((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 8: _t->createNewFile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->updateCanvasSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->fillCanvas(); break;
        case 11: _t->changeFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->draw((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 13: _t->erase((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->updatePreview(); break;
        case 15: _t->fillPreviewFromOpenAndNew((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< PixelCanvas*(*)>(_a[2]))); break;
        case 16: _t->fillPreviewFromChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->fillPreviewFromAdd(); break;
        case 18: _t->fillFramesFromNew((*reinterpret_cast< PixelCanvas*(*)>(_a[1])),(*reinterpret_cast< PixelCanvas*(*)>(_a[2]))); break;
        case 19: _t->fillFramesFromOpen((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< PixelCanvas*(*)>(_a[2])),(*reinterpret_cast< PixelCanvas*(*)>(_a[3]))); break;
        case 20: _t->fillFramesFromAdd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< PixelCanvas*(*)>(_a[2])),(*reinterpret_cast< PixelCanvas*(*)>(_a[3]))); break;
        case 21: _t->fillFramesFromDeleteLast((*reinterpret_cast< PixelCanvas*(*)>(_a[1]))); break;
        case 22: _t->fillFramesFromDeleteEnd((*reinterpret_cast< PixelCanvas*(*)>(_a[1])),(*reinterpret_cast< PixelCanvas*(*)>(_a[2]))); break;
        case 23: _t->fillFramesFromDelete((*reinterpret_cast< PixelCanvas*(*)>(_a[1])),(*reinterpret_cast< PixelCanvas*(*)>(_a[2])),(*reinterpret_cast< PixelCanvas*(*)>(_a[3]))); break;
        case 24: _t->fillFramesFromFillOrPaste(); break;
        case 25: _t->addFrameButton(); break;
        case 26: _t->frameDeleteButton(); break;
        case 27: _t->nextFrame(); break;
        case 28: _t->previousFrame(); break;
        case 29: _t->slowDown(); break;
        case 30: _t->speedUp(); break;
        case 31: _t->pause(); break;
        case 32: _t->play(); break;
        case 33: _t->scrollCanvasRight(); break;
        case 34: _t->scrollCanvasLeft(); break;
        case 35: _t->scrollCanvasDown(); break;
        case 36: _t->scrollCanvasUp(); break;
        case 37: _t->changeFalse(); break;
        case 38: _t->projectStarted(); break;
        case 39: _t->beenSaved(); break;
        case 40: _t->selectionReleased((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 41: _t->deselect(); break;
        case 42: _t->setSelecting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->drawSelecting((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 44: _t->toggleGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->fileOpen((*reinterpret_cast< std::vector<Sprite>(*)>(_a[1]))); break;
        case 46: _t->pasteFromClipboard(); break;
        case 47: _t->copyToClipboard(); break;
        case 48: _t->zoomIn(); break;
        case 49: _t->zoomOut(); break;
        case 50: _t->fillSelection(); break;
        case 51: _t->receivePrimaryColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 52: _t->receiveSecondaryColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 53: _t->rotateSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Model::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::updateCanvas)) {
                *result = 0;
            }
        }
        {
            typedef void (Model::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::timerFire)) {
                *result = 1;
            }
        }
        {
            typedef void (Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::refreshScrollButtonsSignal)) {
                *result = 2;
            }
        }
        {
            typedef void (Model::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::refreshZoomButtonsSignal)) {
                *result = 3;
            }
        }
        {
            typedef void (Model::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::sendGridSwitch)) {
                *result = 4;
            }
        }
        {
            typedef void (Model::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::updateCurrent)) {
                *result = 5;
            }
        }
        {
            typedef void (Model::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::updatePrevious)) {
                *result = 6;
            }
        }
        {
            typedef void (Model::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::updateNext)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject Model::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Model.data,
      qt_meta_data_Model,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Model::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Model.stringdata0))
        return static_cast<void*>(const_cast< Model*>(this));
    return QObject::qt_metacast(_clname);
}

int Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void Model::updateCanvas(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Model::timerFire(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Model::refreshScrollButtonsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Model::refreshZoomButtonsSignal(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Model::sendGridSwitch(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Model::updateCurrent(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Model::updatePrevious(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Model::updateNext(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE

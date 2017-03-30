/****************************************************************************
** Meta object code from reading C++ file 'sprizzite.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cs3505-a7-sprite-editor-segfault/sprizzite.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sprizzite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Sprizzite_t {
    QByteArrayData data[67];
    char stringdata0[984];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sprizzite_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sprizzite_t qt_meta_stringdata_Sprizzite = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Sprizzite"
QT_MOC_LITERAL(1, 10, 8), // "fileLoad"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 19), // "std::vector<Sprite>"
QT_MOC_LITERAL(4, 40, 6), // "Frames"
QT_MOC_LITERAL(5, 47, 12), // "canvasResize"
QT_MOC_LITERAL(6, 60, 1), // "w"
QT_MOC_LITERAL(7, 62, 1), // "h"
QT_MOC_LITERAL(8, 64, 12), // "setSelecting"
QT_MOC_LITERAL(9, 77, 13), // "sendSelection"
QT_MOC_LITERAL(10, 91, 8), // "deselect"
QT_MOC_LITERAL(11, 100, 13), // "drawSelecting"
QT_MOC_LITERAL(12, 114, 17), // "scrollRightPushed"
QT_MOC_LITERAL(13, 132, 16), // "scrollLeftPushed"
QT_MOC_LITERAL(14, 149, 14), // "scrollUpPushed"
QT_MOC_LITERAL(15, 164, 16), // "scrollDownPushed"
QT_MOC_LITERAL(16, 181, 12), // "promptSignal"
QT_MOC_LITERAL(17, 194, 7), // "changed"
QT_MOC_LITERAL(18, 202, 5), // "saved"
QT_MOC_LITERAL(19, 208, 13), // "startFromOpen"
QT_MOC_LITERAL(20, 222, 8), // "addFrame"
QT_MOC_LITERAL(21, 231, 11), // "removeFrame"
QT_MOC_LITERAL(22, 243, 9), // "frameNext"
QT_MOC_LITERAL(23, 253, 9), // "lastFrame"
QT_MOC_LITERAL(24, 263, 16), // "sendPrimaryColor"
QT_MOC_LITERAL(25, 280, 18), // "sendSecondaryColor"
QT_MOC_LITERAL(26, 299, 10), // "sendRotate"
QT_MOC_LITERAL(27, 310, 10), // "OpenDialog"
QT_MOC_LITERAL(28, 321, 10), // "saveSprite"
QT_MOC_LITERAL(29, 332, 9), // "exportGif"
QT_MOC_LITERAL(30, 342, 10), // "closeEvent"
QT_MOC_LITERAL(31, 353, 12), // "QCloseEvent*"
QT_MOC_LITERAL(32, 366, 20), // "refreshScrollButtons"
QT_MOC_LITERAL(33, 387, 18), // "refreshZoomButtons"
QT_MOC_LITERAL(34, 406, 9), // "checkGrid"
QT_MOC_LITERAL(35, 416, 17), // "on_Color1_clicked"
QT_MOC_LITERAL(36, 434, 17), // "on_Color2_clicked"
QT_MOC_LITERAL(37, 452, 14), // "newFrameWindow"
QT_MOC_LITERAL(38, 467, 9), // "nextFrame"
QT_MOC_LITERAL(39, 477, 13), // "previousFrame"
QT_MOC_LITERAL(40, 491, 12), // "deleteFrames"
QT_MOC_LITERAL(41, 504, 11), // "deleteFrame"
QT_MOC_LITERAL(42, 516, 6), // "prompt"
QT_MOC_LITERAL(43, 523, 12), // "openFileHelp"
QT_MOC_LITERAL(44, 536, 12), // "openEditHelp"
QT_MOC_LITERAL(45, 549, 12), // "openViewHelp"
QT_MOC_LITERAL(46, 562, 13), // "openToolsHelp"
QT_MOC_LITERAL(47, 576, 19), // "openColorPickerHelp"
QT_MOC_LITERAL(48, 596, 14), // "openFramesHelp"
QT_MOC_LITERAL(49, 611, 15), // "openHotkeysHelp"
QT_MOC_LITERAL(50, 627, 21), // "on_drawButton_clicked"
QT_MOC_LITERAL(51, 649, 22), // "on_eraseButton_clicked"
QT_MOC_LITERAL(52, 672, 22), // "on_mousebutton_clicked"
QT_MOC_LITERAL(53, 695, 21), // "on_fillButton_clicked"
QT_MOC_LITERAL(54, 717, 23), // "on_rotateButton_clicked"
QT_MOC_LITERAL(55, 741, 22), // "on_pasteButton_clicked"
QT_MOC_LITERAL(56, 764, 21), // "on_copyButton_clicked"
QT_MOC_LITERAL(57, 786, 24), // "on_zoomOutButton_clicked"
QT_MOC_LITERAL(58, 811, 23), // "on_zoomInButton_clicked"
QT_MOC_LITERAL(59, 835, 20), // "on_RGBA_R_textEdited"
QT_MOC_LITERAL(60, 856, 4), // "arg1"
QT_MOC_LITERAL(61, 861, 20), // "on_RGBA_G_textEdited"
QT_MOC_LITERAL(62, 882, 20), // "on_RGBA_B_textEdited"
QT_MOC_LITERAL(63, 903, 24), // "on_slider_r_valueChanged"
QT_MOC_LITERAL(64, 928, 5), // "value"
QT_MOC_LITERAL(65, 934, 24), // "on_slider_g_valueChanged"
QT_MOC_LITERAL(66, 959, 24) // "on_slider_b_valueChanged"

    },
    "Sprizzite\0fileLoad\0\0std::vector<Sprite>\0"
    "Frames\0canvasResize\0w\0h\0setSelecting\0"
    "sendSelection\0deselect\0drawSelecting\0"
    "scrollRightPushed\0scrollLeftPushed\0"
    "scrollUpPushed\0scrollDownPushed\0"
    "promptSignal\0changed\0saved\0startFromOpen\0"
    "addFrame\0removeFrame\0frameNext\0lastFrame\0"
    "sendPrimaryColor\0sendSecondaryColor\0"
    "sendRotate\0OpenDialog\0saveSprite\0"
    "exportGif\0closeEvent\0QCloseEvent*\0"
    "refreshScrollButtons\0refreshZoomButtons\0"
    "checkGrid\0on_Color1_clicked\0"
    "on_Color2_clicked\0newFrameWindow\0"
    "nextFrame\0previousFrame\0deleteFrames\0"
    "deleteFrame\0prompt\0openFileHelp\0"
    "openEditHelp\0openViewHelp\0openToolsHelp\0"
    "openColorPickerHelp\0openFramesHelp\0"
    "openHotkeysHelp\0on_drawButton_clicked\0"
    "on_eraseButton_clicked\0on_mousebutton_clicked\0"
    "on_fillButton_clicked\0on_rotateButton_clicked\0"
    "on_pasteButton_clicked\0on_copyButton_clicked\0"
    "on_zoomOutButton_clicked\0"
    "on_zoomInButton_clicked\0on_RGBA_R_textEdited\0"
    "arg1\0on_RGBA_G_textEdited\0"
    "on_RGBA_B_textEdited\0on_slider_r_valueChanged\0"
    "value\0on_slider_g_valueChanged\0"
    "on_slider_b_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sprizzite[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  304,    2, 0x06 /* Public */,
       5,    2,  307,    2, 0x06 /* Public */,
       8,    1,  312,    2, 0x06 /* Public */,
       9,    4,  315,    2, 0x06 /* Public */,
      10,    0,  324,    2, 0x06 /* Public */,
      11,    4,  325,    2, 0x06 /* Public */,
      12,    0,  334,    2, 0x06 /* Public */,
      13,    0,  335,    2, 0x06 /* Public */,
      14,    0,  336,    2, 0x06 /* Public */,
      15,    0,  337,    2, 0x06 /* Public */,
      16,    0,  338,    2, 0x06 /* Public */,
      17,    0,  339,    2, 0x06 /* Public */,
      18,    0,  340,    2, 0x06 /* Public */,
      19,    0,  341,    2, 0x06 /* Public */,
      20,    0,  342,    2, 0x06 /* Public */,
      21,    0,  343,    2, 0x06 /* Public */,
      22,    0,  344,    2, 0x06 /* Public */,
      23,    0,  345,    2, 0x06 /* Public */,
      24,    1,  346,    2, 0x06 /* Public */,
      25,    1,  349,    2, 0x06 /* Public */,
      26,    3,  352,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  359,    2, 0x0a /* Public */,
      28,    0,  360,    2, 0x0a /* Public */,
      29,    0,  361,    2, 0x0a /* Public */,
      30,    1,  362,    2, 0x0a /* Public */,
      32,    0,  365,    2, 0x0a /* Public */,
      33,    1,  366,    2, 0x0a /* Public */,
      34,    1,  369,    2, 0x0a /* Public */,
      35,    0,  372,    2, 0x08 /* Private */,
      36,    0,  373,    2, 0x08 /* Private */,
      37,    0,  374,    2, 0x08 /* Private */,
      38,    0,  375,    2, 0x08 /* Private */,
      39,    0,  376,    2, 0x08 /* Private */,
      40,    0,  377,    2, 0x08 /* Private */,
      41,    0,  378,    2, 0x08 /* Private */,
      42,    0,  379,    2, 0x08 /* Private */,
      43,    0,  380,    2, 0x08 /* Private */,
      44,    0,  381,    2, 0x08 /* Private */,
      45,    0,  382,    2, 0x08 /* Private */,
      46,    0,  383,    2, 0x08 /* Private */,
      47,    0,  384,    2, 0x08 /* Private */,
      48,    0,  385,    2, 0x08 /* Private */,
      49,    0,  386,    2, 0x08 /* Private */,
      50,    0,  387,    2, 0x08 /* Private */,
      51,    0,  388,    2, 0x08 /* Private */,
      52,    0,  389,    2, 0x08 /* Private */,
      53,    0,  390,    2, 0x08 /* Private */,
      54,    0,  391,    2, 0x08 /* Private */,
      55,    0,  392,    2, 0x08 /* Private */,
      56,    0,  393,    2, 0x08 /* Private */,
      57,    0,  394,    2, 0x08 /* Private */,
      58,    0,  395,    2, 0x08 /* Private */,
      59,    1,  396,    2, 0x08 /* Private */,
      61,    1,  399,    2, 0x08 /* Private */,
      62,    1,  402,    2, 0x08 /* Private */,
      63,    1,  405,    2, 0x08 /* Private */,
      65,    1,  408,    2, 0x08 /* Private */,
      66,    1,  411,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
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
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   60,
    QMetaType::Void, QMetaType::QString,   60,
    QMetaType::Void, QMetaType::QString,   60,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void, QMetaType::Int,   64,

       0        // eod
};

void Sprizzite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Sprizzite *_t = static_cast<Sprizzite *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileLoad((*reinterpret_cast< std::vector<Sprite>(*)>(_a[1]))); break;
        case 1: _t->canvasResize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setSelecting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sendSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->deselect(); break;
        case 5: _t->drawSelecting((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->scrollRightPushed(); break;
        case 7: _t->scrollLeftPushed(); break;
        case 8: _t->scrollUpPushed(); break;
        case 9: _t->scrollDownPushed(); break;
        case 10: _t->promptSignal(); break;
        case 11: _t->changed(); break;
        case 12: _t->saved(); break;
        case 13: _t->startFromOpen(); break;
        case 14: _t->addFrame(); break;
        case 15: _t->removeFrame(); break;
        case 16: _t->frameNext(); break;
        case 17: _t->lastFrame(); break;
        case 18: _t->sendPrimaryColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 19: _t->sendSecondaryColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 20: _t->sendRotate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 21: _t->OpenDialog(); break;
        case 22: _t->saveSprite(); break;
        case 23: _t->exportGif(); break;
        case 24: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 25: _t->refreshScrollButtons(); break;
        case 26: _t->refreshZoomButtons((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 27: _t->checkGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->on_Color1_clicked(); break;
        case 29: _t->on_Color2_clicked(); break;
        case 30: _t->newFrameWindow(); break;
        case 31: _t->nextFrame(); break;
        case 32: _t->previousFrame(); break;
        case 33: _t->deleteFrames(); break;
        case 34: _t->deleteFrame(); break;
        case 35: _t->prompt(); break;
        case 36: _t->openFileHelp(); break;
        case 37: _t->openEditHelp(); break;
        case 38: _t->openViewHelp(); break;
        case 39: _t->openToolsHelp(); break;
        case 40: _t->openColorPickerHelp(); break;
        case 41: _t->openFramesHelp(); break;
        case 42: _t->openHotkeysHelp(); break;
        case 43: _t->on_drawButton_clicked(); break;
        case 44: _t->on_eraseButton_clicked(); break;
        case 45: _t->on_mousebutton_clicked(); break;
        case 46: _t->on_fillButton_clicked(); break;
        case 47: _t->on_rotateButton_clicked(); break;
        case 48: _t->on_pasteButton_clicked(); break;
        case 49: _t->on_copyButton_clicked(); break;
        case 50: _t->on_zoomOutButton_clicked(); break;
        case 51: _t->on_zoomInButton_clicked(); break;
        case 52: _t->on_RGBA_R_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 53: _t->on_RGBA_G_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 54: _t->on_RGBA_B_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 55: _t->on_slider_r_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->on_slider_g_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->on_slider_b_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Sprizzite::*_t)(std::vector<Sprite> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::fileLoad)) {
                *result = 0;
            }
        }
        {
            typedef void (Sprizzite::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::canvasResize)) {
                *result = 1;
            }
        }
        {
            typedef void (Sprizzite::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::setSelecting)) {
                *result = 2;
            }
        }
        {
            typedef void (Sprizzite::*_t)(int , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::sendSelection)) {
                *result = 3;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::deselect)) {
                *result = 4;
            }
        }
        {
            typedef void (Sprizzite::*_t)(int , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::drawSelecting)) {
                *result = 5;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::scrollRightPushed)) {
                *result = 6;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::scrollLeftPushed)) {
                *result = 7;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::scrollUpPushed)) {
                *result = 8;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::scrollDownPushed)) {
                *result = 9;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::promptSignal)) {
                *result = 10;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::changed)) {
                *result = 11;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::saved)) {
                *result = 12;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::startFromOpen)) {
                *result = 13;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::addFrame)) {
                *result = 14;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::removeFrame)) {
                *result = 15;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::frameNext)) {
                *result = 16;
            }
        }
        {
            typedef void (Sprizzite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::lastFrame)) {
                *result = 17;
            }
        }
        {
            typedef void (Sprizzite::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::sendPrimaryColor)) {
                *result = 18;
            }
        }
        {
            typedef void (Sprizzite::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::sendSecondaryColor)) {
                *result = 19;
            }
        }
        {
            typedef void (Sprizzite::*_t)(int , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sprizzite::sendRotate)) {
                *result = 20;
            }
        }
    }
}

const QMetaObject Sprizzite::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Sprizzite.data,
      qt_meta_data_Sprizzite,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Sprizzite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sprizzite::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Sprizzite.stringdata0))
        return static_cast<void*>(const_cast< Sprizzite*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Sprizzite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 58;
    }
    return _id;
}

// SIGNAL 0
void Sprizzite::fileLoad(std::vector<Sprite> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Sprizzite::canvasResize(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Sprizzite::setSelecting(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Sprizzite::sendSelection(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Sprizzite::deselect()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Sprizzite::drawSelecting(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Sprizzite::scrollRightPushed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Sprizzite::scrollLeftPushed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void Sprizzite::scrollUpPushed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void Sprizzite::scrollDownPushed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void Sprizzite::promptSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void Sprizzite::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void Sprizzite::saved()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void Sprizzite::startFromOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void Sprizzite::addFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void Sprizzite::removeFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void Sprizzite::frameNext()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void Sprizzite::lastFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void Sprizzite::sendPrimaryColor(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Sprizzite::sendSecondaryColor(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Sprizzite::sendRotate(int _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_END_MOC_NAMESPACE

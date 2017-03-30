/********************************************************************************
** Form generated from reading UI file 'sprizzite.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRIZZITE_H
#define UI_SPRIZZITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sprizzite
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExport;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionPreview;
    QAction *actionFrame_Window;
    QAction *actionTools;
    QAction *actionHelpFile;
    QAction *actionHelpTools;
    QAction *actionHelpExporting;
    QAction *actionHelpEdit;
    QAction *actionHelpColor;
    QAction *actionHelpFrames;
    QAction *actionHelpView;
    QAction *actionHelpHotkeys;
    QAction *actionDisplay_Grid;
    QAction *actionAdd_Frame;
    QAction *actionDelete_Frame;
    QAction *actionNext_Frame;
    QAction *actionPrevious_Frame;
    QAction *actionIncrease_Speed;
    QAction *actionDecrease_Speed;
    QAction *actionPause;
    QAction *actionPlay;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *ToolBox;
    QPushButton *drawButton;
    QPushButton *zoomOut;
    QPushButton *zoomIn;
    QPushButton *copyButton;
    QPushButton *pasteButton;
    QPushButton *rotateButton;
    QPushButton *fillButton;
    QPushButton *eraseButton;
    QPushButton *mousebutton;
    QFrame *canvasControlsFrame;
    QGridLayout *gridLayout_3;
    QPushButton *downScroll;
    QLabel *Canvas;
    QPushButton *leftScroll;
    QPushButton *upScroll;
    QPushButton *rightScroll;
    QFrame *Frame_Pen_Display;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QSlider *slider_r;
    QSlider *slider_g;
    QSlider *slider_b;
    QLineEdit *RGBA_R;
    QLineEdit *RGBA_G;
    QLineEdit *RGBA_B;
    QLabel *label_r;
    QLabel *label_g;
    QLabel *label_b;
    QPushButton *Color1;
    QPushButton *Color2;
    QLabel *label;
    QSlider *pensize_slider;
    QScrollArea *Frames;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QPushButton *nextButton;
    QLabel *frameCurrent;
    QPushButton *addFrame;
    QSpacerItem *verticalSpacer;
    QPushButton *previousButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *deleteFrame;
    QLabel *currentFrame;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *previousFrame;
    QLabel *nextFrame;
    QFrame *Preview;
    QGridLayout *gridLayout_2;
    QLabel *previewFrame;
    QPushButton *pauseButton;
    QPushButton *playButton;
    QPushButton *slowerButton;
    QPushButton *fasterButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFrames;
    QMenu *menuPreview;
    QMenu *menuView;
    QMenu *menuHelp;

    void setupUi(QMainWindow *Sprizzite)
    {
        if (Sprizzite->objectName().isEmpty())
            Sprizzite->setObjectName(QStringLiteral("Sprizzite"));
        Sprizzite->resize(907, 640);
        Sprizzite->setStyleSheet(QLatin1String("\n"
"QToolTip\n"
"{\n"
"    border: 1px solid #76797C;\n"
"    background-color: rgb(90, 102, 117);;\n"
"    color: red;\n"
"    padding: 5px;\n"
"    opacity: 200;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: #31363b;\n"
"    selection-background-color:#3daee9;\n"
"    selection-color: #eff0f1;\n"
"    background-clip: border;\n"
"    border-image: none;\n"
"    border: 0px transparent black;\n"
"    outline: 0;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: #3daee9;\n"
"    color: #eff0f1;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: #3daee9;\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"    spacing: 5px;\n"
"    outline: none;\n"
"    color: #eff0f1;\n"
"    margin-bottom: 2px;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"    color: #76797C;\n"
"}\n"
"\n"
"QCheckBox::indicator,\n"
"QGroupBox::indicator\n"
"{\n"
"    width: 18px;\n"
"    height: 18px;\n"
"}\n"
"QGroupBox::indicator\n"
"{\n"
"    margin-left: 2px;\n"
"}\n"
"\n"
"\n"
"\n"
"QRadio"
                        "Button\n"
"{\n"
"    spacing: 5px;\n"
"    outline: none;\n"
"    color: #eff0f1;\n"
"    margin-bottom: 2px;\n"
"}\n"
"\n"
"QRadioButton:disabled\n"
"{\n"
"    color: #76797C;\n"
"}\n"
"QRadioButton::indicator\n"
"{\n"
"    width: 21px;\n"
"    height: 21px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QMenuBar\n"
"{\n"
"    background-color: #31363b;\n"
"    color: #eff0f1;\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #76797C;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    border: 1px solid #76797C;\n"
"    background-color: #3daee9;\n"
"    color: #eff0f1;\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #76797C;\n"
"    color: #eff0f1;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QMenu::icon\n"
"{\n"
"    margin: 5px;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 5px 30px 5px 30px;\n"
"    margin-left: 5px;\n"
"    border: 1px solid tra"
                        "nsparent; /* reserve space for selection border */\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #eff0f1;\n"
"}\n"
"\n"
"QMenu::separator {\n"
"    height: 2px;\n"
"    background: lightblue;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QMenu::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #454545;\n"
"    background-color: #31363b;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    alternate-background-color: #31363b;\n"
"    color: #eff0f1;\n"
"    border: 1px solid 3A3939;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QWidget:focus, QMenuBar:focus\n"
"{\n"
"    border: 1px solid #3daee9;\n"
"}\n"
"\n"
"QTabWidget:focus, QCheckBox:focus, QRadioButton:focus, QSlider:focus\n"
"{\n"
"    border: none;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: #232629;\n"
"    padding: 5px;\n"
"    border-style: solid;\n"
"    border: 1px solid #76797C;\n"
"    border-radius: 2px;\n"
"    color: #eff0f1;\n"
"}\n"
""
                        "\n"
"QGroupBox {\n"
"    border:1px solid #76797C;\n"
"    border-radius: 2px;\n"
"    margin-top: 20px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 10px;\n"
"}\n"
"\n"
"QAbstractScrollArea\n"
"{\n"
"    border-radius: 2px;\n"
"    border: 1px solid #76797C;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QScrollBar:horizontal\n"
"{\n"
"    height: 15px;\n"
"    margin: 3px 15px 3px 15px;\n"
"    border: 1px transparent #2A2929;\n"
"    border-radius: 4px;\n"
"    background-color: #2A2929;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"    background-color: #605F5F;\n"
"    min-width: 5px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"\n"
"\n"
"QScrollBar::up-arrow:horizontal, QScrollBar::down-arrow:horizontal\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"    background: none;\n"
""
                        "}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background-color: #2A2929;\n"
"    width: 15px;\n"
"    margin: 15px 3px 15px 3px;\n"
"    border: 1px transparent #2A2929;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background-color: #605F5F;\n"
"    min-height: 5px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #232629;\n"
"    color: #eff0f1;\n"
"    border: 1px solid #76797C;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #232629;;\n"
"    color: #eff0f1;\n"
"    border-radius: 2px;\n"
"    border: 1px solid #76797C;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #76797C;\n"
"    color: #eff0f1;\n"
"    padding: 5px;\n"
"    border: 1px solid #76797C;\n"
"}\n"
"\n"
"\n"
""
                        "\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: #31363b;\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    spacing: 2px;\n"
"    border: 1px dashed #76797C;\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: #787876;\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #76797C;\n"
"    spacing: 2px;\n"
"}\n"
"\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 1px;\n"
"    background-color: #76797C;\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"\n"
"QFrame\n"
"{\n"
"    border-radius: 2px;\n"
"    border: 1px solid #76797C;\n"
"}\n"
"\n"
"QFrame[frameShape=\"0\"]\n"
"{\n"
"    border-radius: 2px;\n"
"    border: 1px transparent #76797C;\n"
"}\n"
"\n"
"QStackedWidget\n"
"{\n"
"    border: 1px transparent black;\n"
"}\n"
"\n"
"QToolBar {\n"
"    border: 1px transparent #393838;\n"
"    background: 1px solid #31363b;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushBu"
                        "tton\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: #31363b;\n"
"    border-width: 1px;\n"
"    border-color: #76797C;\n"
"    border-style: solid;\n"
"    padding: 5px;\n"
"    border-radius: 2px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"    background-color: #31363b;\n"
"    border-width: 1px;\n"
"    border-color: #454545;\n"
"    border-style: solid;\n"
"    padding-top: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    border-radius: 2px;\n"
"    color: #454545;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    background-color: #3daee9;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #3daee9;\n"
"    padding-top: -15px;\n"
"    padding-bottom: -17px;\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #3daee9;\n"
"    border-style: solid;\n"
"    border: 1px solid #76797C;\n"
"    border-radius: 2px;\n"
"    padding: 5px;\n"
"    min-width: 75px;\n"
"}\n"
"\n"
"QPushButto"
                        "n:checked{\n"
"    background-color: #76797C;\n"
"    border-color: #6A6969;\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    selection-background-color: #4a4a4a;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    background-color: #232629;\n"
"    border-radius: 2px;\n"
"    border: 1px solid #76797C;\n"
"    selection-background-color: #3daee9;\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 0px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;\n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"\n"
"\n"
"QAbstractSpinBox {\n"
"    padding: 5px;\n"
"    border: 1px solid #76797C;\n"
"    background-color: #232629;\n"
"    color: #eff0f1;\n"
"    border-radius: 2px;\n"
"    min-width: 75px;\n"
"}\n"
"\n"
"QAbstractSpinBox:up-button\n"
"{\n"
"    background-color: t"
                        "ransparent;\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: center right;\n"
"}\n"
"\n"
"QAbstractSpinBox:down-button\n"
"{\n"
"    background-color: transparent;\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: center left;\n"
"}\n"
"\n"
"\n"
"\n"
"/* TOP TABS */\n"
"QTabBar::tab:top {\n"
"    color: #eff0f1;\n"
"    border: 1px solid #76797C;\n"
"    border-bottom: 1px transparent black;\n"
"    background-color: #31363b;\n"
"    padding: 5px;\n"
"    min-width: 50px;\n"
"    border-top-left-radius: 2px;\n"
"    border-top-right-radius: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: #54575B;\n"
"    border: 1px solid #76797C;\n"
"    border-bottom: 1px transparent black;\n"
"    border-top-left-radius: 2px;\n"
"    border-top-right-radius: 2px;    \n"
"}\n"
"\n"
"QTabBar::tab:top:!selected:hover {\n"
"    background-color: #3daee9;\n"
"}\n"
"\n"
"/* BOTTOM TABS */\n"
"QTabBar::tab:bottom {\n"
"    color: #eff0f1;\n"
"    b"
                        "order: 1px solid #76797C;\n"
"    border-top: 1px transparent black;\n"
"    background-color: #31363b;\n"
"    padding: 5px;\n"
"    border-bottom-left-radius: 2px;\n"
"    border-bottom-right-radius: 2px;\n"
"    min-width: 50px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: #54575B;\n"
"    border: 1px solid #76797C;\n"
"    border-top: 1px transparent black;\n"
"    border-bottom-left-radius: 2px;\n"
"    border-bottom-right-radius: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected:hover {\n"
"    background-color: #3daee9;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QLabel\n"
"{\n"
"    border: 0px solid black;\n"
"}\n"
"\n"
"QTabWidget{\n"
"    border: 0px transparent black;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #76797C;\n"
"    padding: 5px;\n"
"    margin: 1px;\n"
"}\n"
"\n"
"QTabBar\n"
"{\n"
"    qproperty-drawBase: 0;\n"
"    left: 5px; /* move to the right by 5px */\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QTabBar:focus\n"
"{"
                        "\n"
"    border: 0px transparent black;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::groove:horizontal {\n"
"    border: 1px solid #565a5e;\n"
"    height: 4px;\n"
"    background: #565a5e;\n"
"    margin: 0px;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: #232629;\n"
"    border: 1px solid #565a5e;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: -8px 0;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid #565a5e;\n"
"    width: 4px;\n"
"    background: #565a5e;\n"
"    margin: 0px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #232629;\n"
"    border: 1px solid #565a5e;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -8px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QToolButton {\n"
"    background-color: transparent;\n"
"    border: 1px transparent #76797C;\n"
"    border-radius: 2px;\n"
"    margin: 3px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""
                        "\n"
"\n"
"\n"
" \n"
"\n"
""));
        actionNew = new QAction(Sprizzite);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(Sprizzite);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(Sprizzite);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExport = new QAction(Sprizzite);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionUndo = new QAction(Sprizzite);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(Sprizzite);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionCopy = new QAction(Sprizzite);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPreview = new QAction(Sprizzite);
        actionPreview->setObjectName(QStringLiteral("actionPreview"));
        actionFrame_Window = new QAction(Sprizzite);
        actionFrame_Window->setObjectName(QStringLiteral("actionFrame_Window"));
        actionTools = new QAction(Sprizzite);
        actionTools->setObjectName(QStringLiteral("actionTools"));
        actionHelpFile = new QAction(Sprizzite);
        actionHelpFile->setObjectName(QStringLiteral("actionHelpFile"));
        actionHelpTools = new QAction(Sprizzite);
        actionHelpTools->setObjectName(QStringLiteral("actionHelpTools"));
        actionHelpExporting = new QAction(Sprizzite);
        actionHelpExporting->setObjectName(QStringLiteral("actionHelpExporting"));
        actionHelpEdit = new QAction(Sprizzite);
        actionHelpEdit->setObjectName(QStringLiteral("actionHelpEdit"));
        actionHelpColor = new QAction(Sprizzite);
        actionHelpColor->setObjectName(QStringLiteral("actionHelpColor"));
        actionHelpFrames = new QAction(Sprizzite);
        actionHelpFrames->setObjectName(QStringLiteral("actionHelpFrames"));
        actionHelpView = new QAction(Sprizzite);
        actionHelpView->setObjectName(QStringLiteral("actionHelpView"));
        actionHelpHotkeys = new QAction(Sprizzite);
        actionHelpHotkeys->setObjectName(QStringLiteral("actionHelpHotkeys"));
        actionDisplay_Grid = new QAction(Sprizzite);
        actionDisplay_Grid->setObjectName(QStringLiteral("actionDisplay_Grid"));
        actionDisplay_Grid->setCheckable(true);
        actionDisplay_Grid->setChecked(false);
        actionAdd_Frame = new QAction(Sprizzite);
        actionAdd_Frame->setObjectName(QStringLiteral("actionAdd_Frame"));
        actionDelete_Frame = new QAction(Sprizzite);
        actionDelete_Frame->setObjectName(QStringLiteral("actionDelete_Frame"));
        actionNext_Frame = new QAction(Sprizzite);
        actionNext_Frame->setObjectName(QStringLiteral("actionNext_Frame"));
        actionPrevious_Frame = new QAction(Sprizzite);
        actionPrevious_Frame->setObjectName(QStringLiteral("actionPrevious_Frame"));
        actionIncrease_Speed = new QAction(Sprizzite);
        actionIncrease_Speed->setObjectName(QStringLiteral("actionIncrease_Speed"));
        actionDecrease_Speed = new QAction(Sprizzite);
        actionDecrease_Speed->setObjectName(QStringLiteral("actionDecrease_Speed"));
        actionPause = new QAction(Sprizzite);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionPlay = new QAction(Sprizzite);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        centralWidget = new QWidget(Sprizzite);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ToolBox = new QGroupBox(centralWidget);
        ToolBox->setObjectName(QStringLiteral("ToolBox"));
        ToolBox->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ToolBox->sizePolicy().hasHeightForWidth());
        ToolBox->setSizePolicy(sizePolicy1);
        ToolBox->setMinimumSize(QSize(100, 573));
        ToolBox->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        ToolBox->setFont(font);
        ToolBox->setFlat(false);
        ToolBox->setCheckable(false);
        drawButton = new QPushButton(ToolBox);
        drawButton->setObjectName(QStringLiteral("drawButton"));
        drawButton->setGeometry(QRect(10, 70, 31, 31));
        drawButton->setStyleSheet(QLatin1String("#drawButton{\n"
"border-image:url(:/buttons/buttons/pencil.png);\n"
"border: 2px #000;\n"
"}"));
        zoomOut = new QPushButton(ToolBox);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setEnabled(false);
        zoomOut->setGeometry(QRect(10, 110, 31, 31));
        zoomOut->setStyleSheet(QLatin1String("#zoomOut{border-image:url(:/buttons/buttons/frameadd.png);\n"
"border: 2px #000;\n"
"}"));
        zoomIn = new QPushButton(ToolBox);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setEnabled(false);
        zoomIn->setGeometry(QRect(60, 110, 31, 31));
        zoomIn->setStyleSheet(QLatin1String("#zoomIn{\n"
"border-image:url(:/buttons/buttons/frameremove.png);\n"
"border: 2px #000;\n"
"}"));
        copyButton = new QPushButton(ToolBox);
        copyButton->setObjectName(QStringLiteral("copyButton"));
        copyButton->setGeometry(QRect(10, 150, 31, 31));
        copyButton->setStyleSheet(QLatin1String("#copyButton{\n"
"border-image:url(:/buttons/buttons/copy.png);\n"
"border: 2px #000;\n"
"}"));
        pasteButton = new QPushButton(ToolBox);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        pasteButton->setGeometry(QRect(60, 150, 31, 31));
        pasteButton->setStyleSheet(QLatin1String("#pasteButton{\n"
"border-image:url(:/buttons/buttons/paste.png);\n"
"border: 2px #000;\n"
"}"));
        rotateButton = new QPushButton(ToolBox);
        rotateButton->setObjectName(QStringLiteral("rotateButton"));
        rotateButton->setGeometry(QRect(10, 190, 31, 31));
        rotateButton->setStyleSheet(QLatin1String("#rotateButton{\n"
"border-image:url(:/buttons/buttons/rotate.png);\n"
"border: 2px #000;\n"
"}"));
        fillButton = new QPushButton(ToolBox);
        fillButton->setObjectName(QStringLiteral("fillButton"));
        fillButton->setGeometry(QRect(60, 190, 31, 31));
        fillButton->setStyleSheet(QLatin1String("#fillButton{\n"
"border-image:url(:/buttons/buttons/fill.png);\n"
"border: 2px #000;\n"
"}"));
        eraseButton = new QPushButton(ToolBox);
        eraseButton->setObjectName(QStringLiteral("eraseButton"));
        eraseButton->setGeometry(QRect(50, 70, 41, 31));
        eraseButton->setFocusPolicy(Qt::WheelFocus);
        eraseButton->setStyleSheet(QLatin1String("#eraseButton{\n"
"border-image:url(:/buttons/buttons/eraser.png);\n"
"border: 2px #000;\n"
"}"));
        mousebutton = new QPushButton(ToolBox);
        mousebutton->setObjectName(QStringLiteral("mousebutton"));
        mousebutton->setGeometry(QRect(10, 30, 31, 31));
        mousebutton->setStyleSheet(QLatin1String("#mousebutton{\n"
"border-image:url(:/buttons/buttons/mouse.png);\n"
"border: 2px #000;\n"
"}"));
        mousebutton->setAutoDefault(true);

        horizontalLayout->addWidget(ToolBox);

        canvasControlsFrame = new QFrame(centralWidget);
        canvasControlsFrame->setObjectName(QStringLiteral("canvasControlsFrame"));
        canvasControlsFrame->setFrameShape(QFrame::StyledPanel);
        canvasControlsFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(canvasControlsFrame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        downScroll = new QPushButton(canvasControlsFrame);
        downScroll->setObjectName(QStringLiteral("downScroll"));
        downScroll->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(downScroll->sizePolicy().hasHeightForWidth());
        downScroll->setSizePolicy(sizePolicy2);
        downScroll->setMaximumSize(QSize(16777215, 25));

        gridLayout_3->addWidget(downScroll, 2, 1, 1, 1);

        Canvas = new QLabel(canvasControlsFrame);
        Canvas->setObjectName(QStringLiteral("Canvas"));
        Canvas->setMinimumSize(QSize(100, 100));
        Canvas->setMaximumSize(QSize(9001, 9001));
        Canvas->setFrameShape(QFrame::Panel);
        Canvas->setFrameShadow(QFrame::Raised);
        Canvas->setLineWidth(1);
        Canvas->setMidLineWidth(3);
        Canvas->setScaledContents(true);
        Canvas->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Canvas, 1, 1, 1, 1);

        leftScroll = new QPushButton(canvasControlsFrame);
        leftScroll->setObjectName(QStringLiteral("leftScroll"));
        leftScroll->setEnabled(false);
        sizePolicy2.setHeightForWidth(leftScroll->sizePolicy().hasHeightForWidth());
        leftScroll->setSizePolicy(sizePolicy2);
        leftScroll->setMaximumSize(QSize(25, 16777215));

        gridLayout_3->addWidget(leftScroll, 1, 0, 1, 1);

        upScroll = new QPushButton(canvasControlsFrame);
        upScroll->setObjectName(QStringLiteral("upScroll"));
        upScroll->setEnabled(false);
        sizePolicy2.setHeightForWidth(upScroll->sizePolicy().hasHeightForWidth());
        upScroll->setSizePolicy(sizePolicy2);
        upScroll->setMaximumSize(QSize(16777215, 25));

        gridLayout_3->addWidget(upScroll, 0, 1, 1, 1);

        rightScroll = new QPushButton(canvasControlsFrame);
        rightScroll->setObjectName(QStringLiteral("rightScroll"));
        rightScroll->setEnabled(false);
        sizePolicy2.setHeightForWidth(rightScroll->sizePolicy().hasHeightForWidth());
        rightScroll->setSizePolicy(sizePolicy2);
        rightScroll->setMaximumSize(QSize(25, 16777215));

        gridLayout_3->addWidget(rightScroll, 1, 2, 1, 1);


        horizontalLayout->addWidget(canvasControlsFrame);

        Frame_Pen_Display = new QFrame(centralWidget);
        Frame_Pen_Display->setObjectName(QStringLiteral("Frame_Pen_Display"));
        Frame_Pen_Display->setMinimumSize(QSize(265, 0));
        Frame_Pen_Display->setMaximumSize(QSize(265, 9001));
        Frame_Pen_Display->setFrameShape(QFrame::StyledPanel);
        Frame_Pen_Display->setFrameShadow(QFrame::Raised);
        Frame_Pen_Display->setLineWidth(0);
        verticalLayout = new QVBoxLayout(Frame_Pen_Display);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Frame_Pen_Display);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(265, 200));
        frame->setMaximumSize(QSize(265, 200));
        frame->setLayoutDirection(Qt::RightToLeft);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        slider_r = new QSlider(frame);
        slider_r->setObjectName(QStringLiteral("slider_r"));
        slider_r->setGeometry(QRect(50, 90, 84, 27));
        slider_r->setLayoutDirection(Qt::LeftToRight);
        slider_r->setMaximum(255);
        slider_r->setOrientation(Qt::Horizontal);
        slider_r->setInvertedAppearance(false);
        slider_r->setTickPosition(QSlider::TicksAbove);
        slider_g = new QSlider(frame);
        slider_g->setObjectName(QStringLiteral("slider_g"));
        slider_g->setGeometry(QRect(50, 120, 84, 27));
        slider_g->setLayoutDirection(Qt::LeftToRight);
        slider_g->setMaximum(255);
        slider_g->setOrientation(Qt::Horizontal);
        slider_g->setTickPosition(QSlider::TicksAbove);
        slider_b = new QSlider(frame);
        slider_b->setObjectName(QStringLiteral("slider_b"));
        slider_b->setGeometry(QRect(50, 160, 84, 27));
        slider_b->setLayoutDirection(Qt::LeftToRight);
        slider_b->setMaximum(255);
        slider_b->setOrientation(Qt::Horizontal);
        slider_b->setTickPosition(QSlider::TicksAbove);
        RGBA_R = new QLineEdit(frame);
        RGBA_R->setObjectName(QStringLiteral("RGBA_R"));
        RGBA_R->setGeometry(QRect(150, 80, 61, 31));
        RGBA_G = new QLineEdit(frame);
        RGBA_G->setObjectName(QStringLiteral("RGBA_G"));
        RGBA_G->setGeometry(QRect(150, 120, 61, 31));
        RGBA_B = new QLineEdit(frame);
        RGBA_B->setObjectName(QStringLiteral("RGBA_B"));
        RGBA_B->setGeometry(QRect(150, 160, 61, 31));
        label_r = new QLabel(frame);
        label_r->setObjectName(QStringLiteral("label_r"));
        label_r->setGeometry(QRect(20, 90, 16, 16));
        label_g = new QLabel(frame);
        label_g->setObjectName(QStringLiteral("label_g"));
        label_g->setGeometry(QRect(20, 130, 16, 16));
        label_b = new QLabel(frame);
        label_b->setObjectName(QStringLiteral("label_b"));
        label_b->setGeometry(QRect(20, 160, 16, 21));
        label_b->setLayoutDirection(Qt::LeftToRight);
        Color1 = new QPushButton(frame);
        Color1->setObjectName(QStringLiteral("Color1"));
        Color1->setGeometry(QRect(20, 20, 40, 40));
        Color2 = new QPushButton(frame);
        Color2->setObjectName(QStringLiteral("Color2"));
        Color2->setGeometry(QRect(40, 40, 40, 40));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 55, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        pensize_slider = new QSlider(frame);
        pensize_slider->setObjectName(QStringLiteral("pensize_slider"));
        pensize_slider->setGeometry(QRect(150, 10, 91, 22));
        pensize_slider->setMinimum(1);
        pensize_slider->setMaximum(10);
        pensize_slider->setPageStep(1);
        pensize_slider->setOrientation(Qt::Horizontal);
        pensize_slider->setInvertedAppearance(true);
        pensize_slider->setInvertedControls(true);
        Color2->raise();
        slider_r->raise();
        slider_g->raise();
        slider_b->raise();
        RGBA_R->raise();
        RGBA_G->raise();
        RGBA_B->raise();
        label_r->raise();
        label_g->raise();
        label_b->raise();
        Color1->raise();
        label->raise();
        pensize_slider->raise();

        verticalLayout->addWidget(frame);

        Frames = new QScrollArea(Frame_Pen_Display);
        Frames->setObjectName(QStringLiteral("Frames"));
        Frames->setMinimumSize(QSize(265, 106));
        Frames->setMaximumSize(QSize(265, 9001));
        Frames->setLayoutDirection(Qt::RightToLeft);
        Frames->setFrameShadow(QFrame::Plain);
        Frames->setLineWidth(2);
        Frames->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Frames->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Frames->setWidgetResizable(true);
        Frames->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(-11, 0, 274, 151));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        nextButton = new QPushButton(scrollAreaWidgetContents);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setMinimumSize(QSize(0, 0));
        nextButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(nextButton, 3, 0, 1, 1);

        frameCurrent = new QLabel(scrollAreaWidgetContents);
        frameCurrent->setObjectName(QStringLiteral("frameCurrent"));
        frameCurrent->setMinimumSize(QSize(0, 0));
        frameCurrent->setMaximumSize(QSize(16777215, 16777215));
        frameCurrent->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(frameCurrent, 3, 2, 1, 1);

        addFrame = new QPushButton(scrollAreaWidgetContents);
        addFrame->setObjectName(QStringLiteral("addFrame"));
        addFrame->setMinimumSize(QSize(0, 0));
        addFrame->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(addFrame, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);

        previousButton = new QPushButton(scrollAreaWidgetContents);
        previousButton->setObjectName(QStringLiteral("previousButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(previousButton->sizePolicy().hasHeightForWidth());
        previousButton->setSizePolicy(sizePolicy3);
        previousButton->setMinimumSize(QSize(0, 0));
        previousButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(previousButton, 3, 8, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        deleteFrame = new QPushButton(scrollAreaWidgetContents);
        deleteFrame->setObjectName(QStringLiteral("deleteFrame"));
        deleteFrame->setMinimumSize(QSize(20, 0));
        deleteFrame->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(deleteFrame, 3, 3, 1, 1);

        currentFrame = new QLabel(scrollAreaWidgetContents);
        currentFrame->setObjectName(QStringLiteral("currentFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(currentFrame->sizePolicy().hasHeightForWidth());
        currentFrame->setSizePolicy(sizePolicy4);
        currentFrame->setMinimumSize(QSize(70, 70));
        currentFrame->setMaximumSize(QSize(16777215, 16777215));
        currentFrame->setLayoutDirection(Qt::RightToLeft);
        currentFrame->setFrameShape(QFrame::Box);
        currentFrame->setScaledContents(true);
        currentFrame->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(currentFrame, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 10, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 9, 1, 1);

        previousFrame = new QLabel(scrollAreaWidgetContents);
        previousFrame->setObjectName(QStringLiteral("previousFrame"));
        sizePolicy4.setHeightForWidth(previousFrame->sizePolicy().hasHeightForWidth());
        previousFrame->setSizePolicy(sizePolicy4);
        previousFrame->setMinimumSize(QSize(55, 55));
        previousFrame->setMaximumSize(QSize(55, 55));
        previousFrame->setLayoutDirection(Qt::LeftToRight);
        previousFrame->setFrameShape(QFrame::Box);
        previousFrame->setScaledContents(true);
        previousFrame->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(previousFrame, 1, 8, 1, 1);

        nextFrame = new QLabel(scrollAreaWidgetContents);
        nextFrame->setObjectName(QStringLiteral("nextFrame"));
        sizePolicy4.setHeightForWidth(nextFrame->sizePolicy().hasHeightForWidth());
        nextFrame->setSizePolicy(sizePolicy4);
        nextFrame->setMinimumSize(QSize(55, 55));
        nextFrame->setMaximumSize(QSize(55, 55));
        nextFrame->setLayoutDirection(Qt::RightToLeft);
        nextFrame->setFrameShape(QFrame::Box);
        nextFrame->setScaledContents(true);
        nextFrame->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nextFrame, 1, 0, 1, 1);

        Frames->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(Frames);

        Preview = new QFrame(Frame_Pen_Display);
        Preview->setObjectName(QStringLiteral("Preview"));
        Preview->setMinimumSize(QSize(265, 293));
        Preview->setMaximumSize(QSize(265, 293));
        Preview->setLayoutDirection(Qt::RightToLeft);
        Preview->setFrameShape(QFrame::StyledPanel);
        Preview->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(Preview);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        previewFrame = new QLabel(Preview);
        previewFrame->setObjectName(QStringLiteral("previewFrame"));
        previewFrame->setMinimumSize(QSize(245, 245));
        previewFrame->setMaximumSize(QSize(245, 245));
        previewFrame->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"    color: #000000;\n"
"    background-color: #2A2A2A;margin-bottom:10px;}"));
        previewFrame->setScaledContents(true);
        previewFrame->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(previewFrame, 0, 0, 1, 4);

        pauseButton = new QPushButton(Preview);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setLayoutDirection(Qt::RightToLeft);
        pauseButton->setStyleSheet(QLatin1String("background-image: url(:/buttons/buttons/pause.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: center;"));

        gridLayout_2->addWidget(pauseButton, 1, 1, 1, 1);

        playButton = new QPushButton(Preview);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setLayoutDirection(Qt::LeftToRight);
        playButton->setStyleSheet(QLatin1String("background-image: url(:/buttons/buttons/play.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: center;"));

        gridLayout_2->addWidget(playButton, 1, 2, 1, 1);

        slowerButton = new QPushButton(Preview);
        slowerButton->setObjectName(QStringLiteral("slowerButton"));
        slowerButton->setLayoutDirection(Qt::LeftToRight);
        slowerButton->setAutoFillBackground(false);
        slowerButton->setStyleSheet(QLatin1String("background-image: url(:/buttons/buttons/rewind.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: center;"));

        gridLayout_2->addWidget(slowerButton, 1, 3, 1, 1);

        fasterButton = new QPushButton(Preview);
        fasterButton->setObjectName(QStringLiteral("fasterButton"));
        fasterButton->setLayoutDirection(Qt::LeftToRight);
        fasterButton->setStyleSheet(QLatin1String("background-image: url(:/buttons/buttons/fastForward.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: left;"));

        gridLayout_2->addWidget(fasterButton, 1, 0, 1, 1);


        verticalLayout->addWidget(Preview);


        horizontalLayout->addWidget(Frame_Pen_Display);

        Sprizzite->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Sprizzite);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 907, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuFrames = new QMenu(menuEdit);
        menuFrames->setObjectName(QStringLiteral("menuFrames"));
        menuPreview = new QMenu(menuEdit);
        menuPreview->setObjectName(QStringLiteral("menuPreview"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        Sprizzite->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExport);
        menuEdit->addAction(menuFrames->menuAction());
        menuEdit->addAction(menuPreview->menuAction());
        menuFrames->addAction(actionAdd_Frame);
        menuFrames->addAction(actionDelete_Frame);
        menuFrames->addAction(actionNext_Frame);
        menuFrames->addAction(actionPrevious_Frame);
        menuPreview->addAction(actionIncrease_Speed);
        menuPreview->addAction(actionDecrease_Speed);
        menuPreview->addAction(actionPause);
        menuPreview->addAction(actionPlay);
        menuView->addAction(actionDisplay_Grid);
        menuHelp->addAction(actionHelpFile);
        menuHelp->addAction(actionHelpEdit);
        menuHelp->addAction(actionHelpView);
        menuHelp->addAction(actionHelpTools);
        menuHelp->addAction(actionHelpColor);
        menuHelp->addAction(actionHelpFrames);
        menuHelp->addAction(actionHelpHotkeys);

        retranslateUi(Sprizzite);

        drawButton->setDefault(false);
        mousebutton->setDefault(true);


        QMetaObject::connectSlotsByName(Sprizzite);
    } // setupUi

    void retranslateUi(QMainWindow *Sprizzite)
    {
        Sprizzite->setWindowTitle(QApplication::translate("Sprizzite", "Sprizzite", 0));
        actionNew->setText(QApplication::translate("Sprizzite", "New", 0));
        actionOpen->setText(QApplication::translate("Sprizzite", "Open", 0));
        actionSave->setText(QApplication::translate("Sprizzite", "Save", 0));
        actionExport->setText(QApplication::translate("Sprizzite", "Export", 0));
        actionUndo->setText(QApplication::translate("Sprizzite", "Undo", 0));
        actionRedo->setText(QApplication::translate("Sprizzite", "Redo", 0));
        actionCopy->setText(QApplication::translate("Sprizzite", "Copy", 0));
        actionPreview->setText(QApplication::translate("Sprizzite", "Preview Window", 0));
        actionFrame_Window->setText(QApplication::translate("Sprizzite", "Frame", 0));
        actionTools->setText(QApplication::translate("Sprizzite", "Tools", 0));
        actionHelpFile->setText(QApplication::translate("Sprizzite", "File", 0));
        actionHelpTools->setText(QApplication::translate("Sprizzite", "Tools", 0));
        actionHelpExporting->setText(QApplication::translate("Sprizzite", "Exporting", 0));
        actionHelpEdit->setText(QApplication::translate("Sprizzite", "Edit", 0));
        actionHelpColor->setText(QApplication::translate("Sprizzite", "Color Picker", 0));
        actionHelpFrames->setText(QApplication::translate("Sprizzite", "Frames/Preview", 0));
        actionHelpView->setText(QApplication::translate("Sprizzite", "View", 0));
        actionHelpHotkeys->setText(QApplication::translate("Sprizzite", "Hotkey List", 0));
        actionDisplay_Grid->setText(QApplication::translate("Sprizzite", "Display Grid", 0));
        actionAdd_Frame->setText(QApplication::translate("Sprizzite", "Add Frame", 0));
        actionDelete_Frame->setText(QApplication::translate("Sprizzite", "Delete Frame", 0));
        actionNext_Frame->setText(QApplication::translate("Sprizzite", "Next Frame", 0));
        actionPrevious_Frame->setText(QApplication::translate("Sprizzite", "Previous Frame", 0));
        actionIncrease_Speed->setText(QApplication::translate("Sprizzite", "Increase Speed", 0));
        actionDecrease_Speed->setText(QApplication::translate("Sprizzite", "Decrease Speed", 0));
        actionPause->setText(QApplication::translate("Sprizzite", "Pause", 0));
        actionPlay->setText(QApplication::translate("Sprizzite", "Play", 0));
        ToolBox->setTitle(QApplication::translate("Sprizzite", "Tools", 0));
#ifndef QT_NO_TOOLTIP
        drawButton->setToolTip(QApplication::translate("Sprizzite", "Draw", 0));
#endif // QT_NO_TOOLTIP
        drawButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        zoomOut->setToolTip(QApplication::translate("Sprizzite", "Zoom In", 0));
#endif // QT_NO_TOOLTIP
        zoomOut->setText(QString());
#ifndef QT_NO_TOOLTIP
        zoomIn->setToolTip(QApplication::translate("Sprizzite", "Zoom Out", 0));
#endif // QT_NO_TOOLTIP
        zoomIn->setText(QString());
#ifndef QT_NO_TOOLTIP
        copyButton->setToolTip(QApplication::translate("Sprizzite", "Copy Selection", 0));
#endif // QT_NO_TOOLTIP
        copyButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("Sprizzite", "Paste from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        rotateButton->setToolTip(QApplication::translate("Sprizzite", "Rotate selection", 0));
#endif // QT_NO_TOOLTIP
        rotateButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        fillButton->setToolTip(QApplication::translate("Sprizzite", "Fill selection", 0));
#endif // QT_NO_TOOLTIP
        fillButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        eraseButton->setToolTip(QApplication::translate("Sprizzite", "Erase", 0));
#endif // QT_NO_TOOLTIP
        eraseButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mousebutton->setToolTip(QApplication::translate("Sprizzite", "Draw", 0));
#endif // QT_NO_TOOLTIP
        mousebutton->setText(QString());
        downScroll->setText(QApplication::translate("Sprizzite", "V", 0));
        Canvas->setText(QString());
        leftScroll->setText(QApplication::translate("Sprizzite", "<", 0));
        upScroll->setText(QApplication::translate("Sprizzite", "^", 0));
        rightScroll->setText(QApplication::translate("Sprizzite", ">", 0));
        RGBA_R->setText(QApplication::translate("Sprizzite", "0", 0));
        RGBA_G->setText(QApplication::translate("Sprizzite", "0", 0));
        RGBA_B->setText(QApplication::translate("Sprizzite", "0", 0));
        label_r->setText(QApplication::translate("Sprizzite", "R", 0));
        label_g->setText(QApplication::translate("Sprizzite", "G", 0));
        label_b->setText(QApplication::translate("Sprizzite", "B", 0));
        Color1->setText(QString());
        Color2->setText(QString());
        label->setText(QApplication::translate("Sprizzite", "Pen Size:", 0));
        nextButton->setText(QApplication::translate("Sprizzite", "Next", 0));
        frameCurrent->setText(QString());
        addFrame->setText(QApplication::translate("Sprizzite", "+", 0));
        previousButton->setText(QApplication::translate("Sprizzite", "Previous", 0));
        deleteFrame->setText(QApplication::translate("Sprizzite", "-", 0));
        currentFrame->setText(QString());
        previousFrame->setText(QString());
        nextFrame->setText(QString());
        previewFrame->setText(QString());
        pauseButton->setText(QString());
        playButton->setText(QString());
        slowerButton->setText(QString());
        fasterButton->setText(QString());
        menuFile->setTitle(QApplication::translate("Sprizzite", "File", 0));
        menuEdit->setTitle(QApplication::translate("Sprizzite", "Edit", 0));
        menuFrames->setTitle(QApplication::translate("Sprizzite", "Frames", 0));
        menuPreview->setTitle(QApplication::translate("Sprizzite", "Preview", 0));
        menuView->setTitle(QApplication::translate("Sprizzite", "View", 0));
        menuHelp->setTitle(QApplication::translate("Sprizzite", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class Sprizzite: public Ui_Sprizzite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRIZZITE_H

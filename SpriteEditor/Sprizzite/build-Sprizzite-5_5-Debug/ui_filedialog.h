/********************************************************************************
** Form generated from reading UI file 'filedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEDIALOG_H
#define UI_FILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileDialog
{
public:
    QPushButton *OkayButton;
    QPushButton *CancelButton;
    QLabel *NewFileLabel;
    QLabel *NewFileLabel_2;
    QSpinBox *WidthBox;
    QSpinBox *HeightBox;

    void setupUi(QWidget *FileDialog)
    {
        if (FileDialog->objectName().isEmpty())
            FileDialog->setObjectName(QStringLiteral("FileDialog"));
        FileDialog->resize(233, 132);
        FileDialog->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"    color: #000000;\n"
"    background-color: #3daee9;\n"
"}\n"
"\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #000000;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #A9A9A9, stop: 0.1 #A9A9A9, stop: 0.5 #A9A9A9, stop: 0.9 #A9A9A9, stop: 1 #A9A9A9);\n"
"    border-width: 1px;\n"
"    border-color: #00CED1;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
""));
        OkayButton = new QPushButton(FileDialog);
        OkayButton->setObjectName(QStringLiteral("OkayButton"));
        OkayButton->setGeometry(QRect(30, 90, 75, 23));
        QFont font;
        OkayButton->setFont(font);
        CancelButton = new QPushButton(FileDialog);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setGeometry(QRect(120, 90, 75, 23));
        CancelButton->setFont(font);
        NewFileLabel = new QLabel(FileDialog);
        NewFileLabel->setObjectName(QStringLiteral("NewFileLabel"));
        NewFileLabel->setGeometry(QRect(30, 20, 91, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        NewFileLabel->setFont(font1);
        NewFileLabel_2 = new QLabel(FileDialog);
        NewFileLabel_2->setObjectName(QStringLiteral("NewFileLabel_2"));
        NewFileLabel_2->setGeometry(QRect(30, 50, 91, 16));
        NewFileLabel_2->setFont(font1);
        WidthBox = new QSpinBox(FileDialog);
        WidthBox->setObjectName(QStringLiteral("WidthBox"));
        WidthBox->setGeometry(QRect(140, 20, 51, 22));
        WidthBox->setFont(font1);
        WidthBox->setMinimum(1);
        WidthBox->setMaximum(1000);
        WidthBox->setValue(32);
        HeightBox = new QSpinBox(FileDialog);
        HeightBox->setObjectName(QStringLiteral("HeightBox"));
        HeightBox->setGeometry(QRect(140, 50, 51, 22));
        HeightBox->setFont(font1);
        HeightBox->setMinimum(1);
        HeightBox->setMaximum(1000);
        HeightBox->setValue(32);

        retranslateUi(FileDialog);

        QMetaObject::connectSlotsByName(FileDialog);
    } // setupUi

    void retranslateUi(QWidget *FileDialog)
    {
        FileDialog->setWindowTitle(QApplication::translate("FileDialog", "Sprizzite", 0));
        OkayButton->setText(QApplication::translate("FileDialog", "OK", 0));
        CancelButton->setText(QApplication::translate("FileDialog", "Cancel", 0));
        NewFileLabel->setText(QApplication::translate("FileDialog", "Width in Pixels:", 0));
        NewFileLabel_2->setText(QApplication::translate("FileDialog", "Height in Pixels:", 0));
    } // retranslateUi

};

namespace Ui {
    class FileDialog: public Ui_FileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'AddLocalModelWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDLOCALMODELWINDOW_H
#define UI_ADDLOCALMODELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *confirmBtn;
    QPushButton *resetBtn;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *nameLabel;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *discoverYearLabel;
    QComboBox *discoverYear;
    QLabel *yearLabel;
    QLineEdit *year;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QComboBox *category;
    QLabel *label_10;
    QComboBox *level;
    QHBoxLayout *horizontalLayout_4;
    QLabel *sizeLabel;
    QLabel *lengthLabel;
    QLineEdit *length;
    QLabel *widthLabel;
    QLineEdit *width;
    QLabel *heightLabel;
    QLineEdit *height;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QComboBox *comboBox_4;
    QLabel *label_13;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_14;
    QComboBox *comboBox_5;
    QLabel *label_15;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QLineEdit *place;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *modelPath;
    QPushButton *choosePathBtn;
    QLabel *label_11;
    QTextEdit *description;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(732, 665);
        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(240, 590, 201, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        confirmBtn = new QPushButton(horizontalLayoutWidget);
        confirmBtn->setObjectName(QStringLiteral("confirmBtn"));

        horizontalLayout->addWidget(confirmBtn);

        resetBtn = new QPushButton(horizontalLayoutWidget);
        resetBtn->setObjectName(QStringLiteral("resetBtn"));

        horizontalLayout->addWidget(resetBtn);

        formLayoutWidget = new QWidget(Dialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 711, 551));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_6->addWidget(comboBox);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_6->addWidget(lineEdit);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_6);

        nameLabel = new QLabel(formLayoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nameLabel);

        name = new QLineEdit(formLayoutWidget);
        name->setObjectName(QStringLiteral("name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        discoverYearLabel = new QLabel(formLayoutWidget);
        discoverYearLabel->setObjectName(QStringLiteral("discoverYearLabel"));

        horizontalLayout_2->addWidget(discoverYearLabel);

        discoverYear = new QComboBox(formLayoutWidget);
        discoverYear->setObjectName(QStringLiteral("discoverYear"));

        horizontalLayout_2->addWidget(discoverYear);

        yearLabel = new QLabel(formLayoutWidget);
        yearLabel->setObjectName(QStringLiteral("yearLabel"));

        horizontalLayout_2->addWidget(yearLabel);

        year = new QLineEdit(formLayoutWidget);
        year->setObjectName(QStringLiteral("year"));

        horizontalLayout_2->addWidget(year);


        formLayout->setLayout(2, QFormLayout::SpanningRole, horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);

        category = new QComboBox(formLayoutWidget);
        category->setObjectName(QStringLiteral("category"));

        horizontalLayout_5->addWidget(category);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setLineWidth(1);

        horizontalLayout_5->addWidget(label_10);

        level = new QComboBox(formLayoutWidget);
        level->setObjectName(QStringLiteral("level"));

        horizontalLayout_5->addWidget(level);


        formLayout->setLayout(4, QFormLayout::SpanningRole, horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sizeLabel = new QLabel(formLayoutWidget);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));

        horizontalLayout_4->addWidget(sizeLabel);

        lengthLabel = new QLabel(formLayoutWidget);
        lengthLabel->setObjectName(QStringLiteral("lengthLabel"));

        horizontalLayout_4->addWidget(lengthLabel);

        length = new QLineEdit(formLayoutWidget);
        length->setObjectName(QStringLiteral("length"));

        horizontalLayout_4->addWidget(length);

        widthLabel = new QLabel(formLayoutWidget);
        widthLabel->setObjectName(QStringLiteral("widthLabel"));

        horizontalLayout_4->addWidget(widthLabel);

        width = new QLineEdit(formLayoutWidget);
        width->setObjectName(QStringLiteral("width"));

        horizontalLayout_4->addWidget(width);

        heightLabel = new QLabel(formLayoutWidget);
        heightLabel->setObjectName(QStringLiteral("heightLabel"));

        horizontalLayout_4->addWidget(heightLabel);

        height = new QLineEdit(formLayoutWidget);
        height->setObjectName(QStringLiteral("height"));

        horizontalLayout_4->addWidget(height);


        formLayout->setLayout(5, QFormLayout::SpanningRole, horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        comboBox_2 = new QComboBox(formLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_7->addWidget(comboBox_2);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_7->addWidget(label_4);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_7->addWidget(lineEdit_2);


        formLayout->setLayout(6, QFormLayout::SpanningRole, horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_8->addWidget(label_5);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_8->addWidget(lineEdit_3);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        comboBox_3 = new QComboBox(formLayoutWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_8->addWidget(comboBox_3);


        formLayout->setLayout(7, QFormLayout::SpanningRole, horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);

        comboBox_4 = new QComboBox(formLayoutWidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_9->addWidget(comboBox_4);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_9->addWidget(label_13);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_9->addWidget(lineEdit_4);


        formLayout->setLayout(8, QFormLayout::SpanningRole, horizontalLayout_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_3->addWidget(label_14);

        comboBox_5 = new QComboBox(formLayoutWidget);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        horizontalLayout_3->addWidget(comboBox_5);

        label_15 = new QLabel(formLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_3->addWidget(label_15);

        lineEdit_5 = new QLineEdit(formLayoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_3->addWidget(lineEdit_5);


        formLayout->setLayout(9, QFormLayout::SpanningRole, horizontalLayout_3);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_8);

        place = new QLineEdit(formLayoutWidget);
        place->setObjectName(QStringLiteral("place"));

        formLayout->setWidget(10, QFormLayout::FieldRole, place);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_10->addWidget(label_12);

        modelPath = new QLineEdit(formLayoutWidget);
        modelPath->setObjectName(QStringLiteral("modelPath"));
        modelPath->setEnabled(true);
        modelPath->setReadOnly(true);

        horizontalLayout_10->addWidget(modelPath);

        choosePathBtn = new QPushButton(formLayoutWidget);
        choosePathBtn->setObjectName(QStringLiteral("choosePathBtn"));

        horizontalLayout_10->addWidget(choosePathBtn);


        formLayout->setLayout(13, QFormLayout::SpanningRole, horizontalLayout_10);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(15, QFormLayout::LabelRole, label_11);

        description = new QTextEdit(formLayoutWidget);
        description->setObjectName(QStringLiteral("description"));

        formLayout->setWidget(15, QFormLayout::FieldRole, description);

        horizontalLayoutWidget->raise();
        formLayoutWidget->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\345\275\225\345\205\245\346\250\241\345\236\213", 0));
        confirmBtn->setText(QApplication::translate("Dialog", "\345\275\225\345\205\245", 0));
        resetBtn->setText(QApplication::translate("Dialog", "\351\207\215\347\275\256", 0));
        label->setText(QApplication::translate("Dialog", "*\347\274\226\345\217\267\347\261\273\345\236\213\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\350\227\217\345\223\201\346\200\273\347\231\273\350\256\260\345\217\267", 0)
         << QApplication::translate("Dialog", "\350\276\205\345\212\251\350\264\246\345\217\267", 0)
         << QApplication::translate("Dialog", "\347\264\242\344\271\246\345\217\267", 0)
         << QApplication::translate("Dialog", "\346\241\243\346\241\210\347\274\226\345\217\267", 0)
         << QApplication::translate("Dialog", "\345\233\272\345\256\232\350\265\204\344\272\247\347\231\273\350\256\260\345\217\267", 0)
         << QApplication::translate("Dialog", "\345\207\272\345\234\237(\346\260\264)\347\231\273\350\256\260\345\217\267", 0)
         << QApplication::translate("Dialog", "\345\205\266\344\273\226\347\274\226\345\217\267", 0)
        );
        label_2->setText(QApplication::translate("Dialog", "*\350\227\217\345\223\201\347\274\226\345\217\267\357\274\232", 0));
        nameLabel->setText(QApplication::translate("Dialog", "*\346\226\207\347\211\251\345\220\215\347\247\260\357\274\232", 0));
        discoverYearLabel->setText(QApplication::translate("Dialog", "*\345\207\272\345\234\237\345\271\264\344\273\243\357\274\232", 0));
        discoverYear->clear();
        discoverYear->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "1990", 0)
         << QApplication::translate("Dialog", "1991", 0)
         << QApplication::translate("Dialog", "1992", 0)
         << QApplication::translate("Dialog", "\346\234\252\347\237\245", 0)
        );
        yearLabel->setText(QApplication::translate("Dialog", "*\346\226\207\347\211\251\345\271\264\344\273\243\357\274\232", 0));
        label_9->setText(QApplication::translate("Dialog", "*\346\226\207\347\211\251\347\261\273\345\210\253\357\274\232", 0));
        category->clear();
        category->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\347\216\211\347\237\263\345\231\250\343\200\201\345\256\235\347\237\263", 0)
         << QApplication::translate("Dialog", "\351\231\266\345\231\250", 0)
         << QApplication::translate("Dialog", "\347\223\267\345\231\250", 0)
         << QApplication::translate("Dialog", "\351\223\234\345\231\250", 0)
         << QApplication::translate("Dialog", "\351\207\221\351\223\266\345\231\250", 0)
         << QApplication::translate("Dialog", "\351\223\201\345\231\250\343\200\201\345\205\266\344\273\226\351\207\221\345\261\236\345\231\250", 0)
         << QApplication::translate("Dialog", "\346\274\206\345\231\250", 0)
         << QApplication::translate("Dialog", "\351\233\225\345\241\221\343\200\201\351\200\240\345\203\217", 0)
         << QApplication::translate("Dialog", "\347\237\263\345\231\250\343\200\201\347\237\263\345\210\273\343\200\201\347\240\226\347\223\246", 0)
         << QApplication::translate("Dialog", "\344\271\246\346\263\225\343\200\201\347\273\230\347\224\273", 0)
         << QApplication::translate("Dialog", "\346\226\207\345\205\267", 0)
         << QApplication::translate("Dialog", "\347\224\262\351\252\250", 0)
         << QApplication::translate("Dialog", "\347\216\272\345\215\260\347\254\246\347\211\214", 0)
         << QApplication::translate("Dialog", "\347\211\231\351\252\250\350\247\222\345\231\250", 0)
         << QApplication::translate("Dialog", "\347\253\271\346\234\250\351\233\225", 0)
         << QApplication::translate("Dialog", "\345\256\266\345\205\267", 0)
         << QApplication::translate("Dialog", "\347\217\220\347\220\205\345\231\250", 0)
         << QApplication::translate("Dialog", "\347\273\207\347\273\243", 0)
         << QApplication::translate("Dialog", "\345\217\244\347\261\215\345\233\276\344\271\246", 0)
         << QApplication::translate("Dialog", "\347\242\221\345\270\226\346\213\223\346\234\254", 0)
         << QApplication::translate("Dialog", "\346\255\246\345\231\250", 0)
         << QApplication::translate("Dialog", "\351\202\256\345\223\201", 0)
         << QApplication::translate("Dialog", "\346\226\207\344\273\266\343\200\201\345\256\243\344\274\240\345\223\201", 0)
         << QApplication::translate("Dialog", "\346\241\243\346\241\210\346\226\207\344\271\246", 0)
         << QApplication::translate("Dialog", "\344\271\220\345\231\250\343\200\201\346\263\225\345\231\250", 0)
         << QApplication::translate("Dialog", "\351\222\261\345\270\201", 0)
         << QApplication::translate("Dialog", "\345\220\215\344\272\272\351\201\227\347\211\251", 0)
         << QApplication::translate("Dialog", "\347\216\273\347\222\203\345\231\250", 0)
         << QApplication::translate("Dialog", "\347\232\256\351\235\251", 0)
         << QApplication::translate("Dialog", "\351\237\263\345\203\217\345\210\266\345\223\201", 0)
         << QApplication::translate("Dialog", "\347\245\250\346\215\256", 0)
         << QApplication::translate("Dialog", "\344\272\244\351\200\232\343\200\201\350\277\220\350\276\223\345\267\245\345\205\267", 0)
         << QApplication::translate("Dialog", "\345\272\246\351\207\217\350\241\241\345\231\250", 0)
         << QApplication::translate("Dialog", "\346\240\207\346\234\254\343\200\201\345\214\226\347\237\263", 0)
         << QApplication::translate("Dialog", "\345\205\266\344\273\226", 0)
        );
        label_10->setText(QApplication::translate("Dialog", "*\346\226\207\347\211\251\347\272\247\345\210\253\357\274\232", 0));
        level->clear();
        level->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\344\270\200\347\272\247", 0)
         << QApplication::translate("Dialog", "\344\272\214\347\272\247", 0)
         << QApplication::translate("Dialog", "\344\270\211\347\272\247", 0)
         << QApplication::translate("Dialog", "\344\270\200\350\210\254", 0)
         << QApplication::translate("Dialog", "\346\234\252\345\256\232\347\272\247", 0)
        );
        sizeLabel->setText(QApplication::translate("Dialog", "\346\226\207\347\211\251\345\260\272\345\257\270\357\274\232", 0));
        lengthLabel->setText(QApplication::translate("Dialog", "\351\225\277\357\274\232", 0));
        widthLabel->setText(QApplication::translate("Dialog", "\345\256\275\357\274\232", 0));
        heightLabel->setText(QApplication::translate("Dialog", "\351\253\230\357\274\232", 0));
        label_3->setText(QApplication::translate("Dialog", "\350\264\250\351\207\217\350\214\203\345\233\264\357\274\232", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "<0.01 kg", 0)
         << QApplication::translate("Dialog", "0.01-1 kg", 0)
         << QApplication::translate("Dialog", "1-50 kg", 0)
         << QApplication::translate("Dialog", "50-100kg", 0)
         << QApplication::translate("Dialog", "100-1000 kg", 0)
         << QApplication::translate("Dialog", ">1000 kg", 0)
        );
        label_4->setText(QApplication::translate("Dialog", "\345\205\267\344\275\223\350\264\250\351\207\217\357\274\232", 0));
        label_5->setText(QApplication::translate("Dialog", "\345\256\236\351\231\205\346\225\260\351\207\217\357\274\232", 0));
        label_6->setText(QApplication::translate("Dialog", "\344\277\235\345\255\230\347\212\266\346\200\201\357\274\232", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\347\212\266\346\200\201\347\250\263\345\256\232\357\274\214\344\270\215\351\234\200\344\277\256\345\244\215", 0)
         << QApplication::translate("Dialog", "\351\203\250\345\210\206\346\215\237\350\205\220\357\274\214\351\234\200\350\246\201\344\277\256\345\244\215", 0)
         << QApplication::translate("Dialog", "\350\205\220\350\232\200\346\215\237\346\257\201\344\270\245\351\207\215\357\274\214\346\200\245\351\234\200\344\277\256\345\244\215", 0)
         << QApplication::translate("Dialog", "\345\267\262\344\277\256\345\244\215", 0)
        );
        label_7->setText(QApplication::translate("Dialog", "\346\226\207\347\211\251\346\235\245\346\272\220\357\274\232", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\345\276\201\351\233\206\350\264\255\344\271\260", 0)
         << QApplication::translate("Dialog", "\346\216\245\345\217\227\346\215\220\350\265\240", 0)
         << QApplication::translate("Dialog", "\344\276\235\346\263\225\344\272\244\346\215\242", 0)
         << QApplication::translate("Dialog", "\346\213\250\344\272\244", 0)
         << QApplication::translate("Dialog", "\347\247\273\344\272\244", 0)
         << QApplication::translate("Dialog", "\346\227\247\350\227\217", 0)
         << QApplication::translate("Dialog", "\345\217\221\346\216\230", 0)
         << QApplication::translate("Dialog", "\351\207\207\351\233\206", 0)
         << QApplication::translate("Dialog", "\346\213\243\351\200\211", 0)
         << QApplication::translate("Dialog", "\345\205\266\344\273\226", 0)
        );
        label_13->setText(QApplication::translate("Dialog", "\345\205\267\344\275\223\346\235\245\346\272\220\357\274\232", 0));
        label_14->setText(QApplication::translate("Dialog", "\345\256\214\346\256\213\347\250\213\345\272\246\357\274\232", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\345\256\214\346\225\264", 0)
         << QApplication::translate("Dialog", "\345\237\272\346\234\254\345\256\214\346\225\264", 0)
         << QApplication::translate("Dialog", "\346\256\213\347\274\272", 0)
         << QApplication::translate("Dialog", "\344\270\245\351\207\215\346\256\213\347\274\272(\345\220\253\347\274\272\345\244\261\351\203\250\344\273\266)", 0)
        );
        label_15->setText(QApplication::translate("Dialog", "\345\256\214\346\256\213\347\212\266\345\206\265\357\274\232", 0));
        label_8->setText(QApplication::translate("Dialog", "\345\207\272\345\234\237\345\234\260\357\274\232", 0));
        label_12->setText(QApplication::translate("Dialog", "\346\250\241\345\236\213\344\275\215\347\275\256\357\274\232", 0));
        choosePathBtn->setText(QApplication::translate("Dialog", "\351\200\211\346\213\251", 0));
        label_11->setText(QApplication::translate("Dialog", "\346\226\207\347\211\251\350\257\246\346\203\205\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDLOCALMODELWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'QueryModelWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYMODELWINDOW_H
#define UI_QUERYMODELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *relicname_label;
    QTextEdit *name_text;
    QPushButton *QueryButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *reliclevel_label;
    QComboBox *level_comboBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *discovyear_label;
    QComboBox *discov_comboBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *relicnum_lable;
    QTextEdit *num_text;
    QHBoxLayout *horizontalLayout_8;
    QLabel *year_label;
    QTextEdit *year_text;
    QHBoxLayout *horizontalLayout;
    QLabel *reliccatlog_lable;
    QComboBox *catlog_comboBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ResetButton;
    QTableWidget *QueryResult;
    QListWidget *listWidget;

    void setupUi(QDialog *QueryWindow)
    {
        if (QueryWindow->objectName().isEmpty())
            QueryWindow->setObjectName(QStringLiteral("QueryWindow"));
        QueryWindow->resize(814, 689);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QueryWindow->sizePolicy().hasHeightForWidth());
        QueryWindow->setSizePolicy(sizePolicy);
        QueryWindow->setMinimumSize(QSize(0, 25));
        gridLayoutWidget = new QWidget(QueryWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 10, 801, 123));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        relicname_label = new QLabel(gridLayoutWidget);
        relicname_label->setObjectName(QStringLiteral("relicname_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(relicname_label->sizePolicy().hasHeightForWidth());
        relicname_label->setSizePolicy(sizePolicy1);
        relicname_label->setMinimumSize(QSize(0, 25));

        horizontalLayout_4->addWidget(relicname_label);

        name_text = new QTextEdit(gridLayoutWidget);
        name_text->setObjectName(QStringLiteral("name_text"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(name_text->sizePolicy().hasHeightForWidth());
        name_text->setSizePolicy(sizePolicy2);
        name_text->setMinimumSize(QSize(0, 20));
        name_text->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(name_text);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        QueryButton = new QPushButton(gridLayoutWidget);
        QueryButton->setObjectName(QStringLiteral("QueryButton"));

        gridLayout->addWidget(QueryButton, 2, 3, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        reliclevel_label = new QLabel(gridLayoutWidget);
        reliclevel_label->setObjectName(QStringLiteral("reliclevel_label"));

        horizontalLayout_5->addWidget(reliclevel_label);

        level_comboBox = new QComboBox(gridLayoutWidget);
        level_comboBox->setObjectName(QStringLiteral("level_comboBox"));

        horizontalLayout_5->addWidget(level_comboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_5, 1, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        discovyear_label = new QLabel(gridLayoutWidget);
        discovyear_label->setObjectName(QStringLiteral("discovyear_label"));

        horizontalLayout_6->addWidget(discovyear_label);

        discov_comboBox = new QComboBox(gridLayoutWidget);
        discov_comboBox->setObjectName(QStringLiteral("discov_comboBox"));

        horizontalLayout_6->addWidget(discov_comboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        relicnum_lable = new QLabel(gridLayoutWidget);
        relicnum_lable->setObjectName(QStringLiteral("relicnum_lable"));
        sizePolicy1.setHeightForWidth(relicnum_lable->sizePolicy().hasHeightForWidth());
        relicnum_lable->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(relicnum_lable);

        num_text = new QTextEdit(gridLayoutWidget);
        num_text->setObjectName(QStringLiteral("num_text"));
        sizePolicy2.setHeightForWidth(num_text->sizePolicy().hasHeightForWidth());
        num_text->setSizePolicy(sizePolicy2);
        num_text->setMinimumSize(QSize(0, 20));
        num_text->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(num_text);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        year_label = new QLabel(gridLayoutWidget);
        year_label->setObjectName(QStringLiteral("year_label"));

        horizontalLayout_8->addWidget(year_label);

        year_text = new QTextEdit(gridLayoutWidget);
        year_text->setObjectName(QStringLiteral("year_text"));
        sizePolicy2.setHeightForWidth(year_text->sizePolicy().hasHeightForWidth());
        year_text->setSizePolicy(sizePolicy2);
        year_text->setMinimumSize(QSize(0, 20));
        year_text->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_8->addWidget(year_text);


        gridLayout->addLayout(horizontalLayout_8, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        reliccatlog_lable = new QLabel(gridLayoutWidget);
        reliccatlog_lable->setObjectName(QStringLiteral("reliccatlog_lable"));
        reliccatlog_lable->setIndent(0);

        horizontalLayout->addWidget(reliccatlog_lable);

        catlog_comboBox = new QComboBox(gridLayoutWidget);
        catlog_comboBox->setObjectName(QStringLiteral("catlog_comboBox"));

        horizontalLayout->addWidget(catlog_comboBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        ResetButton = new QPushButton(gridLayoutWidget);
        ResetButton->setObjectName(QStringLiteral("ResetButton"));

        gridLayout->addWidget(ResetButton, 1, 3, 1, 1);

        QueryResult = new QTableWidget(QueryWindow);
        QueryResult->setObjectName(QStringLiteral("QueryResult"));
        QueryResult->setGeometry(QRect(-5, 151, 811, 531));
        listWidget = new QListWidget(QueryWindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 600, 811, 81));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

        retranslateUi(QueryWindow);

        QMetaObject::connectSlotsByName(QueryWindow);
    } // setupUi

    void retranslateUi(QDialog *QueryWindow)
    {
        QueryWindow->setWindowTitle(QApplication::translate("QueryWindow", "Dialog", 0));
        relicname_label->setText(QApplication::translate("QueryWindow", "\346\226\207\347\211\251\345\220\215\347\247\260\357\274\232", 0));
        QueryButton->setText(QApplication::translate("QueryWindow", "\346\237\245\350\257\242", 0));
        reliclevel_label->setText(QApplication::translate("QueryWindow", "\346\226\207\347\211\251\347\272\247\345\210\253\357\274\232", 0));
        level_comboBox->clear();
        level_comboBox->insertItems(0, QStringList()
         << QApplication::translate("QueryWindow", "\344\270\200\347\272\247", 0)
         << QApplication::translate("QueryWindow", "\344\272\214\347\272\247", 0)
         << QApplication::translate("QueryWindow", "\344\270\211\347\272\247", 0)
         << QApplication::translate("QueryWindow", "\344\270\200\350\210\254", 0)
         << QApplication::translate("QueryWindow", "\346\234\252\345\256\232\347\272\247", 0)
        );
        discovyear_label->setText(QApplication::translate("QueryWindow", "\345\207\272\345\234\237\345\271\264\344\273\243\357\274\232", 0));
        discov_comboBox->clear();
        discov_comboBox->insertItems(0, QStringList()
         << QApplication::translate("QueryWindow", "1990", 0)
         << QApplication::translate("QueryWindow", "1991", 0)
         << QApplication::translate("QueryWindow", "1992", 0)
         << QApplication::translate("QueryWindow", "\345\205\266\345\256\203", 0)
        );
        relicnum_lable->setText(QApplication::translate("QueryWindow", "\346\226\207\347\211\251\347\274\226\345\217\267\357\274\232", 0));
        year_label->setText(QApplication::translate("QueryWindow", "\346\226\207\347\211\251\345\271\264\344\273\243\357\274\232", 0));
        reliccatlog_lable->setText(QApplication::translate("QueryWindow", "\346\226\207\347\211\251\347\261\273\345\210\253\357\274\232", 0));
        catlog_comboBox->clear();
        catlog_comboBox->insertItems(0, QStringList()
         << QApplication::translate("QueryWindow", "\351\231\266\345\231\250", 0)
         << QApplication::translate("QueryWindow", "\351\207\221\351\223\266\345\231\250", 0)
         << QApplication::translate("QueryWindow", "\346\274\206\345\231\250", 0)
         << QApplication::translate("QueryWindow", "\351\233\225\345\241\221\343\200\201\351\200\240\345\203\217", 0)
         << QApplication::translate("QueryWindow", "\347\237\263\345\231\250\343\200\201\347\237\263\345\210\273\343\200\201\347\240\226\347\223\246", 0)
         << QApplication::translate("QueryWindow", "\344\271\246\346\263\225\347\273\230\347\224\273", 0)
         << QApplication::translate("QueryWindow", "\347\223\267\345\231\250", 0)
         << QApplication::translate("QueryWindow", "\347\216\211\347\237\263\345\231\250\343\200\201\345\256\235\347\237\263", 0)
         << QApplication::translate("QueryWindow", "\351\223\234\345\231\250", 0)
         << QApplication::translate("QueryWindow", "\351\223\201\345\231\250\343\200\201\345\205\266\345\256\203\351\207\221\345\261\236\345\231\250", 0)
        );
        ResetButton->setText(QApplication::translate("QueryWindow", "\351\207\215\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class QueryWindow: public Ui_QueryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYMODELWINDOW_H

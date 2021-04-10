/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *clear;
    QPushButton *pushButton9;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton5;
    QPushButton *pushButton4;
    QPushButton *pushButton8;
    QPushButton *pushButton3;
    QPushButton *pushButton6;
    QPushButton *Divide;
    QPushButton *ChangeSign;
    QPushButton *pushButton7;
    QPushButton *pushButton0;
    QPushButton *Subtract;
    QPushButton *Add;
    QPushButton *Multiplay;
    QPushButton *MemAdd;
    QPushButton *MemClear;
    QPushButton *MemGet;
    QPushButton *Equals;
    QLineEdit *Display;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(500, 373);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(30);
        clear->setFont(font);
        clear->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(clear, 4, 0, 1, 1);

        pushButton9 = new QPushButton(centralWidget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        sizePolicy.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy);
        pushButton9->setFont(font);
        pushButton9->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton9, 1, 2, 1, 1);

        pushButton1 = new QPushButton(centralWidget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);
        pushButton1->setFont(font);
        pushButton1->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton1, 3, 0, 1, 1);

        pushButton2 = new QPushButton(centralWidget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        sizePolicy.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy);
        pushButton2->setFont(font);
        pushButton2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton2, 3, 1, 1, 1);

        pushButton5 = new QPushButton(centralWidget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);
        pushButton5->setFont(font);
        pushButton5->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton5, 2, 1, 1, 1);

        pushButton4 = new QPushButton(centralWidget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);
        pushButton4->setFont(font);
        pushButton4->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton4, 2, 0, 1, 1);

        pushButton8 = new QPushButton(centralWidget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);
        pushButton8->setFont(font);
        pushButton8->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton8, 1, 1, 1, 1);

        pushButton3 = new QPushButton(centralWidget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);
        pushButton3->setFont(font);
        pushButton3->setLayoutDirection(Qt::LeftToRight);
        pushButton3->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton3, 3, 2, 1, 1);

        pushButton6 = new QPushButton(centralWidget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);
        pushButton6->setFont(font);
        pushButton6->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton6, 2, 2, 1, 1);

        Divide = new QPushButton(centralWidget);
        Divide->setObjectName(QStringLiteral("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setFont(font);
        Divide->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        ChangeSign = new QPushButton(centralWidget);
        ChangeSign->setObjectName(QStringLiteral("ChangeSign"));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setFont(font);
        ChangeSign->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 4, 2, 1, 1);

        pushButton7 = new QPushButton(centralWidget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);
        pushButton7->setFont(font);
        pushButton7->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        pushButton0 = new QPushButton(centralWidget);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));
        sizePolicy.setHeightForWidth(pushButton0->sizePolicy().hasHeightForWidth());
        pushButton0->setSizePolicy(sizePolicy);
        pushButton0->setFont(font);
        pushButton0->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton0, 4, 1, 1, 1);

        Subtract = new QPushButton(centralWidget);
        Subtract->setObjectName(QStringLiteral("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setFont(font);
        Subtract->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 3, 3, 1, 1);

        Add = new QPushButton(centralWidget);
        Add->setObjectName(QStringLiteral("Add"));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setFont(font);
        Add->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 4, 3, 1, 1);

        Multiplay = new QPushButton(centralWidget);
        Multiplay->setObjectName(QStringLiteral("Multiplay"));
        sizePolicy.setHeightForWidth(Multiplay->sizePolicy().hasHeightForWidth());
        Multiplay->setSizePolicy(sizePolicy);
        Multiplay->setFont(font);
        Multiplay->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiplay, 2, 3, 1, 1);

        MemAdd = new QPushButton(centralWidget);
        MemAdd->setObjectName(QStringLiteral("MemAdd"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy1);
        MemAdd->setFont(font);
        MemAdd->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemAdd, 1, 4, 1, 1);

        MemClear = new QPushButton(centralWidget);
        MemClear->setObjectName(QStringLiteral("MemClear"));
        sizePolicy1.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy1);
        MemClear->setFont(font);
        MemClear->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemClear, 2, 4, 1, 1);

        MemGet = new QPushButton(centralWidget);
        MemGet->setObjectName(QStringLiteral("MemGet"));
        sizePolicy1.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy1);
        MemGet->setFont(font);
        MemGet->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemGet, 3, 4, 1, 1);

        Equals = new QPushButton(centralWidget);
        Equals->setObjectName(QStringLiteral("Equals"));
        sizePolicy1.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy1);
        Equals->setFont(font);
        Equals->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 4, 4, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QStringLiteral("Display"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(40);
        Display->setFont(font1);
        Display->setStyleSheet(QLatin1String("QLineEdit{\n"
"	background-color:gray;\n"
"	border:1px solid gray;\n"
"	color:#7FFF00\n"
"}\n"
""));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 22));
        Calculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", Q_NULLPTR));
        clear->setText(QApplication::translate("Calculator", "AC", Q_NULLPTR));
        pushButton9->setText(QApplication::translate("Calculator", "9", Q_NULLPTR));
        pushButton1->setText(QApplication::translate("Calculator", "1", Q_NULLPTR));
        pushButton2->setText(QApplication::translate("Calculator", "2", Q_NULLPTR));
        pushButton5->setText(QApplication::translate("Calculator", "5", Q_NULLPTR));
        pushButton4->setText(QApplication::translate("Calculator", "4", Q_NULLPTR));
        pushButton8->setText(QApplication::translate("Calculator", "8", Q_NULLPTR));
        pushButton3->setText(QApplication::translate("Calculator", "3", Q_NULLPTR));
        pushButton6->setText(QApplication::translate("Calculator", "6", Q_NULLPTR));
        Divide->setText(QApplication::translate("Calculator", "/", Q_NULLPTR));
        ChangeSign->setText(QApplication::translate("Calculator", "+/-", Q_NULLPTR));
        pushButton7->setText(QApplication::translate("Calculator", "7", Q_NULLPTR));
        pushButton0->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        Subtract->setText(QApplication::translate("Calculator", "-", Q_NULLPTR));
        Add->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
        Multiplay->setText(QApplication::translate("Calculator", "*", Q_NULLPTR));
        MemAdd->setText(QApplication::translate("Calculator", "M+", Q_NULLPTR));
        MemClear->setText(QApplication::translate("Calculator", "M-", Q_NULLPTR));
        MemGet->setText(QApplication::translate("Calculator", "M", Q_NULLPTR));
        Equals->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
        Display->setText(QApplication::translate("Calculator", "0.0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H

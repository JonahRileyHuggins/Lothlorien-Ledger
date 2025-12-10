/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button_9;
    QPushButton *Button_0;
    QPushButton *Add;
    QLineEdit *Display;
    QPushButton *Button_2;
    QPushButton *Subtract;
    QPushButton *Enter;
    QPushButton *Button_1;
    QPushButton *Divide;
    QPushButton *Button_5;
    QPushButton *Button_7;
    QPushButton *Button_3;
    QPushButton *Decimal;
    QPushButton *Button_6;
    QPushButton *Button_8;
    QPushButton *Button_4;
    QPushButton *Multiply;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(800, 514);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: #a6b068;\n"
"	border: 1px #a28982;\n"
"	color: #000000;\n"
"}"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #a6b068;\n"
"	border: 1px #a28982;\n"
"	color: #000000;\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName("Button_9");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(Button_9->sizePolicy().hasHeightForWidth());
        Button_9->setSizePolicy(sizePolicy1);
        Button_9->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Half-Elven Leftalic")});
        font.setPointSize(24);
        font.setBold(true);
        Button_9->setFont(font);
        Button_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #98bb94;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #495a3b;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_9, 1, 2, 1, 1);

        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName("Button_0");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Button_0->sizePolicy().hasHeightForWidth());
        Button_0->setSizePolicy(sizePolicy2);
        Button_0->setMaximumSize(QSize(16777215, 50));
        Button_0->setFont(font);
        Button_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #98bb94;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #495a3b;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_0, 4, 0, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy3);
        Add->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Half-Elven Leftalic")});
        font1.setPointSize(26);
        font1.setBold(true);
        Add->setFont(font1);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #e37d42;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #733317;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Half-Elven Leftalic")});
        font2.setPointSize(30);
        font2.setBold(false);
        Display->setFont(font2);
        Display->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #d5c7b9;\n"
"	border: 1px #a28982;\n"
"	color: #000000;\n"
"}"));
        Display->setCursorPosition(0);
        Display->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing);

        gridLayout->addWidget(Display, 0, 0, 1, 4);

        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName("Button_2");
        sizePolicy2.setHeightForWidth(Button_2->sizePolicy().hasHeightForWidth());
        Button_2->setSizePolicy(sizePolicy2);
        Button_2->setMaximumSize(QSize(16777215, 50));
        Button_2->setFont(font);
        Button_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #98bb94;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #495a3b;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_2, 3, 1, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName("Subtract");
        sizePolicy3.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy3);
        Subtract->setMaximumSize(QSize(16777215, 50));
        Subtract->setFont(font1);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #e37d42;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #733317;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 2, 3, 1, 1);

        Enter = new QPushButton(centralwidget);
        Enter->setObjectName("Enter");
        sizePolicy3.setHeightForWidth(Enter->sizePolicy().hasHeightForWidth());
        Enter->setSizePolicy(sizePolicy3);
        Enter->setMaximumSize(QSize(16777215, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Tengwar Annatar")});
        font3.setPointSize(17);
        font3.setBold(true);
        Enter->setFont(font3);
        Enter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #e37d42;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #733317;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Enter, 4, 2, 1, 1);

        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName("Button_1");
        sizePolicy2.setHeightForWidth(Button_1->sizePolicy().hasHeightForWidth());
        Button_1->setSizePolicy(sizePolicy2);
        Button_1->setMaximumSize(QSize(16777215, 50));
        Button_1->setFont(font);
        Button_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #98bb94;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #495a3b;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_1, 3, 0, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        sizePolicy3.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy3);
        Divide->setMaximumSize(QSize(16777215, 50));
        Divide->setFont(font1);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #e37d42;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #733317;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName("Button_5");
        sizePolicy2.setHeightForWidth(Button_5->sizePolicy().hasHeightForWidth());
        Button_5->setSizePolicy(sizePolicy2);
        Button_5->setMaximumSize(QSize(16777215, 42));
        Button_5->setFont(font);
        Button_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #98bb94;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #495a3b;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_5, 2, 1, 1, 1);

        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName("Button_7");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Ignored);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Button_7->sizePolicy().hasHeightForWidth());
        Button_7->setSizePolicy(sizePolicy4);
        Button_7->setMaximumSize(QSize(16777215, 50));
        Button_7->setFont(font);
        Button_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #98bb94;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #495a3b;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_7, 1, 0, 1, 1);

        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName("Button_3");
        sizePolicy2.setHeightForWidth(Button_3->sizePolicy().hasHeightForWidth());
        Button_3->setSizePolicy(sizePolicy2);
        Button_3->setMaximumSize(QSize(16777215, 50));
        Button_3->setFont(font);
        Button_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #98bb94;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #495a3b;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_3, 3, 2, 1, 1);

        Decimal = new QPushButton(centralwidget);
        Decimal->setObjectName("Decimal");
        sizePolicy2.setHeightForWidth(Decimal->sizePolicy().hasHeightForWidth());
        Decimal->setSizePolicy(sizePolicy2);
        Decimal->setMaximumSize(QSize(16777215, 50));
        Decimal->setFont(font1);
        Decimal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #98bb94;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #495a3b;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Decimal, 4, 1, 1, 1);

        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName("Button_6");
        sizePolicy2.setHeightForWidth(Button_6->sizePolicy().hasHeightForWidth());
        Button_6->setSizePolicy(sizePolicy2);
        Button_6->setMaximumSize(QSize(16777215, 50));
        Button_6->setFont(font);
        Button_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #98bb94;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #495a3b;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_6, 2, 2, 1, 1);

        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName("Button_8");
        sizePolicy4.setHeightForWidth(Button_8->sizePolicy().hasHeightForWidth());
        Button_8->setSizePolicy(sizePolicy4);
        Button_8->setMaximumSize(QSize(16777215, 50));
        Button_8->setFont(font);
        Button_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #98bb94;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #495a3b;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_8, 1, 1, 1, 1);

        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName("Button_4");
        sizePolicy2.setHeightForWidth(Button_4->sizePolicy().hasHeightForWidth());
        Button_4->setSizePolicy(sizePolicy2);
        Button_4->setMaximumSize(QSize(16777215, 50));
        Button_4->setFont(font);
        Button_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #98bb94;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #495a3b;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_4, 2, 0, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        sizePolicy3.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy3);
        Multiply->setMaximumSize(QSize(16777215, 50));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font4.setPointSize(26);
        font4.setBold(true);
        Multiply->setFont(font4);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #e37d42;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButtonPressed{\n"
"	background-color: #733317;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 4, 3, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "MainWindow", nullptr));
        Button_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Display->setText(QString());
        Button_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Enter->setText(QCoreApplication::translate("Calculator", "t5{%`C", nullptr));
        Button_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Decimal->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        Button_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H

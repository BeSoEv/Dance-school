/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *roles;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *choiseRole;
    QPushButton *choiseRoleButton;
    QWidget *loginStudent;
    QGridLayout *gridLayout_3;
    QPushButton *cancelButton_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *logStud;
    QLabel *label_2;
    QLineEdit *passStud;
    QPushButton *enterStudentButton;
    QLabel *label_5;
    QPushButton *registerStudentButton;
    QWidget *loginDirectors;
    QGridLayout *gridLayout_2;
    QPushButton *cancelButton;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *logDir;
    QLabel *label_4;
    QLineEdit *passDir;
    QPushButton *enterDirButton;
    QWidget *registerStudent;
    QGridLayout *gridLayout_4;
    QFormLayout *formLayout_3;
    QLabel *label_8;
    QLineEdit *name1;
    QLabel *label_9;
    QLineEdit *name2;
    QLabel *label_10;
    QLineEdit *name3;
    QLabel *label_11;
    QLineEdit *loginReg;
    QLabel *label_12;
    QLineEdit *passReg;
    QLabel *label_13;
    QLineEdit *pass2Red;
    QPushButton *finishRegButton;
    QPushButton *backButton;
    QWidget *interfaceStud;
    QGridLayout *gridLayout_5;
    QSplitter *splitter;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        roles = new QWidget();
        roles->setObjectName("roles");
        widget = new QWidget(roles);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(230, 120, 311, 251));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0); font: 700 14pt \"Segoe UI\";"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_7);

        choiseRole = new QComboBox(widget);
        choiseRole->addItem(QString());
        choiseRole->addItem(QString());
        choiseRole->addItem(QString());
        choiseRole->addItem(QString());
        choiseRole->setObjectName("choiseRole");

        verticalLayout->addWidget(choiseRole);

        choiseRoleButton = new QPushButton(widget);
        choiseRoleButton->setObjectName("choiseRoleButton");

        verticalLayout->addWidget(choiseRoleButton);

        stackedWidget->addWidget(roles);
        loginStudent = new QWidget();
        loginStudent->setObjectName("loginStudent");
        gridLayout_3 = new QGridLayout(loginStudent);
        gridLayout_3->setObjectName("gridLayout_3");
        cancelButton_2 = new QPushButton(loginStudent);
        cancelButton_2->setObjectName("cancelButton_2");

        gridLayout_3->addWidget(cancelButton_2, 1, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(loginStudent);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        logStud = new QLineEdit(loginStudent);
        logStud->setObjectName("logStud");

        formLayout->setWidget(0, QFormLayout::FieldRole, logStud);

        label_2 = new QLabel(loginStudent);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        passStud = new QLineEdit(loginStudent);
        passStud->setObjectName("passStud");
        passStud->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passStud);

        enterStudentButton = new QPushButton(loginStudent);
        enterStudentButton->setObjectName("enterStudentButton");

        formLayout->setWidget(2, QFormLayout::SpanningRole, enterStudentButton);

        label_5 = new QLabel(loginStudent);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        registerStudentButton = new QPushButton(loginStudent);
        registerStudentButton->setObjectName("registerStudentButton");

        formLayout->setWidget(3, QFormLayout::FieldRole, registerStudentButton);


        gridLayout_3->addLayout(formLayout, 0, 0, 2, 1);

        stackedWidget->addWidget(loginStudent);
        loginDirectors = new QWidget();
        loginDirectors->setObjectName("loginDirectors");
        gridLayout_2 = new QGridLayout(loginDirectors);
        gridLayout_2->setObjectName("gridLayout_2");
        cancelButton = new QPushButton(loginDirectors);
        cancelButton->setObjectName("cancelButton");

        gridLayout_2->addWidget(cancelButton, 1, 1, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_3 = new QLabel(loginDirectors);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        logDir = new QLineEdit(loginDirectors);
        logDir->setObjectName("logDir");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, logDir);

        label_4 = new QLabel(loginDirectors);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        passDir = new QLineEdit(loginDirectors);
        passDir->setObjectName("passDir");
        passDir->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, passDir);

        enterDirButton = new QPushButton(loginDirectors);
        enterDirButton->setObjectName("enterDirButton");

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, enterDirButton);


        gridLayout_2->addLayout(formLayout_2, 0, 0, 1, 1);

        stackedWidget->addWidget(loginDirectors);
        registerStudent = new QWidget();
        registerStudent->setObjectName("registerStudent");
        gridLayout_4 = new QGridLayout(registerStudent);
        gridLayout_4->setObjectName("gridLayout_4");
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        label_8 = new QLabel(registerStudent);
        label_8->setObjectName("label_8");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        name1 = new QLineEdit(registerStudent);
        name1->setObjectName("name1");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, name1);

        label_9 = new QLabel(registerStudent);
        label_9->setObjectName("label_9");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_9);

        name2 = new QLineEdit(registerStudent);
        name2->setObjectName("name2");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, name2);

        label_10 = new QLabel(registerStudent);
        label_10->setObjectName("label_10");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_10);

        name3 = new QLineEdit(registerStudent);
        name3->setObjectName("name3");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, name3);

        label_11 = new QLabel(registerStudent);
        label_11->setObjectName("label_11");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_11);

        loginReg = new QLineEdit(registerStudent);
        loginReg->setObjectName("loginReg");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, loginReg);

        label_12 = new QLabel(registerStudent);
        label_12->setObjectName("label_12");

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_12);

        passReg = new QLineEdit(registerStudent);
        passReg->setObjectName("passReg");

        formLayout_3->setWidget(4, QFormLayout::FieldRole, passReg);

        label_13 = new QLabel(registerStudent);
        label_13->setObjectName("label_13");

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_13);

        pass2Red = new QLineEdit(registerStudent);
        pass2Red->setObjectName("pass2Red");

        formLayout_3->setWidget(5, QFormLayout::FieldRole, pass2Red);

        finishRegButton = new QPushButton(registerStudent);
        finishRegButton->setObjectName("finishRegButton");

        formLayout_3->setWidget(6, QFormLayout::SpanningRole, finishRegButton);


        gridLayout_4->addLayout(formLayout_3, 0, 0, 1, 1);

        backButton = new QPushButton(registerStudent);
        backButton->setObjectName("backButton");

        gridLayout_4->addWidget(backButton, 1, 1, 1, 1);

        stackedWidget->addWidget(registerStudent);
        interfaceStud = new QWidget();
        interfaceStud->setObjectName("interfaceStud");
        gridLayout_5 = new QGridLayout(interfaceStud);
        gridLayout_5->setObjectName("gridLayout_5");
        splitter = new QSplitter(interfaceStud);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Vertical);
        pushButton_3 = new QPushButton(splitter);
        pushButton_3->setObjectName("pushButton_3");
        splitter->addWidget(pushButton_3);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName("pushButton");
        splitter->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName("pushButton_2");
        splitter->addWidget(pushButton_2);

        gridLayout_5->addWidget(splitter, 0, 0, 1, 1);

        stackedWidget->addWidget(interfaceStud);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\250\320\272\320\276\320\273\320\260 \321\202\320\260\320\275\321\206\320\265\320\262 Red", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\201\320\262\320\276\321\216 \321\200\320\276\320\273\321\214", nullptr));
        choiseRole->setItemText(0, QCoreApplication::translate("MainWindow", "\320\243\321\207\320\265\320\275\320\270\320\272", nullptr));
        choiseRole->setItemText(1, QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\320\275\320\265\321\200", nullptr));
        choiseRole->setItemText(2, QCoreApplication::translate("MainWindow", "\320\224\320\270\321\200\320\265\320\272\321\202\320\276\321\200 \321\204\320\270\320\273\320\270\320\260\320\273\320\260", nullptr));
        choiseRole->setItemText(3, QCoreApplication::translate("MainWindow", "\320\220\320\264\320\274\320\270\320\275", nullptr));

        choiseRoleButton->setText(QCoreApplication::translate("MainWindow", "\320\276\320\272", nullptr));
        cancelButton_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        enterStudentButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260?", nullptr));
        registerStudentButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        cancelButton->setText(QCoreApplication::translate("MainWindow", "\320\276\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        enterDirButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        finishRegButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        backButton->setText(QCoreApplication::translate("MainWindow", "\320\275\320\260\320\267\320\260\320\264", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214\321\201\321\217 \320\275\320\260 \320\267\320\260\320\275\321\217\321\202\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\267\320\260\320\275\321\217\321\202\320\270\320\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\267\320\260\321\217\320\262\320\276\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

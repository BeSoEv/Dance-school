/********************************************************************************
** Form generated from reading UI file 'enter.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_H
#define UI_ENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enter
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *enterStud;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *registerSC;
    QPushButton *enterSC;
    QPushButton *cancelButton;
    QWidget *registerStud;
    QPushButton *backButton;
    QWidget *layoutWidget;
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
    QWidget *enterDirs;
    QPushButton *cancelButton_2;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *logDir;
    QLabel *label_5;
    QLineEdit *passDir;
    QPushButton *enterDirButton;

    void setupUi(QDialog *Enter)
    {
        if (Enter->objectName().isEmpty())
            Enter->setObjectName("Enter");
        Enter->resize(771, 566);
        gridLayout = new QGridLayout(Enter);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(Enter);
        stackedWidget->setObjectName("stackedWidget");
        enterStud = new QWidget();
        enterStud->setObjectName("enterStud");
        gridLayout_2 = new QGridLayout(enterStud);
        gridLayout_2->setObjectName("gridLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(enterStud);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(enterStud);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(enterStud);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(enterStud);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(enterStud);
        label_3->setObjectName("label_3");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        registerSC = new QPushButton(enterStud);
        registerSC->setObjectName("registerSC");

        formLayout->setWidget(3, QFormLayout::FieldRole, registerSC);

        enterSC = new QPushButton(enterStud);
        enterSC->setObjectName("enterSC");

        formLayout->setWidget(2, QFormLayout::SpanningRole, enterSC);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);

        cancelButton = new QPushButton(enterStud);
        cancelButton->setObjectName("cancelButton");

        gridLayout_2->addWidget(cancelButton, 1, 1, 1, 1);

        stackedWidget->addWidget(enterStud);
        registerStud = new QWidget();
        registerStud->setObjectName("registerStud");
        backButton = new QPushButton(registerStud);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(660, 490, 80, 29));
        layoutWidget = new QWidget(registerStud);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 0, 651, 481));
        formLayout_3 = new QFormLayout(layoutWidget);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        name1 = new QLineEdit(layoutWidget);
        name1->setObjectName("name1");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, name1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_9);

        name2 = new QLineEdit(layoutWidget);
        name2->setObjectName("name2");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, name2);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_10);

        name3 = new QLineEdit(layoutWidget);
        name3->setObjectName("name3");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, name3);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_11);

        loginReg = new QLineEdit(layoutWidget);
        loginReg->setObjectName("loginReg");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, loginReg);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_12);

        passReg = new QLineEdit(layoutWidget);
        passReg->setObjectName("passReg");

        formLayout_3->setWidget(4, QFormLayout::FieldRole, passReg);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_13);

        pass2Red = new QLineEdit(layoutWidget);
        pass2Red->setObjectName("pass2Red");

        formLayout_3->setWidget(5, QFormLayout::FieldRole, pass2Red);

        finishRegButton = new QPushButton(layoutWidget);
        finishRegButton->setObjectName("finishRegButton");

        formLayout_3->setWidget(6, QFormLayout::SpanningRole, finishRegButton);

        stackedWidget->addWidget(registerStud);
        enterDirs = new QWidget();
        enterDirs->setObjectName("enterDirs");
        cancelButton_2 = new QPushButton(enterDirs);
        cancelButton_2->setObjectName("cancelButton_2");
        cancelButton_2->setGeometry(QRect(657, 488, 80, 29));
        layoutWidget_2 = new QWidget(enterDirs);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 20, 631, 451));
        formLayout_2 = new QFormLayout(layoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        logDir = new QLineEdit(layoutWidget_2);
        logDir->setObjectName("logDir");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, logDir);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        passDir = new QLineEdit(layoutWidget_2);
        passDir->setObjectName("passDir");
        passDir->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, passDir);

        enterDirButton = new QPushButton(layoutWidget_2);
        enterDirButton->setObjectName("enterDirButton");

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, enterDirButton);

        stackedWidget->addWidget(enterDirs);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Enter);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Enter);
    } // setupUi

    void retranslateUi(QDialog *Enter)
    {
        Enter->setWindowTitle(QCoreApplication::translate("Enter", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Enter", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("Enter", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("Enter", "\320\235\320\265\321\202 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260?", nullptr));
        registerSC->setText(QCoreApplication::translate("Enter", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        enterSC->setText(QCoreApplication::translate("Enter", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        cancelButton->setText(QCoreApplication::translate("Enter", "\320\276\321\202\320\274\320\265\320\275\320\260", nullptr));
        backButton->setText(QCoreApplication::translate("Enter", "\320\275\320\260\320\267\320\260\320\264", nullptr));
        label_8->setText(QCoreApplication::translate("Enter", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_9->setText(QCoreApplication::translate("Enter", "\320\230\320\274\321\217", nullptr));
        label_10->setText(QCoreApplication::translate("Enter", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_11->setText(QCoreApplication::translate("Enter", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_12->setText(QCoreApplication::translate("Enter", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_13->setText(QCoreApplication::translate("Enter", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        finishRegButton->setText(QCoreApplication::translate("Enter", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        cancelButton_2->setText(QCoreApplication::translate("Enter", "\320\276\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("Enter", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_5->setText(QCoreApplication::translate("Enter", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        enterDirButton->setText(QCoreApplication::translate("Enter", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enter: public Ui_Enter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_H

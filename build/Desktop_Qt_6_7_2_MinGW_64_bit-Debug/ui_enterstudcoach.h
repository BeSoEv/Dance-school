/********************************************************************************
** Form generated from reading UI file 'enterstudcoach.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERSTUDCOACH_H
#define UI_ENTERSTUDCOACH_H

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

class Ui_enter
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
    QPushButton *pushButton;
    QWidget *page_2;

    void setupUi(QDialog *enter)
    {
        if (enter->objectName().isEmpty())
            enter->setObjectName("enter");
        enter->resize(771, 566);
        gridLayout = new QGridLayout(enter);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(enter);
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

        pushButton = new QPushButton(enterStud);
        pushButton->setObjectName("pushButton");

        gridLayout_2->addWidget(pushButton, 1, 1, 1, 1);

        stackedWidget->addWidget(enterStud);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(enter);

        QMetaObject::connectSlotsByName(enter);
    } // setupUi

    void retranslateUi(QDialog *enter)
    {
        enter->setWindowTitle(QCoreApplication::translate("enter", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("enter", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("enter", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("enter", "\320\235\320\265\321\202 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260?", nullptr));
        registerSC->setText(QCoreApplication::translate("enter", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        enterSC->setText(QCoreApplication::translate("enter", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("enter", "\320\276\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class enter: public Ui_enter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERSTUDCOACH_H

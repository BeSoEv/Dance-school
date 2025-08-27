/********************************************************************************
** Form generated from reading UI file 'admininterface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminInterface
{
public:
    QWidget *widget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *moneyAdminBut;
    QPushButton *filialsBut;
    QPushButton *addDirBut;
    QPushButton *openFilialBut;
    QPushButton *closeFilialBut;
    QStackedWidget *stackedWidget;
    QWidget *moneyAdmin;
    QTabWidget *tabWidget_choose;
    QWidget *moneyFromSchools;
    QWidget *widget_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QTableView *schoolsmoneyTableview;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *searchSchoolMoney;
    QPushButton *searchSchoolMoneyBut;
    QWidget *allMoney;
    QLabel *allMoneyOutput;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QDateEdit *startDate;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QDateEdit *endDate;
    QPushButton *dateBut;
    QWidget *filials;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QWidget *openFilial;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *schoolName;
    QLabel *label_2;
    QLineEdit *schoolAddress;
    QLabel *label_3;
    QPushButton *addSchoolBut;
    QComboBox *choseDir;
    QWidget *closeFilial;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QComboBox *choseSchoolClose;
    QPushButton *closeSchoolBut;
    QWidget *addDir;
    QLineEdit *name3;
    QPushButton *addButton;
    QLineEdit *loginReg;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *pass2Reg;
    QLabel *label_12;
    QLineEdit *passReg;
    QLineEdit *name2;
    QLineEdit *name1;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *startpage;

    void setupUi(QWidget *AdminInterface)
    {
        if (AdminInterface->objectName().isEmpty())
            AdminInterface->setObjectName("AdminInterface");
        AdminInterface->resize(907, 565);
        widget = new QWidget(AdminInterface);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 181, 551));
        widget1 = new QWidget(widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 100, 155, 175));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        moneyAdminBut = new QPushButton(widget1);
        moneyAdminBut->setObjectName("moneyAdminBut");

        verticalLayout->addWidget(moneyAdminBut);

        filialsBut = new QPushButton(widget1);
        filialsBut->setObjectName("filialsBut");

        verticalLayout->addWidget(filialsBut);

        addDirBut = new QPushButton(widget1);
        addDirBut->setObjectName("addDirBut");

        verticalLayout->addWidget(addDirBut);

        openFilialBut = new QPushButton(widget1);
        openFilialBut->setObjectName("openFilialBut");

        verticalLayout->addWidget(openFilialBut);

        closeFilialBut = new QPushButton(widget1);
        closeFilialBut->setObjectName("closeFilialBut");

        verticalLayout->addWidget(closeFilialBut);

        stackedWidget = new QStackedWidget(AdminInterface);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(199, 9, 701, 551));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        moneyAdmin = new QWidget();
        moneyAdmin->setObjectName("moneyAdmin");
        tabWidget_choose = new QTabWidget(moneyAdmin);
        tabWidget_choose->setObjectName("tabWidget_choose");
        tabWidget_choose->setGeometry(QRect(14, 130, 671, 411));
        moneyFromSchools = new QWidget();
        moneyFromSchools->setObjectName("moneyFromSchools");
        widget_2 = new QWidget(moneyFromSchools);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(-1, 49, 671, 321));
        gridLayoutWidget_2 = new QWidget(widget_2);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(-1, -1, 671, 331));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        schoolsmoneyTableview = new QTableView(gridLayoutWidget_2);
        schoolsmoneyTableview->setObjectName("schoolsmoneyTableview");

        gridLayout->addWidget(schoolsmoneyTableview, 0, 0, 1, 1);

        layoutWidget = new QWidget(moneyFromSchools);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 641, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout->addWidget(label_7);

        searchSchoolMoney = new QLineEdit(layoutWidget);
        searchSchoolMoney->setObjectName("searchSchoolMoney");

        horizontalLayout->addWidget(searchSchoolMoney);

        searchSchoolMoneyBut = new QPushButton(layoutWidget);
        searchSchoolMoneyBut->setObjectName("searchSchoolMoneyBut");

        horizontalLayout->addWidget(searchSchoolMoneyBut);

        tabWidget_choose->addTab(moneyFromSchools, QString());
        allMoney = new QWidget();
        allMoney->setObjectName("allMoney");
        allMoneyOutput = new QLabel(allMoney);
        allMoneyOutput->setObjectName("allMoneyOutput");
        allMoneyOutput->setGeometry(QRect(10, 10, 651, 351));
        tabWidget_choose->addTab(allMoney, QString());
        widget2 = new QWidget(moneyAdmin);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(70, 30, 591, 89));
        verticalLayout_4 = new QVBoxLayout(widget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget2);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_5 = new QLabel(widget2);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        startDate = new QDateEdit(widget2);
        startDate->setObjectName("startDate");
        startDate->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(0, 0, 1)));

        verticalLayout_2->addWidget(startDate);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_6 = new QLabel(widget2);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        endDate = new QDateEdit(widget2);
        endDate->setObjectName("endDate");
        endDate->setDateTime(QDateTime(QDate(2025, 1, 1), QTime(0, 0, 1)));

        verticalLayout_3->addWidget(endDate);


        horizontalLayout_2->addLayout(verticalLayout_3);

        dateBut = new QPushButton(widget2);
        dateBut->setObjectName("dateBut");
        dateBut->setMaximumSize(QSize(150, 30));

        horizontalLayout_2->addWidget(dateBut);


        verticalLayout_4->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(moneyAdmin);
        filials = new QWidget();
        filials->setObjectName("filials");
        sizePolicy.setHeightForWidth(filials->sizePolicy().hasHeightForWidth());
        filials->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(filials);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 701, 541));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(gridLayoutWidget);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);

        stackedWidget->addWidget(filials);
        openFilial = new QWidget();
        openFilial->setObjectName("openFilial");
        layoutWidget1 = new QWidget(openFilial);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(110, 60, 561, 301));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        schoolName = new QLineEdit(layoutWidget1);
        schoolName->setObjectName("schoolName");

        formLayout->setWidget(0, QFormLayout::FieldRole, schoolName);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        schoolAddress = new QLineEdit(layoutWidget1);
        schoolAddress->setObjectName("schoolAddress");

        formLayout->setWidget(1, QFormLayout::FieldRole, schoolAddress);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        addSchoolBut = new QPushButton(layoutWidget1);
        addSchoolBut->setObjectName("addSchoolBut");

        formLayout->setWidget(3, QFormLayout::SpanningRole, addSchoolBut);

        choseDir = new QComboBox(layoutWidget1);
        choseDir->setObjectName("choseDir");

        formLayout->setWidget(2, QFormLayout::FieldRole, choseDir);

        stackedWidget->addWidget(openFilial);
        closeFilial = new QWidget();
        closeFilial->setObjectName("closeFilial");
        widget3 = new QWidget(closeFilial);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(181, 90, 351, 161));
        verticalLayout_5 = new QVBoxLayout(widget3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget3);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_8);

        choseSchoolClose = new QComboBox(widget3);
        choseSchoolClose->setObjectName("choseSchoolClose");

        verticalLayout_5->addWidget(choseSchoolClose);

        closeSchoolBut = new QPushButton(widget3);
        closeSchoolBut->setObjectName("closeSchoolBut");

        verticalLayout_5->addWidget(closeSchoolBut);

        stackedWidget->addWidget(closeFilial);
        addDir = new QWidget();
        addDir->setObjectName("addDir");
        name3 = new QLineEdit(addDir);
        name3->setObjectName("name3");
        name3->setGeometry(QRect(177, 100, 512, 28));
        addButton = new QPushButton(addDir);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(40, 240, 649, 29));
        loginReg = new QLineEdit(addDir);
        loginReg->setObjectName("loginReg");
        loginReg->setGeometry(QRect(177, 135, 512, 28));
        label_9 = new QLabel(addDir);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(40, 30, 64, 28));
        label_10 = new QLabel(addDir);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(40, 65, 30, 28));
        label_11 = new QLabel(addDir);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(40, 100, 63, 28));
        pass2Reg = new QLineEdit(addDir);
        pass2Reg->setObjectName("pass2Reg");
        pass2Reg->setGeometry(QRect(177, 205, 512, 28));
        pass2Reg->setEchoMode(QLineEdit::EchoMode::Password);
        label_12 = new QLabel(addDir);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(40, 135, 43, 28));
        passReg = new QLineEdit(addDir);
        passReg->setObjectName("passReg");
        passReg->setGeometry(QRect(177, 170, 512, 28));
        passReg->setEchoMode(QLineEdit::EchoMode::Password);
        name2 = new QLineEdit(addDir);
        name2->setObjectName("name2");
        name2->setGeometry(QRect(177, 65, 512, 28));
        name1 = new QLineEdit(addDir);
        name1->setObjectName("name1");
        name1->setGeometry(QRect(177, 30, 512, 28));
        label_13 = new QLabel(addDir);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(40, 205, 130, 28));
        label_14 = new QLabel(addDir);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(40, 170, 53, 28));
        stackedWidget->addWidget(addDir);
        startpage = new QWidget();
        startpage->setObjectName("startpage");
        stackedWidget->addWidget(startpage);

        retranslateUi(AdminInterface);

        stackedWidget->setCurrentIndex(0);
        tabWidget_choose->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminInterface);
    } // setupUi

    void retranslateUi(QWidget *AdminInterface)
    {
        AdminInterface->setWindowTitle(QCoreApplication::translate("AdminInterface", "Form", nullptr));
        moneyAdminBut->setText(QCoreApplication::translate("AdminInterface", "\320\227\320\260\321\200\320\260\320\261\320\276\321\202\320\276\320\272", nullptr));
        filialsBut->setText(QCoreApplication::translate("AdminInterface", "\320\244\320\270\320\273\320\270\320\260\320\273\321\213", nullptr));
        addDirBut->setText(QCoreApplication::translate("AdminInterface", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\270\321\200\320\265\320\272\321\202\320\276\321\200\320\260", nullptr));
        openFilialBut->setText(QCoreApplication::translate("AdminInterface", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\270\320\273\320\270\320\260\320\273", nullptr));
        closeFilialBut->setText(QCoreApplication::translate("AdminInterface", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \321\204\320\270\320\273\320\270\320\260\320\273", nullptr));
        label_7->setText(QCoreApplication::translate("AdminInterface", "\320\237\320\276\320\270\321\201\320\272:", nullptr));
        searchSchoolMoneyBut->setText(QCoreApplication::translate("AdminInterface", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        tabWidget_choose->setTabText(tabWidget_choose->indexOf(moneyFromSchools), QCoreApplication::translate("AdminInterface", "\320\237\320\276 \321\210\320\272\320\276\320\273\320\260\320\274", nullptr));
        allMoneyOutput->setText(QString());
        tabWidget_choose->setTabText(tabWidget_choose->indexOf(allMoney), QCoreApplication::translate("AdminInterface", "\320\222\321\201\320\265\320\263\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("AdminInterface", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_5->setText(QCoreApplication::translate("AdminInterface", "\320\235\320\260\321\207\320\260\320\273\320\276", nullptr));
        label_6->setText(QCoreApplication::translate("AdminInterface", "\320\232\320\276\320\275\320\265\321\206", nullptr));
        dateBut->setText(QCoreApplication::translate("AdminInterface", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("AdminInterface", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("AdminInterface", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_3->setText(QCoreApplication::translate("AdminInterface", "\320\224\320\270\321\200\320\265\320\272\321\202\320\276\321\200", nullptr));
        addSchoolBut->setText(QCoreApplication::translate("AdminInterface", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("AdminInterface", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\270\320\273\320\270\320\260\320\273\320\260 \320\264\320\273\321\217 \320\267\320\260\320\272\321\200\321\213\321\202\320\270\321\217", nullptr));
        closeSchoolBut->setText(QCoreApplication::translate("AdminInterface", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        addButton->setText(QCoreApplication::translate("AdminInterface", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_9->setText(QCoreApplication::translate("AdminInterface", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_10->setText(QCoreApplication::translate("AdminInterface", "\320\230\320\274\321\217", nullptr));
        label_11->setText(QCoreApplication::translate("AdminInterface", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_12->setText(QCoreApplication::translate("AdminInterface", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_13->setText(QCoreApplication::translate("AdminInterface", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_14->setText(QCoreApplication::translate("AdminInterface", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminInterface: public Ui_AdminInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H

/********************************************************************************
** Form generated from reading UI file 'directorsinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIRECTORSINTERFACE_H
#define UI_DIRECTORSINTERFACE_H

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

class Ui_DirectorsInterface
{
public:
    QWidget *widget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *sheduleBut;
    QPushButton *roomsBut;
    QPushButton *moneyBut;
    QStackedWidget *stackedWidget;
    QWidget *shedule;
    QWidget *widget_4;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QTableView *lessonsTableview;
    QWidget *layoutWidget_3;
    QFormLayout *formLayout_5;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QPushButton *addLessonBut;
    QLabel *label_24;
    QComboBox *choseCoach;
    QComboBox *choseLesson;
    QComboBox *choseDay;
    QComboBox *choseRoom;
    QLabel *label_10;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QComboBox *choseLessonRoomDelete;
    QComboBox *choseLessonDayDelete;
    QComboBox *choseLessonNumberDelete;
    QPushButton *choseLessonDeleteBut;
    QLabel *label_11;
    QWidget *rooms;
    QWidget *widget_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QTableView *roomsTableview;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *roomNumber;
    QLabel *label_2;
    QLineEdit *roomArea;
    QLabel *label_3;
    QPushButton *addRoomBut;
    QLineEdit *roomPrice;
    QLabel *label_6;
    QLabel *label_9;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *choseRoomDelete;
    QPushButton *choseRoomDeleteBut;
    QWidget *money;
    QTabWidget *tabWidget_choose;
    QWidget *moneyForEachCoach;
    QWidget *widget_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QTableView *coachesmoneyTableview;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *searchCoachMoney;
    QPushButton *searchCoachMoneyBut;
    QWidget *allMoney;
    QLabel *allSchoolMoneyOutput;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QDateEdit *startDate;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QDateEdit *endDate;
    QPushButton *dateBut;
    QWidget *page;

    void setupUi(QWidget *DirectorsInterface)
    {
        if (DirectorsInterface->objectName().isEmpty())
            DirectorsInterface->setObjectName("DirectorsInterface");
        DirectorsInterface->resize(933, 569);
        widget = new QWidget(DirectorsInterface);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(11, 1, 171, 561));
        widget1 = new QWidget(widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 100, 152, 106));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        sheduleBut = new QPushButton(widget1);
        sheduleBut->setObjectName("sheduleBut");
        sheduleBut->setMinimumSize(QSize(150, 30));

        verticalLayout_2->addWidget(sheduleBut);

        roomsBut = new QPushButton(widget1);
        roomsBut->setObjectName("roomsBut");
        roomsBut->setMinimumSize(QSize(150, 30));

        verticalLayout_2->addWidget(roomsBut);

        moneyBut = new QPushButton(widget1);
        moneyBut->setObjectName("moneyBut");
        moneyBut->setMinimumSize(QSize(150, 30));

        verticalLayout_2->addWidget(moneyBut);

        stackedWidget = new QStackedWidget(DirectorsInterface);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(180, 0, 721, 561));
        shedule = new QWidget();
        shedule->setObjectName("shedule");
        widget_4 = new QWidget(shedule);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(9, 10, 671, 561));
        gridLayoutWidget_6 = new QWidget(widget_4);
        gridLayoutWidget_6->setObjectName("gridLayoutWidget_6");
        gridLayoutWidget_6->setGeometry(QRect(9, -1, 661, 291));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        lessonsTableview = new QTableView(gridLayoutWidget_6);
        lessonsTableview->setObjectName("lessonsTableview");

        gridLayout_6->addWidget(lessonsTableview, 0, 0, 1, 1);

        layoutWidget_3 = new QWidget(widget_4);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(19, 350, 381, 171));
        formLayout_5 = new QFormLayout(layoutWidget_3);
        formLayout_5->setObjectName("formLayout_5");
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget_3);
        label_21->setObjectName("label_21");

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_21);

        label_22 = new QLabel(layoutWidget_3);
        label_22->setObjectName("label_22");

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_22);

        label_23 = new QLabel(layoutWidget_3);
        label_23->setObjectName("label_23");

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_23);

        addLessonBut = new QPushButton(layoutWidget_3);
        addLessonBut->setObjectName("addLessonBut");

        formLayout_5->setWidget(4, QFormLayout::SpanningRole, addLessonBut);

        label_24 = new QLabel(layoutWidget_3);
        label_24->setObjectName("label_24");

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_24);

        choseCoach = new QComboBox(layoutWidget_3);
        choseCoach->setObjectName("choseCoach");

        formLayout_5->setWidget(3, QFormLayout::FieldRole, choseCoach);

        choseLesson = new QComboBox(layoutWidget_3);
        choseLesson->setObjectName("choseLesson");

        formLayout_5->setWidget(2, QFormLayout::FieldRole, choseLesson);

        choseDay = new QComboBox(layoutWidget_3);
        choseDay->setObjectName("choseDay");

        formLayout_5->setWidget(1, QFormLayout::FieldRole, choseDay);

        choseRoom = new QComboBox(layoutWidget_3);
        choseRoom->setObjectName("choseRoom");

        formLayout_5->setWidget(0, QFormLayout::FieldRole, choseRoom);

        label_10 = new QLabel(widget_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(140, 320, 151, 20));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget_4 = new QWidget(widget_4);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(420, 350, 251, 136));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        choseLessonRoomDelete = new QComboBox(layoutWidget_4);
        choseLessonRoomDelete->setObjectName("choseLessonRoomDelete");

        verticalLayout_5->addWidget(choseLessonRoomDelete);

        choseLessonDayDelete = new QComboBox(layoutWidget_4);
        choseLessonDayDelete->setObjectName("choseLessonDayDelete");

        verticalLayout_5->addWidget(choseLessonDayDelete);

        choseLessonNumberDelete = new QComboBox(layoutWidget_4);
        choseLessonNumberDelete->setObjectName("choseLessonNumberDelete");

        verticalLayout_5->addWidget(choseLessonNumberDelete);

        choseLessonDeleteBut = new QPushButton(layoutWidget_4);
        choseLessonDeleteBut->setObjectName("choseLessonDeleteBut");

        verticalLayout_5->addWidget(choseLessonDeleteBut);

        label_11 = new QLabel(widget_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(481, 320, 131, 20));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(shedule);
        rooms = new QWidget();
        rooms->setObjectName("rooms");
        widget_3 = new QWidget(rooms);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 0, 441, 561));
        gridLayoutWidget = new QWidget(widget_3);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(-1, -1, 441, 551));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        roomsTableview = new QTableView(gridLayoutWidget);
        roomsTableview->setObjectName("roomsTableview");

        gridLayout_2->addWidget(roomsTableview, 0, 0, 1, 1);

        layoutWidget_2 = new QWidget(rooms);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(450, 60, 251, 161));
        formLayout = new QFormLayout(layoutWidget_2);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        roomNumber = new QLineEdit(layoutWidget_2);
        roomNumber->setObjectName("roomNumber");

        formLayout->setWidget(0, QFormLayout::FieldRole, roomNumber);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        roomArea = new QLineEdit(layoutWidget_2);
        roomArea->setObjectName("roomArea");

        formLayout->setWidget(1, QFormLayout::FieldRole, roomArea);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        addRoomBut = new QPushButton(layoutWidget_2);
        addRoomBut->setObjectName("addRoomBut");

        formLayout->setWidget(3, QFormLayout::SpanningRole, addRoomBut);

        roomPrice = new QLineEdit(layoutWidget_2);
        roomPrice->setObjectName("roomPrice");

        formLayout->setWidget(2, QFormLayout::FieldRole, roomPrice);

        label_6 = new QLabel(rooms);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(520, 30, 101, 20));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(rooms);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(532, 290, 81, 20));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(rooms);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(451, 320, 251, 66));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        choseRoomDelete = new QComboBox(layoutWidget);
        choseRoomDelete->setObjectName("choseRoomDelete");

        verticalLayout->addWidget(choseRoomDelete);

        choseRoomDeleteBut = new QPushButton(layoutWidget);
        choseRoomDeleteBut->setObjectName("choseRoomDeleteBut");

        verticalLayout->addWidget(choseRoomDeleteBut);

        stackedWidget->addWidget(rooms);
        money = new QWidget();
        money->setObjectName("money");
        tabWidget_choose = new QTabWidget(money);
        tabWidget_choose->setObjectName("tabWidget_choose");
        tabWidget_choose->setGeometry(QRect(34, 110, 671, 411));
        moneyForEachCoach = new QWidget();
        moneyForEachCoach->setObjectName("moneyForEachCoach");
        widget_2 = new QWidget(moneyForEachCoach);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(-1, 49, 671, 321));
        gridLayoutWidget_2 = new QWidget(widget_2);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(-1, -1, 671, 331));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        coachesmoneyTableview = new QTableView(gridLayoutWidget_2);
        coachesmoneyTableview->setObjectName("coachesmoneyTableview");

        gridLayout->addWidget(coachesmoneyTableview, 0, 0, 1, 1);

        layoutWidget1 = new QWidget(moneyForEachCoach);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 10, 641, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");

        horizontalLayout->addWidget(label_8);

        searchCoachMoney = new QLineEdit(layoutWidget1);
        searchCoachMoney->setObjectName("searchCoachMoney");

        horizontalLayout->addWidget(searchCoachMoney);

        searchCoachMoneyBut = new QPushButton(layoutWidget1);
        searchCoachMoneyBut->setObjectName("searchCoachMoneyBut");

        horizontalLayout->addWidget(searchCoachMoneyBut);

        tabWidget_choose->addTab(moneyForEachCoach, QString());
        allMoney = new QWidget();
        allMoney->setObjectName("allMoney");
        allSchoolMoneyOutput = new QLabel(allMoney);
        allSchoolMoneyOutput->setObjectName("allSchoolMoneyOutput");
        allSchoolMoneyOutput->setGeometry(QRect(10, 10, 651, 351));
        tabWidget_choose->addTab(allMoney, QString());
        widget2 = new QWidget(money);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(140, 10, 541, 91));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_4 = new QLabel(widget2);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(widget2);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_5);

        startDate = new QDateEdit(widget2);
        startDate->setObjectName("startDate");
        startDate->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(3, 0, 1)));
        startDate->setTime(QTime(3, 0, 1));

        verticalLayout_3->addWidget(startDate);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_7 = new QLabel(widget2);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_7);

        endDate = new QDateEdit(widget2);
        endDate->setObjectName("endDate");
        endDate->setDateTime(QDateTime(QDate(2025, 1, 1), QTime(3, 0, 1)));
        endDate->setTime(QTime(3, 0, 1));

        verticalLayout_4->addWidget(endDate);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_6);

        dateBut = new QPushButton(widget2);
        dateBut->setObjectName("dateBut");
        dateBut->setMaximumSize(QSize(150, 30));

        horizontalLayout_3->addWidget(dateBut);

        stackedWidget->addWidget(money);
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);

        retranslateUi(DirectorsInterface);

        stackedWidget->setCurrentIndex(2);
        tabWidget_choose->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DirectorsInterface);
    } // setupUi

    void retranslateUi(QWidget *DirectorsInterface)
    {
        DirectorsInterface->setWindowTitle(QCoreApplication::translate("DirectorsInterface", "Form", nullptr));
        sheduleBut->setText(QCoreApplication::translate("DirectorsInterface", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        roomsBut->setText(QCoreApplication::translate("DirectorsInterface", "\320\227\320\260\320\273\321\213", nullptr));
        moneyBut->setText(QCoreApplication::translate("DirectorsInterface", "\320\227\320\260\321\200\320\260\320\261\320\276\321\202\320\276\320\272", nullptr));
        label_21->setText(QCoreApplication::translate("DirectorsInterface", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\273\320\260", nullptr));
        label_22->setText(QCoreApplication::translate("DirectorsInterface", "\320\224\320\265\320\275\321\214 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        label_23->setText(QCoreApplication::translate("DirectorsInterface", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\275\321\217\321\202\320\270\321\217", nullptr));
        addLessonBut->setText(QCoreApplication::translate("DirectorsInterface", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_24->setText(QCoreApplication::translate("DirectorsInterface", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_10->setText(QCoreApplication::translate("DirectorsInterface", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\275\321\217\321\202\320\270\320\265", nullptr));
        choseLessonDeleteBut->setText(QCoreApplication::translate("DirectorsInterface", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_11->setText(QCoreApplication::translate("DirectorsInterface", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\275\321\217\321\202\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("DirectorsInterface", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("DirectorsInterface", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("DirectorsInterface", "\320\246\320\265\320\275\320\260", nullptr));
        addRoomBut->setText(QCoreApplication::translate("DirectorsInterface", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("DirectorsInterface", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\273", nullptr));
        label_9->setText(QCoreApplication::translate("DirectorsInterface", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\273", nullptr));
        choseRoomDeleteBut->setText(QCoreApplication::translate("DirectorsInterface", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("DirectorsInterface", "\320\237\320\276\320\270\321\201\320\272:", nullptr));
        searchCoachMoneyBut->setText(QCoreApplication::translate("DirectorsInterface", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        tabWidget_choose->setTabText(tabWidget_choose->indexOf(moneyForEachCoach), QCoreApplication::translate("DirectorsInterface", "\320\237\320\276 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217\320\274", nullptr));
        allSchoolMoneyOutput->setText(QString());
        tabWidget_choose->setTabText(tabWidget_choose->indexOf(allMoney), QCoreApplication::translate("DirectorsInterface", "\320\222\321\201\320\265\320\263\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("DirectorsInterface", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_5->setText(QCoreApplication::translate("DirectorsInterface", "\320\235\320\260\321\207\320\260\320\273\320\276", nullptr));
        label_7->setText(QCoreApplication::translate("DirectorsInterface", "\320\232\320\276\320\275\320\265\321\206", nullptr));
        dateBut->setText(QCoreApplication::translate("DirectorsInterface", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DirectorsInterface: public Ui_DirectorsInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIRECTORSINTERFACE_H

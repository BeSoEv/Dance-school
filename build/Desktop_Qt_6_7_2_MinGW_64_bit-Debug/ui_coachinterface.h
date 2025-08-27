/********************************************************************************
** Form generated from reading UI file 'coachinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COACHINTERFACE_H
#define UI_COACHINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoachInterface
{
public:
    QWidget *widget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *applicationsOfLessonsBut;
    QPushButton *futureLessonsBut;
    QPushButton *historyOfLessonsBut;
    QPushButton *moneyBut;
    QStackedWidget *stackedWidget;
    QWidget *applicationsOfLessons;
    QWidget *widget_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTableView *coachApplicationsView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *acceptApplicationBut;
    QPushButton *rejectApplicationBut;
    QWidget *futureLessons;
    QTableView *coachLessonView;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *endLessonBut;
    QPushButton *cancelLessonBut;
    QWidget *historyOfLessons;
    QTableView *coachHistoryLessons;
    QWidget *money;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QDateEdit *coachStartDate;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QDateEdit *coachEndDate;
    QPushButton *coachDateBut;
    QLineEdit *displayCoachMoney;

    void setupUi(QWidget *CoachInterface)
    {
        if (CoachInterface->objectName().isEmpty())
            CoachInterface->setObjectName("CoachInterface");
        CoachInterface->resize(911, 563);
        widget = new QWidget(CoachInterface);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(1, 1, 181, 561));
        widget1 = new QWidget(widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 100, 165, 139));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        applicationsOfLessonsBut = new QPushButton(widget1);
        applicationsOfLessonsBut->setObjectName("applicationsOfLessonsBut");

        verticalLayout_3->addWidget(applicationsOfLessonsBut);

        futureLessonsBut = new QPushButton(widget1);
        futureLessonsBut->setObjectName("futureLessonsBut");

        verticalLayout_3->addWidget(futureLessonsBut);

        historyOfLessonsBut = new QPushButton(widget1);
        historyOfLessonsBut->setObjectName("historyOfLessonsBut");

        verticalLayout_3->addWidget(historyOfLessonsBut);

        moneyBut = new QPushButton(widget1);
        moneyBut->setObjectName("moneyBut");

        verticalLayout_3->addWidget(moneyBut);

        stackedWidget = new QStackedWidget(CoachInterface);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(180, 10, 721, 551));
        applicationsOfLessons = new QWidget();
        applicationsOfLessons->setObjectName("applicationsOfLessons");
        widget_2 = new QWidget(applicationsOfLessons);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(-20, 40, 611, 471));
        gridLayoutWidget = new QWidget(widget_2);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(39, -1, 571, 471));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        coachApplicationsView = new QTableView(gridLayoutWidget);
        coachApplicationsView->setObjectName("coachApplicationsView");

        gridLayout->addWidget(coachApplicationsView, 0, 0, 1, 1);

        layoutWidget = new QWidget(applicationsOfLessons);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(610, 240, 84, 67));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        acceptApplicationBut = new QPushButton(layoutWidget);
        acceptApplicationBut->setObjectName("acceptApplicationBut");

        verticalLayout->addWidget(acceptApplicationBut);

        rejectApplicationBut = new QPushButton(layoutWidget);
        rejectApplicationBut->setObjectName("rejectApplicationBut");

        verticalLayout->addWidget(rejectApplicationBut);

        stackedWidget->addWidget(applicationsOfLessons);
        futureLessons = new QWidget();
        futureLessons->setObjectName("futureLessons");
        coachLessonView = new QTableView(futureLessons);
        coachLessonView->setObjectName("coachLessonView");
        coachLessonView->setGeometry(QRect(30, 40, 569, 469));
        layoutWidget1 = new QWidget(futureLessons);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(620, 240, 87, 67));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        endLessonBut = new QPushButton(layoutWidget1);
        endLessonBut->setObjectName("endLessonBut");

        verticalLayout_2->addWidget(endLessonBut);

        cancelLessonBut = new QPushButton(layoutWidget1);
        cancelLessonBut->setObjectName("cancelLessonBut");

        verticalLayout_2->addWidget(cancelLessonBut);

        stackedWidget->addWidget(futureLessons);
        historyOfLessons = new QWidget();
        historyOfLessons->setObjectName("historyOfLessons");
        coachHistoryLessons = new QTableView(historyOfLessons);
        coachHistoryLessons->setObjectName("coachHistoryLessons");
        coachHistoryLessons->setGeometry(QRect(70, 30, 569, 469));
        stackedWidget->addWidget(historyOfLessons);
        money = new QWidget();
        money->setObjectName("money");
        widget2 = new QWidget(money);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(100, 40, 521, 198));
        verticalLayout_7 = new QVBoxLayout(widget2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_4 = new QLabel(widget2);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_5 = new QLabel(widget2);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        coachStartDate = new QDateEdit(widget2);
        coachStartDate->setObjectName("coachStartDate");
        coachStartDate->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(3, 0, 1)));
        coachStartDate->setTime(QTime(3, 0, 1));

        verticalLayout_4->addWidget(coachStartDate);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_7 = new QLabel(widget2);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_7);

        coachEndDate = new QDateEdit(widget2);
        coachEndDate->setObjectName("coachEndDate");
        coachEndDate->setDateTime(QDateTime(QDate(2025, 1, 1), QTime(3, 0, 1)));
        coachEndDate->setTime(QTime(3, 0, 1));

        verticalLayout_5->addWidget(coachEndDate);


        horizontalLayout->addLayout(verticalLayout_5);

        coachDateBut = new QPushButton(widget2);
        coachDateBut->setObjectName("coachDateBut");
        coachDateBut->setMaximumSize(QSize(150, 30));

        horizontalLayout->addWidget(coachDateBut);


        verticalLayout_6->addLayout(horizontalLayout);


        verticalLayout_7->addLayout(verticalLayout_6);

        displayCoachMoney = new QLineEdit(widget2);
        displayCoachMoney->setObjectName("displayCoachMoney");
        displayCoachMoney->setMinimumSize(QSize(0, 100));
        displayCoachMoney->setAlignment(Qt::AlignmentFlag::AlignCenter);
        displayCoachMoney->setReadOnly(true);

        verticalLayout_7->addWidget(displayCoachMoney);

        stackedWidget->addWidget(money);

        retranslateUi(CoachInterface);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(CoachInterface);
    } // setupUi

    void retranslateUi(QWidget *CoachInterface)
    {
        CoachInterface->setWindowTitle(QCoreApplication::translate("CoachInterface", "Form", nullptr));
        applicationsOfLessonsBut->setText(QCoreApplication::translate("CoachInterface", "\320\227\320\260\321\217\320\262\320\272\320\270", nullptr));
        futureLessonsBut->setText(QCoreApplication::translate("CoachInterface", "\320\237\321\200\320\265\320\264\321\201\321\202\320\276\321\217\321\211\320\270\320\265 \320\267\320\260\320\275\321\217\321\202\320\270\321\217", nullptr));
        historyOfLessonsBut->setText(QCoreApplication::translate("CoachInterface", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\267\320\260\320\275\321\217\321\202\320\270\320\271", nullptr));
        moneyBut->setText(QCoreApplication::translate("CoachInterface", "\320\227\320\260\321\200\320\260\320\261\320\276\321\202\320\276\320\272", nullptr));
        acceptApplicationBut->setText(QCoreApplication::translate("CoachInterface", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        rejectApplicationBut->setText(QCoreApplication::translate("CoachInterface", "\320\236\321\202\320\272\320\273\320\276\320\275\320\270\321\202\321\214", nullptr));
        endLessonBut->setText(QCoreApplication::translate("CoachInterface", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214", nullptr));
        cancelLessonBut->setText(QCoreApplication::translate("CoachInterface", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("CoachInterface", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_5->setText(QCoreApplication::translate("CoachInterface", "\320\235\320\260\321\207\320\260\320\273\320\276", nullptr));
        label_7->setText(QCoreApplication::translate("CoachInterface", "\320\232\320\276\320\275\320\265\321\206", nullptr));
        coachDateBut->setText(QCoreApplication::translate("CoachInterface", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoachInterface: public Ui_CoachInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COACHINTERFACE_H

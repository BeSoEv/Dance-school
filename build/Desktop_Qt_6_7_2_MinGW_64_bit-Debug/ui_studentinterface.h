/********************************************************************************
** Form generated from reading UI file 'studentinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTINTERFACE_H
#define UI_STUDENTINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentInterface
{
public:
    QWidget *widget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *signLessonBut;
    QPushButton *futureLessonBut;
    QPushButton *applicationsBut;
    QPushButton *historyBut;
    QStackedWidget *stackedWidget;
    QWidget *signLesson;
    QCalendarWidget *calendarWidget;
    QWidget *widget_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTableView *studentFinishSignView;
    QPushButton *studentFinishSignBut;
    QWidget *futureLesson;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *studentCancelLessonBut;
    QTableView *studentLessonView;
    QWidget *applications;
    QTableView *studentAllApplicationsview;
    QWidget *history;
    QTableView *studentHistory;

    void setupUi(QWidget *StudentInterface)
    {
        if (StudentInterface->objectName().isEmpty())
            StudentInterface->setObjectName("StudentInterface");
        StudentInterface->resize(901, 562);
        widget = new QWidget(StudentInterface);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 181, 561));
        widget1 = new QWidget(widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 100, 165, 139));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        signLessonBut = new QPushButton(widget1);
        signLessonBut->setObjectName("signLessonBut");

        verticalLayout->addWidget(signLessonBut);

        futureLessonBut = new QPushButton(widget1);
        futureLessonBut->setObjectName("futureLessonBut");

        verticalLayout->addWidget(futureLessonBut);

        applicationsBut = new QPushButton(widget1);
        applicationsBut->setObjectName("applicationsBut");

        verticalLayout->addWidget(applicationsBut);

        historyBut = new QPushButton(widget1);
        historyBut->setObjectName("historyBut");

        verticalLayout->addWidget(historyBut);

        stackedWidget = new QStackedWidget(StudentInterface);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(189, -1, 711, 561));
        signLesson = new QWidget();
        signLesson->setObjectName("signLesson");
        calendarWidget = new QCalendarWidget(signLesson);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(160, 10, 341, 211));
        widget_2 = new QWidget(signLesson);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 230, 611, 331));
        gridLayoutWidget = new QWidget(widget_2);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(-1, -1, 611, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        studentFinishSignView = new QTableView(gridLayoutWidget);
        studentFinishSignView->setObjectName("studentFinishSignView");

        gridLayout->addWidget(studentFinishSignView, 0, 0, 1, 1);

        studentFinishSignBut = new QPushButton(signLesson);
        studentFinishSignBut->setObjectName("studentFinishSignBut");
        studentFinishSignBut->setGeometry(QRect(620, 370, 83, 29));
        stackedWidget->addWidget(signLesson);
        futureLesson = new QWidget();
        futureLesson->setObjectName("futureLesson");
        layoutWidget = new QWidget(futureLesson);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(620, 240, 87, 67));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        studentCancelLessonBut = new QPushButton(layoutWidget);
        studentCancelLessonBut->setObjectName("studentCancelLessonBut");

        verticalLayout_2->addWidget(studentCancelLessonBut);

        studentLessonView = new QTableView(futureLesson);
        studentLessonView->setObjectName("studentLessonView");
        studentLessonView->setGeometry(QRect(30, 40, 569, 469));
        stackedWidget->addWidget(futureLesson);
        applications = new QWidget();
        applications->setObjectName("applications");
        studentAllApplicationsview = new QTableView(applications);
        studentAllApplicationsview->setObjectName("studentAllApplicationsview");
        studentAllApplicationsview->setGeometry(QRect(60, 50, 569, 469));
        stackedWidget->addWidget(applications);
        history = new QWidget();
        history->setObjectName("history");
        studentHistory = new QTableView(history);
        studentHistory->setObjectName("studentHistory");
        studentHistory->setGeometry(QRect(60, 40, 569, 469));
        stackedWidget->addWidget(history);

        retranslateUi(StudentInterface);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StudentInterface);
    } // setupUi

    void retranslateUi(QWidget *StudentInterface)
    {
        StudentInterface->setWindowTitle(QCoreApplication::translate("StudentInterface", "Form", nullptr));
        signLessonBut->setText(QCoreApplication::translate("StudentInterface", "\320\227\320\260\320\277\320\270\321\201\321\214 \320\275\320\260 \320\267\320\260\320\275\321\217\321\202\320\270\320\265", nullptr));
        futureLessonBut->setText(QCoreApplication::translate("StudentInterface", "\320\237\321\200\320\265\320\264\321\201\321\202\320\276\321\217\321\211\320\270\320\265 \320\267\320\260\320\275\321\217\321\202\320\270\321\217", nullptr));
        applicationsBut->setText(QCoreApplication::translate("StudentInterface", "\320\227\320\260\321\217\320\262\320\272\320\270", nullptr));
        historyBut->setText(QCoreApplication::translate("StudentInterface", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\267\320\260\320\275\321\217\321\202\320\270\320\271", nullptr));
        studentFinishSignBut->setText(QCoreApplication::translate("StudentInterface", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214\321\201\321\217", nullptr));
        studentCancelLessonBut->setText(QCoreApplication::translate("StudentInterface", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentInterface: public Ui_StudentInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTINTERFACE_H

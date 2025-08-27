#ifndef COACHINTERFACE_H
#define COACHINTERFACE_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include <QMessageBox>
#include "databasemanager.h"
#include <QSqlQueryModel>
#include <QDate>

namespace Ui {
class CoachInterface;
}

class CoachInterface : public QWidget
{
    Q_OBJECT

public:
    explicit CoachInterface(QWidget *parent = nullptr);
    QString GetLogin() const;
    void SetLogin(QString p_login);
    ~CoachInterface();

private slots:
    void on_applicationsOfLessonsBut_clicked();

    void on_futureLessonsBut_clicked();

    void on_historyOfLessonsBut_clicked();

    void on_moneyBut_clicked();

    void on_acceptApplicationBut_clicked();

    void on_coachApplicationsView_clicked(const QModelIndex &index);

    void on_rejectApplicationBut_clicked();

    void on_endLessonBut_clicked();

    void on_cancelLessonBut_clicked();


    void on_coachLessonView_clicked(const QModelIndex &index);

    void on_coachDateBut_clicked();

private:
    Ui::CoachInterface *ui;
    QString login;
    int lesson_id;
    QString date;
};

#endif // COACHINTERFACE_H

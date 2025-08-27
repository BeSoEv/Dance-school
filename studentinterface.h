#ifndef STUDENTINTERFACE_H
#define STUDENTINTERFACE_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include <QMessageBox>
#include "databasemanager.h"
#include <QSqlQueryModel>

namespace Ui {
class StudentInterface;
}

class StudentInterface : public QWidget
{
    Q_OBJECT

public:
    explicit StudentInterface(QWidget *parent = nullptr);
    QString GetLogin() const;
    void SetLogin(QString p_login);
    ~StudentInterface();

private slots:
    void on_signLessonBut_clicked();

    void on_futureLessonBut_clicked();

    void on_applicationsBut_clicked();

    void on_historyBut_clicked();

    void on_calendarWidget_clicked(const QDate &date);

    void on_studentFinishSignView_clicked(const QModelIndex &index);

    void on_studentFinishSignBut_clicked();

private:
    Ui::StudentInterface *ui;
    QString login;
    int lesson_id;
    QString date_cur;
};

#endif // STUDENTINTERFACE_H

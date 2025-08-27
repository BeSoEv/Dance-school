#ifndef DIRECTORSINTERFACE_H
#define DIRECTORSINTERFACE_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include <QMessageBox>
#include "databasemanager.h"
#include <QSqlQueryModel>

namespace Ui {
class DirectorsInterface;
}

class DirectorsInterface : public QWidget
{
    Q_OBJECT

public:
    explicit DirectorsInterface(QWidget *parent = nullptr);
    QString GetSchool() const;
    void SetSchool(QString p_school);
    ~DirectorsInterface();

private slots:
    void on_sheduleBut_clicked();

    void on_roomsBut_clicked();

    void on_moneyBut_clicked();

    void on_dateBut_clicked();

    void on_searchCoachMoneyBut_clicked();

    void on_addRoomBut_clicked();

    void on_choseRoomDeleteBut_clicked();

    void on_addLessonBut_clicked();

    void on_choseLessonDeleteBut_clicked();

private:
    Ui::DirectorsInterface *ui;
    QString school_name;
};

#endif // DIRECTORSINTERFACE_H

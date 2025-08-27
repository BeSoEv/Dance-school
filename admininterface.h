#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include <QMessageBox>
#include "databasemanager.h"
#include <QSqlQueryModel>

namespace Ui {
class AdminInterface;
}

class AdminInterface : public QWidget
{
    Q_OBJECT

public:
    explicit AdminInterface(QWidget *parent = nullptr);
    ~AdminInterface();

private slots:
    void on_moneyAdminBut_clicked();

    void on_filialsBut_clicked();

    void on_openFilialBut_clicked();

    void on_closeFilialBut_clicked();

    void on_addDirBut_clicked();

    void on_addButton_clicked();

    void on_addSchoolBut_clicked();

    void on_closeSchoolBut_clicked();

    void on_dateBut_clicked();

    void on_searchSchoolMoneyBut_clicked();

private:
    Ui::AdminInterface *ui;
};

#endif // ADMININTERFACE_H

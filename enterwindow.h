#ifndef ENTERWINDOW_H
#define ENTERWINDOW_H

#include <QDialog>
#include <QStackedWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include <QMessageBox>
#include "studentinterface.h"
#include "coachinterface.h"
#include "directorsinterface.h"
#include "admininterface.h"
#include "databasemanager.h"

namespace Ui {
class EnterWindow;
}

class EnterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EnterWindow(QWidget *parent = nullptr);
    void switchToWidget(int index);
    QString GetRole() const;
    void SetRole(QString p_role);
    ~EnterWindow();

private slots:
    void on_cancelButton_clicked();

    void on_registerSC_clicked();

    void on_backButton_clicked();

    void on_cancelButton_2_clicked();

    void on_finishRegButton_clicked();

    void on_enterSC_clicked();

    void on_enterDirButton_clicked();

private:
    Ui::EnterWindow *ui;
    QString role;
    StudentInterface *windowStudent = nullptr;
    CoachInterface *windowCoach = nullptr;
    DirectorsInterface *windowDirector = nullptr;
    AdminInterface *windowAdmin = nullptr;
    QString school;
};

#endif // ENTERWINDOW_H

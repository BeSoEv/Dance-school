#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <enterwindow.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QSqlDatabase db;
    ~MainWindow();

private slots:



    void on_choiseRoleButton_clicked();

    void on_cancelButton_2_clicked();

    void on_cancelButton_clicked();

    void on_registerStudentButton_clicked();

    void on_backButton_clicked();

    void on_enterStudentButton_clicked();

private:
    Ui::MainWindow *ui;
    EnterWindow *windowEnter = nullptr;
};
#endif // MAINWINDOW_H

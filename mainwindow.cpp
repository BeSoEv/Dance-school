#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "databasemanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Dance school");
    ui->stackedWidget->setCurrentIndex(0);

    // db.setHostName("127.0.0.1");
    // db.setPort(5432);
    // db.setDatabaseName("dance_school");
    // db.setUserName("postgres");
    // db.setPassword("7nekva8b");

    if (!DatabaseManager::instance().connectToDatabase("172.20.10.2", "dance_school", "postgres", "7nekva8b")){
        //qDebug() << DatabaseManager::instance().getDatabase().lastError().text();
        QMessageBox::warning(this, "Ошибка", DatabaseManager::instance().getDatabase().lastError().text());

    }
    else{
        qDebug() << "opened";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    if (windowEnter)delete windowEnter;
}

void MainWindow::on_choiseRoleButton_clicked()
{
    windowEnter = new EnterWindow(this);
    windowEnter->SetRole(ui->choiseRole->currentText());
    if(ui->choiseRole->currentText() == tr("Ученик") or ui->choiseRole->currentText() == tr("Тренер")){
        windowEnter->show();
    }
    else{
        windowEnter->switchToWidget(2);
        windowEnter->show();
    }
}


void MainWindow::on_cancelButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_cancelButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_registerStudentButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_enterStudentButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


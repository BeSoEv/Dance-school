#include "enterwindow.h"
#include "ui_enterwindow.h"


EnterWindow::EnterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EnterWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    setWindowTitle("вход");
}

void EnterWindow::switchToWidget(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}

QString EnterWindow::GetRole() const
{
    return role;
}

void EnterWindow::SetRole(QString p_role)
{
    role = p_role;
}



EnterWindow::~EnterWindow()
{
    delete ui;
    delete windowStudent;
    delete windowCoach;
    delete windowDirector;
    delete windowAdmin;
}

void EnterWindow::on_cancelButton_clicked()
{
    hide();
}


void EnterWindow::on_registerSC_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void EnterWindow::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void EnterWindow::on_cancelButton_2_clicked()
{
    hide();
}


void EnterWindow::on_finishRegButton_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    int count = 0;
    QString command;
    if (db.isOpen()) {
        QSqlQuery query(db);
        QString login = ui->loginReg->text();
        //command = QString("SELECT COUNT(*) FROM students WHERE login = '%1'").arg(login);
        if(role == tr("Ученик")){
            query.prepare("SELECT COUNT(*) FROM students WHERE login = :login");
            query.bindValue(":login", login);
        }
        else{
            query.prepare("SELECT COUNT(*) FROM coaches WHERE login = :login");
            query.bindValue(":login", login);
        }
        if (!query.exec()) {
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }

        if (query.next()) {
            count = query.value(0).toInt();
        }
    }
    else {
        if(!db.open()){
            qDebug() << db.lastError().text();
            return;
        }
    }
    if (count != 0){
        QMessageBox::warning(this, "Предупреждение", "Пользователь с таким логином уже существует");
    }
    else if(ui->passReg->text() != ui->pass2Reg->text()){
        QMessageBox::warning(this, "Предупреждение", "Пароли не совпадают");
    }
    else{
        if (db.isOpen()) {
            QSqlQuery query(db);
            QString name = ui->name1->text() + " " + ui->name2->text() + " " + ui->name3->text();
            QString login = ui->loginReg->text();
            QString password = ui->passReg->text();
            if(role == tr("Ученик")){
                query.prepare("INSERT INTO students VALUES (:name, :login, crypt(:password, gen_salt('bf')))");
                query.bindValue(":name", name);
                query.bindValue(":login", login);
                query.bindValue(":password", password);
            }
            else{
                query.prepare("INSERT INTO coaches VALUES (:name, :login, crypt(:password, gen_salt('bf')))");
                query.bindValue(":name", name);
                query.bindValue(":login", login);
                query.bindValue(":password", password);
            }

            if (query.exec()) {
                QMessageBox::information(this, "Завершение регистрации", "Вы успешно зарегистрированны!");
            }
            else {
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
            }
        }
        else {
            if(!db.open()){
                qDebug() << db.lastError().text();
                return;
            }
        }
    }


}


void EnterWindow::on_enterSC_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        QString login = ui->enterLog->text();
        QString password = ui->enterPass->text();

        if(role == tr("Ученик")){
            query.prepare("SELECT EXISTS (SELECT 1 FROM students WHERE login = :login AND password = crypt(:password, password))");
            query.bindValue(":password", password);
            query.bindValue(":login", login);
        }
        else{
            query.prepare("SELECT EXISTS (SELECT 1 FROM coaches WHERE login = :login AND password = crypt(:password, password))");
            query.bindValue(":password", password);
            query.bindValue(":login", login);
        }

        if (!query.exec()) {
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }

        if (query.next()) {
            if(query.value(0).toBool()){
                if(role == tr("Ученик")){
                    windowStudent = new StudentInterface();
                    windowStudent->SetLogin(login);
                    hide();
                    windowStudent->show();
                }
                else{
                    windowCoach = new CoachInterface();
                    windowCoach->SetLogin(login);
                    hide();
                    windowCoach->show();
                }
                //QMessageBox::information(this, "Завершение входа", "Вы успешно вошли");
            }
            else{
                QMessageBox::information(this, "Предупреждение", "Пользователя с таким логином не существует или пароль введен неверно");
            }
        }
    }
    else {
        if(!db.open()){
            qDebug() << db.lastError().text();
            return;
        }
    }
}


void EnterWindow::on_enterDirButton_clicked()
{
    QString admin_login = "baumanhero@yandex.ru";
    QString admin_password = "12septemberbmstu";
    QString login = ui->logDir->text();
    QString password = ui->passDir->text();
    if(role == "Админ"){
        if (login == admin_login && password == admin_password){
            windowAdmin = new AdminInterface();
            hide();
            windowAdmin->show();
        }
        else{
            QMessageBox::information(this, "Предупреждение", "Пользователя с таким логином не существует или пароль введен неверно");
        }
    }
    else{
        QSqlDatabase db = DatabaseManager::instance().getDatabase();
        if (db.isOpen()) {
            QSqlQuery query(db);
            query.prepare("SELECT EXISTS (SELECT 1 FROM directors WHERE login = :login AND password = crypt(:password, password))");
            query.bindValue(":password", password);
            query.bindValue(":login", login);

            if (!query.exec()) {
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
            }

            if (query.next()) {
                //qDebug() << query.value(0).toBool();
                if(query.value(0).toBool()){
                    query.prepare("SELECT s.name FROM schools s JOIN directors d ON s.director_login=d.login WHERE d.login=:login");
                    query.bindValue(":login", login);
                    if (query.exec()) {
                        while (query.next()) {
                            school = query.value(0).toString();
                        }
                    }
                    else {
                        QMessageBox::warning(this, "Ошибка", query.lastError().text());
                    }
                    windowDirector = new DirectorsInterface();
                    windowDirector->SetSchool(school);
                    hide();
                    windowDirector->show();
                }
                else{
                    QMessageBox::information(this, "Предупреждение", "Пользователя с таким логином не существует или пароль введен неверно");
                }
            }
        }
        else {
            if(!db.open()){
                qDebug() << db.lastError().text();
                return;
            }
        }
    }

}


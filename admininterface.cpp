#include "admininterface.h"
#include "ui_admininterface.h"

AdminInterface::AdminInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminInterface)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(5);
    setWindowTitle("student");
}

AdminInterface::~AdminInterface()
{
    delete ui;
}

void AdminInterface::on_moneyAdminBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QString start_date = ui->startDate->text();
    QString end_date = ui->endDate->text();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT s.school_name, COALESCE(SUM(CASE WHEN a.status = 'Завершена' THEN r.price ELSE 0 END) * 0.09, 0) AS earning FROM schedule s LEFT JOIN  applications a ON s.lesson_id = a.lesson_id AND date BETWEEN :start_date AND :end_date JOIN rooms r ON s.school_name = r.school_name AND s.room_number = r.number GROUP BY s.school_name;");
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->schoolsmoneyTableview->setModel(model);
            ui->schoolsmoneyTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->schoolsmoneyTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->schoolsmoneyTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

        }
        else{
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT (sum(price)*0.09) as total_earnings FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE date BETWEEN :start_date AND :end_date AND a.status='Завершена';");
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        if (query.exec()){
            while (query.next()) {
                QString total_money = query.value(0).toString();
                ui->allMoneyOutput->setText(total_money);
            }
        }
        else{
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


void AdminInterface::on_filialsBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        QString command = "SELECT * FROM schools";
        if (query.exec(command)){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->tableView->setModel(model);
            ui->tableView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

        }
        else{
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


void AdminInterface::on_openFilialBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        QString command = "SELECT login FROM directors";
        if (query.exec(command)) {
            ui->choseDir->clear();
            ui->choseDir->addItem("...");
            // Заполняем выпадающий список
            while (query.next()) {
                QString dirLogin = query.value(0).toString();
                ui->choseDir->addItem(dirLogin);
            }
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


void AdminInterface::on_closeFilialBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        QString command = "SELECT name FROM schools";

        if (query.exec(command)) {
            ui->choseSchoolClose->clear();
            // Заполняем выпадающий список
            while (query.next()) {
                QString schoolName = query.value(0).toString();
                ui->choseSchoolClose->addItem(schoolName);
            }
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



void AdminInterface::on_addDirBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void AdminInterface::on_addButton_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        QString name = ui->name1->text() + " " + ui->name2->text() + " " + ui->name3->text();
        QString login = ui->loginReg->text();
        QString password = ui->passReg->text();
        query.prepare("INSERT INTO directors VALUES (:name, :login, crypt(:password, gen_salt('bf')))");
        query.bindValue(":name", name);
        query.bindValue(":login", login);
        query.bindValue(":password", password);

        if (query.exec()) {
            QMessageBox::information(this, "Добавление директора", "Директор добавлен");
            ui->name1->clear();
            ui->name2->clear();
            ui->name3->clear();
            ui->loginReg->clear();
            ui->passReg->clear();
            ui->pass2Reg->clear();
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


void AdminInterface::on_addSchoolBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        QString name = ui->schoolName->text();
        QString address = ui->schoolAddress->text();
        QString director = ui->choseDir->currentText();
        query.prepare("INSERT INTO schools VALUES (:name, :address, :director)");
        query.bindValue(":name", name);
        query.bindValue(":address", address);
        query.bindValue(":director", director);

        if (query.exec()) {
            QMessageBox::information(this, "Добавление школы", "Школа добавлена");
            ui->schoolName->clear();
            ui->schoolAddress->clear();
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


void AdminInterface::on_closeSchoolBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        QString name = ui->choseSchoolClose->currentText();
        query.prepare("DELETE FROM schools WHERE name=:name");
        query.bindValue(":name", name);
        if (query.exec()) {
            QMessageBox::information(this, "Удаление школы", "Школа удалена");
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



void AdminInterface::on_dateBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QString start_date = ui->startDate->text();
    QString end_date = ui->endDate->text();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT s.school_name, COALESCE(SUM(CASE WHEN a.status = 'Завершена' THEN r.price ELSE 0 END) * 0.09, 0) AS earning FROM schedule s LEFT JOIN  applications a ON s.lesson_id = a.lesson_id AND date BETWEEN :start_date AND :end_date JOIN rooms r ON s.school_name = r.school_name AND s.room_number = r.number GROUP BY s.school_name;");
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->schoolsmoneyTableview->setModel(model);
            ui->schoolsmoneyTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->schoolsmoneyTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->schoolsmoneyTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

        }
        else{
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT (sum(price)*0.09) as total_earnings FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE date BETWEEN :start_date AND :end_date AND a.status='Завершена';");
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        if (query.exec()){
            while (query.next()) {
                QString total_money = query.value(0).toString();
                ui->allMoneyOutput->setText(total_money);
            }
        }
        else{
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


void AdminInterface::on_searchSchoolMoneyBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QString start_date = ui->startDate->text();
    QString end_date = ui->endDate->text();
    QString school_name = ui->searchSchoolMoney->text();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT s.school_name, (sum(price)*0.09) as earning FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE school_name=:school_name AND (date BETWEEN :start_date AND :end_date) AND a.status='Завершена' GROUP BY s.school_name;");
        query.bindValue(":school_name", school_name);
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->schoolsmoneyTableview->setModel(model);
            ui->schoolsmoneyTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->schoolsmoneyTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->schoolsmoneyTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

        }
        else{
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


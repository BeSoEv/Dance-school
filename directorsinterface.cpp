#include "directorsinterface.h"
#include "ui_directorsinterface.h"

DirectorsInterface::DirectorsInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DirectorsInterface)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(3);
    setWindowTitle("директор");
}

QString DirectorsInterface::GetSchool() const
{
    return school_name;
}

void DirectorsInterface::SetSchool(QString p_school)
{
    school_name = p_school;
}

DirectorsInterface::~DirectorsInterface()
{
    delete ui;
}

void DirectorsInterface::on_sheduleBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT room_number, day_russian AS day_of_week, lesson_number, c.name FROM schedule s JOIN days_tr ON s.day_of_week = day_number JOIN coaches c ON c.login = s.coach_login WHERE school_name=:school_name");
        query.bindValue(":school_name", school_name);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->lessonsTableview->setModel(model);
            ui->lessonsTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->lessonsTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->lessonsTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

        }
        else{
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT number FROM rooms WHERE school_name=:school_name");
        query.bindValue(":school_name", school_name);
        if (query.exec()){
            ui->choseRoom->clear();
            ui->choseRoom->addItem("...");
            //Заполняем выпадающий список
            while (query.next()) {
                QString roomNumber = query.value(0).toString();
                ui->choseRoom->addItem(roomNumber);
            }
        }
        else {
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT day_russian FROM days_tr");
        if (query.exec()){
            ui->choseDay->clear();
            ui->choseDay->addItem("...");
            //Заполняем выпадающий список
            while (query.next()) {
                QString day = query.value(0).toString();
                ui->choseDay->addItem(day);
            }
        }
        else {
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT lesson_number FROM lesson_time");
        if (query.exec()){
            ui->choseLesson->clear();
            ui->choseLesson->addItem("...");
            //Заполняем выпадающий список
            while (query.next()) {
                QString lesson = query.value(0).toString();
                ui->choseLesson->addItem(lesson);
            }
        }
        else {
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT login FROM coaches");
        if (query.exec()){
            ui->choseCoach->clear();
            ui->choseCoach->addItem("...");
            //Заполняем выпадающий список
            while (query.next()) {
                QString coach = query.value(0).toString();
                ui->choseCoach->addItem(coach);
            }
        }
        else {
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT DISTINCT(room_number) FROM schedule WHERE school_name=:school_name");
        query.bindValue(":school_name", school_name);
        if (query.exec()){
            ui->choseLessonRoomDelete->clear();
            ui->choseLessonRoomDelete->addItem("...");
            //Заполняем выпадающий список
            while (query.next()) {
                QString roomNumber = query.value(0).toString();
                ui->choseLessonRoomDelete->addItem(roomNumber);
            }
        }
        else {
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT DISTINCT(day_of_week) FROM schedule WHERE school_name=:school_name");
        query.bindValue(":school_name", school_name);
        if (query.exec()){
            ui->choseLessonDayDelete->clear();
            ui->choseLessonDayDelete->addItem("...");
            //Заполняем выпадающий список
            while (query.next()) {
                QString day = query.value(0).toString();
                ui->choseLessonDayDelete->addItem(day);
            }
        }
        else {
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT DISTINCT(lesson_number) FROM schedule WHERE school_name=:school_name");
        query.bindValue(":school_name", school_name);
        if (query.exec()){
            ui->choseLessonNumberDelete->clear();
            ui->choseLessonNumberDelete->addItem("...");
            //Заполняем выпадающий список
            while (query.next()) {
                QString les_numer = query.value(0).toString();
                ui->choseLessonNumberDelete->addItem(les_numer);
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


void DirectorsInterface::on_roomsBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT number, area, price FROM rooms WHERE school_name=:school_name");
        query.bindValue(":school_name", school_name);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->roomsTableview->setModel(model);
            ui->roomsTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->roomsTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->roomsTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

        }
        else{
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT number FROM rooms WHERE school_name=:school_name");
        query.bindValue(":school_name", school_name);
        if (query.exec()){
            ui->choseRoomDelete->clear();
            // Заполняем выпадающий список
            ui->choseRoomDelete->addItem("...");
            while (query.next()) {
                QString roomNumber = query.value(0).toString();
                ui->choseRoomDelete->addItem(roomNumber);
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


void DirectorsInterface::on_moneyBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QString start_date = ui->startDate->text();
    QString end_date = ui->endDate->text();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT c.name, (sum(r.price)*0.51) as earnings FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN coaches c on s.coach_login=c.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE date BETWEEN :start_date AND :end_date AND s.school_name=:school AND a.status='Завершена' GROUP BY c.name;");
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        query.bindValue(":school", school_name);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->coachesmoneyTableview->setModel(model);
            ui->coachesmoneyTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->coachesmoneyTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->coachesmoneyTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

        }
        else{
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT (sum(r.price)*0.51) as total_earnings FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE date BETWEEN :start_date AND :end_date AND s.school_name=:school AND a.status='Завершена';");
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        query.bindValue(":school", school_name);
        if (query.exec()){
            while (query.next()) {
                QString total_money = query.value(0).toString();
                ui->allSchoolMoneyOutput->setText(total_money);
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


void DirectorsInterface::on_dateBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QString start_date = ui->startDate->text();
    QString end_date = ui->endDate->text();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT c.name, (sum(r.price)*0.51) as earnings FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN coaches c on s.coach_login=c.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE date BETWEEN :start_date AND :end_date AND s.school_name=:school AND a.status='Завершена' GROUP BY c.name;");
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        query.bindValue(":school", school_name);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->coachesmoneyTableview->setModel(model);
            ui->coachesmoneyTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->coachesmoneyTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->coachesmoneyTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

        }
        else{
            QMessageBox::warning(this, "Ошибка", query.lastError().text());
        }
        query.prepare("SELECT (sum(r.price)*0.51) as total_earnings FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE date BETWEEN :start_date AND :end_date AND s.school_name=:school AND a.status='Завершена';");
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        query.bindValue(":school", school_name);
        if (query.exec()){
            while (query.next()) {
                QString total_money = query.value(0).toString();
                ui->allSchoolMoneyOutput->setText(total_money);
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


void DirectorsInterface::on_searchCoachMoneyBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QString start_date = ui->startDate->text();
    QString end_date = ui->endDate->text();
    QString coach_login = ui->searchCoachMoney->text();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT c.name, (sum(r.price)*0.51) as earnings FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN coaches c ON s.coach_login=c.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE date BETWEEN :start_date AND :end_date AND s.school_name=:school AND c.login=:coach_login AND a.status='Завершена' GROUP BY c.name;");
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        query.bindValue(":school", school_name);
        query.bindValue(":coach_login", coach_login);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->coachesmoneyTableview->setModel(model);
            ui->coachesmoneyTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->coachesmoneyTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->coachesmoneyTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

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


void DirectorsInterface::on_addRoomBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        QVariant number = ui->roomNumber->text();
        QVariant area = ui->roomArea->text();
        QVariant price = ui->roomPrice->text();
        query.prepare("INSERT INTO rooms VALUES (:school_name, :number, :area, :price)");
        query.bindValue(":school_name", school_name);
        query.bindValue(":number", number.toInt());
        query.bindValue(":area", area.toInt());
        query.bindValue(":price", price.toInt());

        if (query.exec()) {
            QMessageBox::information(this, "Добавление зала", "Зал добавлен");
            ui->roomNumber->clear();
            ui->roomArea->clear();
            ui->roomPrice->clear();
            query.prepare("SELECT number, area, price FROM rooms WHERE school_name=:school_name");
            query.bindValue(":school_name", school_name);
            if (query.exec()){
                QSqlQueryModel *model = new QSqlQueryModel;
                model->setQuery(query);
                ui->roomsTableview->setModel(model);
                ui->roomsTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
                ui->roomsTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                ui->roomsTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                query.prepare("SELECT number FROM rooms WHERE school_name=:school_name");
                query.bindValue(":school_name", school_name);
                if (query.exec()){
                    ui->choseRoomDelete->clear();
                    // Заполняем выпадающий список
                    ui->choseRoomDelete->addItem("...");
                    while (query.next()) {
                        QString roomNumber = query.value(0).toString();
                        ui->choseRoomDelete->addItem(roomNumber);
                    }
                }
                else {
                    QMessageBox::warning(this, "Ошибка", query.lastError().text());
                }

            }
            else{
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
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


void DirectorsInterface::on_choseRoomDeleteBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        QVariant number = ui->choseRoomDelete->currentText();
        query.prepare("DELETE FROM rooms WHERE number=:number");
        query.bindValue(":number", number.toInt());
        if (query.exec()) {
            QMessageBox::information(this, "Удаление зала", "Зал удален");
            query.prepare("SELECT number, area, price FROM rooms WHERE school_name=:school_name");
            query.bindValue(":school_name", school_name);
            if (query.exec()){
                ui->choseRoomDelete->clear();
                QSqlQueryModel *model = new QSqlQueryModel;
                model->setQuery(query);
                ui->roomsTableview->setModel(model);
                ui->roomsTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
                ui->roomsTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                ui->roomsTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

            }
            else{
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
            }
            query.prepare("SELECT number FROM rooms WHERE school_name=:school_name");
            query.bindValue(":school_name", school_name);
            if (query.exec()){
                // Заполняем выпадающий список
                while (query.next()) {
                    QString roomNumber = query.value(0).toString();
                    ui->choseRoomDelete->addItem(roomNumber);
                }
            }
            else {
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
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


void DirectorsInterface::on_addLessonBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        QString room = ui->choseRoom->currentText();
        QString day = ui->choseDay->currentText();
        QString lesson = ui->choseLesson->currentText();
        QString coach = ui->choseCoach->currentText();
        query.prepare("INSERT INTO schedule(school_name, room_number, day_of_week, lesson_number, coach_login) VALUES (:school_name, :room_number, (SELECT day_number FROM days_tr WHERE day_russian=:day_of_week), :lesson_number, :coach_login)");
        query.bindValue(":school_name", school_name);
        query.bindValue(":room_number", room);
        query.bindValue(":day_of_week", day);
        query.bindValue(":lesson_number", lesson);
        query.bindValue(":coach_login", coach);

        if (query.exec()) {
            QMessageBox::information(this, "Добавление занятия", "Занятие добавлено");
            ui->choseRoom->clear();
            ui->choseDay->clear();
            ui->choseLesson->clear();
            ui->choseCoach->clear();

            query.prepare("SELECT room_number, day_russian AS day_of_week, lesson_number, c.name FROM schedule s JOIN days_tr ON s.day_of_week = day_number JOIN coaches c ON c.login = s.coach_login WHERE school_name=:school_name");
            query.bindValue(":school_name", school_name);
            if (query.exec()){
                QSqlQueryModel *model = new QSqlQueryModel;
                model->setQuery(query);
                ui->lessonsTableview->setModel(model);
                ui->lessonsTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
                ui->lessonsTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                ui->lessonsTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

            }
            else {
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
            }

            query.prepare("SELECT DISTINCT(room_number) FROM schedule WHERE school_name=:school_name");
            query.bindValue(":school_name", school_name);
            if (query.exec()){
                ui->choseLessonRoomDelete->clear();
                ui->choseLessonRoomDelete->addItem("...");
                //Заполняем выпадающий список
                while (query.next()) {
                    QString roomNumber = query.value(0).toString();
                    ui->choseLessonRoomDelete->addItem(roomNumber);
                }
            }
            else {
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
            }
            query.prepare("SELECT DISTINCT(day_of_week) FROM schedule WHERE school_name=:school_name");
            query.bindValue(":school_name", school_name);
            if (query.exec()){
                ui->choseLessonDayDelete->clear();
                ui->choseLessonDayDelete->addItem("...");
                //Заполняем выпадающий список
                while (query.next()) {
                    QString day = query.value(0).toString();
                    ui->choseLessonDayDelete->addItem(day);
                }
            }
            else {
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
            }
            query.prepare("SELECT DISTINCT(lesson_number) FROM schedule WHERE school_name=:school_name");
            query.bindValue(":school_name", school_name);
            if (query.exec()){
                ui->choseLessonNumberDelete->clear();
                ui->choseLessonNumberDelete->addItem("...");
                //Заполняем выпадающий список
                while (query.next()) {
                    QString les_numer = query.value(0).toString();
                    ui->choseLessonNumberDelete->addItem(les_numer);
                }
            }
            else {
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
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


void DirectorsInterface::on_choseLessonDeleteBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        QString room = ui->choseLessonRoomDelete->currentText();
        QString day = ui->choseLessonDayDelete->currentText();
        QString lesson = ui->choseLessonNumberDelete->currentText();
        query.prepare("DELETE FROM schedule WHERE school_name=:school_name AND room_number=:room AND day_of_week=:day AND lesson_number=:lesson");
        query.bindValue(":school_name", school_name);
        query.bindValue(":room", room);
        query.bindValue(":day", day);
        query.bindValue(":lesson", lesson);
        if (query.exec()) {
            QMessageBox::information(this, "Удаление занятия", "Занятие удалено");
            query.prepare("SELECT room_number, day_russian AS day_of_week, lesson_number, c.name FROM schedule s JOIN days_tr ON s.day_of_week = day_number JOIN coaches c ON c.login = s.coach_login WHERE school_name=:school_name");
            query.bindValue(":school_name", school_name);
            if (query.exec()){
                QSqlQueryModel *model = new QSqlQueryModel;
                model->setQuery(query);
                ui->lessonsTableview->setModel(model);
                ui->lessonsTableview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
                ui->lessonsTableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                ui->lessonsTableview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

            }
            else{
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
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


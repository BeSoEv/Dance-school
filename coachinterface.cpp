#include "coachinterface.h"
#include "ui_coachinterface.h"

CoachInterface::CoachInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CoachInterface)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    setWindowTitle("тренер");
}

QString CoachInterface::GetLogin() const
{
    return login;
}

void CoachInterface::SetLogin(QString p_login)
{
    login = p_login;
}

CoachInterface::~CoachInterface()
{
    delete ui;
}

void CoachInterface::on_applicationsOfLessonsBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT a.date, st.name as student_name, s.school_name, s.lesson_number, s.room_number, r.price FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN students st ON a.student_login=st.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE a.status='Создана' AND s.coach_login=:login GROUP BY a.date, st.name, s.school_name, s.room_number,s.lesson_number, r.price;");
        query.bindValue(":login", login);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->coachApplicationsView->setModel(model);
            ui->coachApplicationsView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->coachApplicationsView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->coachApplicationsView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            ui->coachApplicationsView->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->coachApplicationsView->setSelectionMode(QAbstractItemView::SingleSelection);

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


void CoachInterface::on_futureLessonsBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT a.date, st.name as student_name, s.school_name, s.lesson_number, s.room_number, r.price FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN students st ON a.student_login=st.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE a.status='Подтверждена' AND s.coach_login=:login GROUP BY a.date, st.name, s.school_name, s.room_number,s.lesson_number, r.price;");
        query.bindValue(":login", login);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->coachLessonView->setModel(model);
            ui->coachLessonView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->coachLessonView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->coachLessonView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            ui->coachLessonView->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->coachLessonView->setSelectionMode(QAbstractItemView::SingleSelection);

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


void CoachInterface::on_historyOfLessonsBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT a.date, st.name as student_name, s.school_name, s.lesson_number, s.room_number, r.price FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN students st ON a.student_login=st.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE a.status='Завершена' AND s.coach_login=:login GROUP BY a.date, st.name, s.school_name, s.room_number,s.lesson_number, r.price;");
        query.bindValue(":login", login);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->coachHistoryLessons->setModel(model);
            ui->coachHistoryLessons->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->coachHistoryLessons->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->coachHistoryLessons->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            ui->coachHistoryLessons->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->coachHistoryLessons->setSelectionMode(QAbstractItemView::SingleSelection);

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


void CoachInterface::on_moneyBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QString start_date = ui->coachStartDate->text();
    QString end_date = ui->coachEndDate->text();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT (sum(r.price)*0.4) as earnings FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN coaches c on s.coach_login=c.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE date BETWEEN :start_date AND :end_date AND c.login=:login AND a.status='Завершена';");
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        query.bindValue(":login", login);
        if (query.exec()){
            while (query.next()) {
                QString total_money = query.value(0).toString();
                ui->displayCoachMoney->setText(total_money);
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


void CoachInterface::on_acceptApplicationBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("UPDATE applications SET status='Подтверждена' WHERE lesson_id=:lesson_id AND date=:date;");
        query.bindValue(":lesson_id", lesson_id);
        query.bindValue(":date", date);
        if (query.exec()){
            QMessageBox::information(this, "Статус заявки", "Заявка принята");

            query.prepare("SELECT a.date, st.name as student_name, s.school_name, s.lesson_number, s.room_number, r.price FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN students st ON a.student_login=st.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE a.status='Создана' AND s.coach_login=:login GROUP BY a.date, st.name, s.school_name, s.room_number,s.lesson_number, r.price;");
            query.bindValue(":login", login);
            if (query.exec()){
                QSqlQueryModel *model = new QSqlQueryModel;
                model->setQuery(query);
                ui->coachApplicationsView->setModel(model);
                ui->coachApplicationsView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
                ui->coachApplicationsView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                ui->coachApplicationsView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                ui->coachApplicationsView->setSelectionBehavior(QAbstractItemView::SelectRows);
                ui->coachApplicationsView->setSelectionMode(QAbstractItemView::SingleSelection);

            }
            else{
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
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


void CoachInterface::on_coachApplicationsView_clicked(const QModelIndex &index)
{

    int row = index.row();
    date = ui->coachApplicationsView->model()->data(ui->coachApplicationsView->model()->index(row, 0)).toString();
    QString school = ui->coachApplicationsView->model()->data(ui->coachApplicationsView->model()->index(row, 2)).toString();
    int lesson = ui->coachApplicationsView->model()->data(ui->coachApplicationsView->model()->index(row, 3)).toInt();
    int room = ui->coachApplicationsView->model()->data(ui->coachApplicationsView->model()->index(row, 4)).toInt();
    //qDebug() << date << school << lesson << room;
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT lesson_id FROM schedule WHERE day_of_week=(EXTRACT(DOW FROM :date::DATE)+6)%7 AND school_name=:school AND lesson_number=:lesson AND room_number=:room;");
        query.bindValue(":date", date);
        query.bindValue(":school", school);
        query.bindValue(":lesson", lesson);
        query.bindValue(":room", room);
        if (query.exec()){
            while (query.next()) {
                lesson_id = query.value(0).toInt();
                //qDebug() << lesson_id;
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


void CoachInterface::on_rejectApplicationBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("UPDATE applications SET status='Отклонена' WHERE lesson_id=:lesson_id AND date=:date;");
        query.bindValue(":lesson_id", lesson_id);
        query.bindValue(":date", date);
        if (query.exec()){
            QMessageBox::information(this, "Статус заявки", "Заявка отклонена");

            query.prepare("SELECT a.date, st.name as student_name, s.school_name, s.lesson_number, s.room_number, r.price FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN students st ON a.student_login=st.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE a.status='Создана' AND s.coach_login=:login GROUP BY a.date, st.name, s.school_name, s.room_number,s.lesson_number, r.price;");
            query.bindValue(":login", login);
            if (query.exec()){
                QSqlQueryModel *model = new QSqlQueryModel;
                model->setQuery(query);
                ui->coachApplicationsView->setModel(model);
                ui->coachApplicationsView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
                ui->coachApplicationsView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                ui->coachApplicationsView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                ui->coachApplicationsView->setSelectionBehavior(QAbstractItemView::SelectRows);
                ui->coachApplicationsView->setSelectionMode(QAbstractItemView::SingleSelection);

            }
            else{
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
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

void CoachInterface::on_coachLessonView_clicked(const QModelIndex &index)
{
    int row = index.row();
    date = ui->coachLessonView->model()->data(ui->coachLessonView->model()->index(row, 0)).toString();
    QString school = ui->coachLessonView->model()->data(ui->coachLessonView->model()->index(row, 2)).toString();
    int lesson = ui->coachLessonView->model()->data(ui->coachLessonView->model()->index(row, 3)).toInt();
    int room = ui->coachLessonView->model()->data(ui->coachLessonView->model()->index(row, 4)).toInt();
    //qDebug() << date << school << lesson << room;
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT lesson_id FROM schedule WHERE day_of_week=(EXTRACT(DOW FROM :date::DATE)+6)%7 AND school_name=:school AND lesson_number=:lesson AND room_number=:room;");
        query.bindValue(":date", date);
        query.bindValue(":school", school);
        query.bindValue(":lesson", lesson);
        query.bindValue(":room", room);
        if (query.exec()){
            while (query.next()) {
                lesson_id = query.value(0).toInt();
                //qDebug() << lesson_id;
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

void CoachInterface::on_endLessonBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("UPDATE applications SET status='Завершена' WHERE lesson_id=:lesson_id AND date=:date;");
        query.bindValue(":lesson_id", lesson_id);
        query.bindValue(":date", date);
        if (query.exec()){
            QMessageBox::information(this, "Статус заявки", "Заявка завершена");

            query.prepare("SELECT a.date, st.name as student_name, s.school_name, s.lesson_number, s.room_number, r.price FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN students st ON a.student_login=st.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE a.status='Подтверждена' AND s.coach_login=:login GROUP BY a.date, st.name, s.school_name, s.room_number,s.lesson_number, r.price;");
            query.bindValue(":login", login);
            if (query.exec()){
                QSqlQueryModel *model = new QSqlQueryModel;
                model->setQuery(query);
                ui->coachLessonView->setModel(model);
                ui->coachLessonView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
                ui->coachLessonView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                ui->coachLessonView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                ui->coachLessonView->setSelectionBehavior(QAbstractItemView::SelectRows);
                ui->coachLessonView->setSelectionMode(QAbstractItemView::SingleSelection);
            }
            else{
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
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


void CoachInterface::on_cancelLessonBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("UPDATE applications SET status='Отменена' WHERE lesson_id=:lesson_id AND date=:date;");
        query.bindValue(":lesson_id", lesson_id);
        query.bindValue(":date", date);
        if (query.exec()){
            QMessageBox::information(this, "Статус заявки", "Заявка отменена");

            query.prepare("SELECT a.date, st.name as student_name, s.school_name, s.lesson_number, s.room_number, r.price FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN students st ON a.student_login=st.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE a.status='Подтверждена' AND s.coach_login=:login GROUP BY a.date, st.name, s.school_name, s.room_number,s.lesson_number, r.price;");
            query.bindValue(":login", login);
            if (query.exec()){
                QSqlQueryModel *model = new QSqlQueryModel;
                model->setQuery(query);
                ui->coachLessonView->setModel(model);
                ui->coachLessonView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
                ui->coachLessonView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                ui->coachLessonView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                ui->coachLessonView->setSelectionBehavior(QAbstractItemView::SelectRows);
                ui->coachLessonView->setSelectionMode(QAbstractItemView::SingleSelection);
            }
            else{
                QMessageBox::warning(this, "Ошибка", query.lastError().text());
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





void CoachInterface::on_coachDateBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QString start_date = ui->coachStartDate->text();
    QString end_date = ui->coachEndDate->text();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT (sum(r.price)*0.4) as earnings FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN coaches c on s.coach_login=c.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE date BETWEEN :start_date AND :end_date AND c.login=:login AND a.status='Завершена';");
        query.bindValue(":start_date", start_date);
        query.bindValue(":end_date", end_date);
        query.bindValue(":login", login);
        if (query.exec()){
            while (query.next()) {
                QString total_money = query.value(0).toString();
                ui->displayCoachMoney->setText(total_money);
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


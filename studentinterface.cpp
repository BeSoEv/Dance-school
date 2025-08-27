#include "studentinterface.h"
#include "ui_studentinterface.h"
#include "windows.h"

StudentInterface::StudentInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StudentInterface)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(1);
    setWindowTitle("студент");
}

QString StudentInterface::GetLogin() const
{
    return login;
}

void StudentInterface::SetLogin(QString p_login)
{
    login = p_login;
}

StudentInterface::~StudentInterface()
{
    delete ui;
}

void StudentInterface::on_signLessonBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void StudentInterface::on_futureLessonBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT a.date, c.name as coach_name, s.school_name, s.lesson_number, s.room_number, r.price FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN students st ON a.student_login=st.login JOIN coaches c ON s.coach_login=c.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE a.status='Подтверждена' AND a.student_login=:login GROUP BY a.date, c.name, s.school_name, s.room_number,s.lesson_number, r.price;");
        query.bindValue(":login", login);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->studentLessonView->setModel(model);
            ui->studentLessonView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->studentLessonView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->studentLessonView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            ui->studentLessonView->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->studentLessonView->setSelectionMode(QAbstractItemView::SingleSelection);

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


void StudentInterface::on_applicationsBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT a.date, c.name as coach_name, s.school_name, s.lesson_number, s.room_number, r.price, a.status FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN students st ON a.student_login=st.login JOIN coaches c ON s.coach_login=c.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE a.student_login=:login GROUP BY a.date, c.name, s.school_name, s.room_number,s.lesson_number, r.price, a.status;");
        query.bindValue(":login", login);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->studentAllApplicationsview->setModel(model);
            ui->studentAllApplicationsview->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->studentAllApplicationsview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->studentAllApplicationsview->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            ui->studentAllApplicationsview->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->studentAllApplicationsview->setSelectionMode(QAbstractItemView::SingleSelection);

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


void StudentInterface::on_historyBut_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT a.date, c.name as coach_name, s.school_name, s.lesson_number, s.room_number, r.price, a.status FROM applications a JOIN schedule s ON a.lesson_id=s.lesson_id JOIN students st ON a.student_login=st.login JOIN coaches c ON s.coach_login=c.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE a.status='Завершена' AND a.student_login=:login GROUP BY a.date, c.name, s.school_name, s.room_number,s.lesson_number, r.price, a.status;");
        query.bindValue(":login", login);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->studentHistory->setModel(model);
            ui->studentHistory->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->studentHistory->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->studentHistory->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            ui->studentHistory->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->studentHistory->setSelectionMode(QAbstractItemView::SingleSelection);

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


void StudentInterface::on_calendarWidget_clicked(const QDate &date)
{
    date_cur = date.toString();
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT s.school_name, s.room_number, s.lesson_number, c.name AS coach_name, r.price  FROM schedule s JOIN coaches c ON s.coach_login = c.login JOIN rooms r ON s.school_name=r.school_name AND s.room_number=r.number WHERE s.day_of_week = (EXTRACT(DOW FROM :date::DATE) + 6) % 7 AND s.lesson_id NOT IN (SELECT lesson_id FROM applications WHERE date = :date::DATE AND status != 'Отменена' AND status != 'Отклонена')");
        query.bindValue(":date", date);
        if (query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(query);
            ui->studentFinishSignView->setModel(model);
            ui->studentFinishSignView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            ui->studentFinishSignView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->studentFinishSignView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            ui->studentFinishSignView->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->studentFinishSignView->setSelectionMode(QAbstractItemView::SingleSelection);

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


void StudentInterface::on_studentFinishSignView_clicked(const QModelIndex &index)
{
    int row = index.row();
    QString school = ui->studentFinishSignView->model()->data(ui->studentFinishSignView->model()->index(row, 0)).toString();
    int lesson = ui->studentFinishSignView->model()->data(ui->studentFinishSignView->model()->index(row, 2)).toInt();
    int room = ui->studentFinishSignView->model()->data(ui->studentFinishSignView->model()->index(row, 1)).toInt();
    //qDebug() << date << school << lesson << room;
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("SELECT lesson_id FROM schedule WHERE day_of_week=(EXTRACT(DOW FROM :date::DATE)+6)%7 AND school_name=:school AND lesson_number=:lesson AND room_number=:room;");
        query.bindValue(":date", date_cur);
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


void StudentInterface::on_studentFinishSignBut_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("DELETE FROM applications WHERE lesson_id=:lesson_id AND date=:date_cur AND (status='Отменена' OR status='Отклонена')");
        query.bindValue(":lesson_id", lesson_id);
        query.bindValue(":date_cur", date_cur);
        if (query.exec()){
            qDebug() << "ok";
        }
        else{
            QMessageBox::warning(this, "Ошибка", query.lastError().text());

        }
        //Sleep(2000);
        query.prepare("INSERT INTO applications(student_login, lesson_id, date, status) VALUES(:login, :lesson_id, :date_cur, 'Создана');");
        query.bindValue(":lesson_id", lesson_id);
        query.bindValue(":login", login);
        query.bindValue(":date_cur", date_cur);
        if (query.exec()){
            QMessageBox::information(this, "Статус заявки", "Заявка создана");
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


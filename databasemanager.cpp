#include "databasemanager.h"
#include <QSqlError>
#include <QDebug>

// Инициализация Singleton
DatabaseManager& DatabaseManager::instance() {
    static DatabaseManager instance; // Создаётся единожды
    return instance;
}

// Деструктор
DatabaseManager::~DatabaseManager() {
    if (db.isOpen()) {
        db.close();
    }
}

// Метод для получения объекта базы данных
QSqlDatabase DatabaseManager::getDatabase() {
    return db;
}

bool DatabaseManager::connectToDatabase(const QString &host, const QString &dbName, const QString &user, const QString &password, int port)
{
    db = QSqlDatabase::addDatabase("QPSQL"); // Используем драйвер PostgreSQL
    db.setHostName(host);
    db.setDatabaseName(dbName);
    db.setUserName(user);
    db.setPassword(password);
    db.setPort(port);

    if (!db.open()) {
        qDebug() << "Database connection failed: " << db.lastError().text();
        return false;
    }

    qDebug() << "Database connected successfully.";
    return true;
}

DatabaseManager::DatabaseManager()
{

}


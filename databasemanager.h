#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>

class DatabaseManager {
public:
    static DatabaseManager& instance(); // Метод для получения единственного экземпляра
    QSqlDatabase getDatabase();         // Возвращает объект базы данных
    bool connectToDatabase(const QString& host, const QString& dbName, const QString& user, const QString& password, int port = 5432);
private:
    DatabaseManager();  // Приватный конструктор для предотвращения создания объектов
    ~DatabaseManager(); // Приватный деструктор
    QSqlDatabase db;    // Объект базы данных
    DatabaseManager(const DatabaseManager&) = delete;
    DatabaseManager& operator=(const DatabaseManager&) = delete;
};

#endif // DATABASEMANAGER_H

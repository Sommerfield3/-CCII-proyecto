#ifndef DBCONEXION_H
#define DBCONEXION_H

#include <QString>
#include <QSqlError>
#include <QSqlDatabase>
#include <QDebug>

class DBConexion{
private:
    QString hostName = "localhost";
    QString dbName = "cc_proyectofinal_22";
    QString userName = "root";
    QString password = "";

public:
    QSqlDatabase mDatabase;
    bool connOpen() {
        mDatabase = QSqlDatabase::addDatabase("QMYSQL");
        mDatabase.setHostName(hostName);
        mDatabase.setPort(3306);
        mDatabase.setDatabaseName(dbName);
        mDatabase.setUserName(userName);
        mDatabase.setPassword(password);
        if (!mDatabase.open()){
            QString log;
            QSqlError e = mDatabase.lastError();
            switch (e.type()) {
                case QSqlError::NoError: log += "No error : " + e.text(); break;
                case QSqlError::ConnectionError: log += "Connection error : " + e.text(); break;
                case QSqlError::StatementError: log += "Statement error : " + e.text(); break;
                case QSqlError::TransactionError: log += "Transaction error : " + e.text(); break;
                case QSqlError::UnknownError: log += "Unknown error : " + e.text(); break;
            }
            qDebug() << "QSqlError: " << log;
            return false;
        }
        return true;
    }

    void connClose() {
        mDatabase.close();
        mDatabase.removeDatabase(QSqlDatabase::defaultConnection);
        qDebug() << "Database Closed";
    }

};

#endif // DBCONEXION_H

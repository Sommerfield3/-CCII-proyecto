#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_btn_login_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase mDatabase;
};

#endif // LOGIN_H

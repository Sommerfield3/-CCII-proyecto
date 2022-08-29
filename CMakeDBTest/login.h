#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "DBConexion.h"
#include "menudoctor.h"

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
    DBConexion conn;

};

#endif // LOGIN_H

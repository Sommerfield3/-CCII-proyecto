#include "login.h"
#include "ui_login.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QCryptographicHash>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    mDatabase = QSqlDatabase::addDatabase("QMYSQL");
    mDatabase.setDatabaseName("cc_proyectofinal_22");
    mDatabase.setHostName("localhost");
    mDatabase.setPort(3306);
    mDatabase.setUserName("root");
    mDatabase.setPassword("");

}

Login::~Login()
{
    delete ui;
}

void Login::on_btn_login_clicked()
{
    QString username = ui->input_username->text();
    //QString password = ui->input_password->text();
//    // codificacion md5/sha256
//    QByteArray pswNsalt (password.toStdString().c_str()) ;
//    QCryptographicHash encrypt_type(QCryptographicHash::Md5).toHex();
//    encrypt_type.addData(pswNsalt);
//    pswNsalt = encrypt_type.result();
//    // devolver a QString
//    QString pass = QString(pswNsalt);

    QString pass = QString("%1").arg(QString(QCryptographicHash::hash
                  (ui->input_password->text().toUtf8(),QCryptographicHash::Md5).toHex()));

//    qDebug() << username ;
//    qDebug() << pass ;

    if (!mDatabase.open()){
        QMessageBox::critical(this,"error", mDatabase.lastError().text());
        return;
    }
    QSqlQuery qry;
    qry.prepare("SELECT usuario, cargo FROM usuarios WHERE usuario= :usuario AND clave= :clave");
    qry.bindValue(":usuario", username);
    qry.bindValue(":clave", pass);
    if (qry.exec()){
        if (qry.size() > 0){
            if(qry.first()){
                QString usuario = qry.value(0).toString();
                QString rol = qry.value(1).toString();
                QMessageBox::information(this,"Correcto", "El usuario "+usuario+" se logueó exitosamente\n"
                                                          "Rol del usuario: "+rol);
            }
        } else {
            QMessageBox::warning(this,"Error", "No coinciden los credenciales ingresados con"
                                                " ningún registro en la BD");
        }
    } else {
        QMessageBox::information(this,"ERROR","error en qry.exec()");
    }
}


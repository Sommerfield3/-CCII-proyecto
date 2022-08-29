#include "login.h"
#include "ui_login.h"
#include "menudoctor.h"
#include "menupaciente.h"
#include "vistaadm.h"
#include "functorOperaciones.h"
#include <QString>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QSharedPointer>

Login::Login(QWidget *parent) : QWidget(parent), ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btn_login_clicked()
{
    if (!conn.connOpen()) {
        QMessageBox::warning(this,"Error", "QSqlError: REVISAR LOG");
        QApplication::quit();
        //return;
    }

    QString username = ui->input_username->text();
    QString pass = QString("%1").arg(QString(QCryptographicHash::hash
                  (ui->input_password->text().toUtf8(),QCryptographicHash::Md5).toHex()));

    QSqlQuery qry;
    qry.prepare("SELECT usuario, cargo,idreferencia FROM usuarios WHERE usuario= :usuario AND clave= :clave");
    qry.bindValue(":usuario", username);
    qry.bindValue(":clave", pass);
    if (qry.exec()){
        if (qry.size() > 0){
            if(qry.first()){
                //QString name = qry.value(0).toString();
                QString role = qry.value(1).toString();
                QString idreferencia = qry.value(2).toString();
                conn.connClose();
                if (role == "M") {
                    menuDoctor *wdg_mDoctor = new menuDoctor(idreferencia, nullptr);
                    wdg_mDoctor->setModal(true);
                    wdg_mDoctor->exec();
                    this->close();
                    conn.connClose();
                } else if (role == "A") {
                    QSharedPointer<functorOperaciones> cont(new functorOperaciones);
                    vistaadm *ventanaadm = new vistaadm(cont, nullptr);
                    ventanaadm->show();
                    this->close();
                    conn.connClose();
                } else if (role == "P") {
                    menupaciente *wdg_mpaciente = new menupaciente(idreferencia, nullptr);
                    wdg_mpaciente->setModal(true);
                    wdg_mpaciente->exec();
                    this->close();
                    conn.connClose();
                }
            }
        } else {
            QMessageBox::warning(this,"Error", "No coinciden los credenciales ingresados con"
                                                " ningún registro en la BD");
        }
    } else {
        QMessageBox::information(this,"ERROR","error en qry.exec()");
    }
}


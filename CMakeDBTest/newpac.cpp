#include "newpac.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QCryptographicHash>
#include "vistaadm.h"

newpac::newpac(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newpac)
{
    ui->setupUi(this);
}

newpac::~newpac()
{
    delete ui;
}

void newpac::on_btn_ingresar_clicked()
{
    QString nombre = ui->input_nombre->text();
    QString edad = ui->input_edad->text();
    QString dni = ui->input_DNI->text();
    QString direccion = ui->input_dir->text();
    QString telefono = ui->input_tel->text();
    QString email = ui->input_email->text();
    QString ciudad = ui->input_ciudad->text();
    QString clave = ui->input_clave->text();

    if (!db.connOpen()) {
        QMessageBox::warning(this,"Error", "QSqlError: REVISAR LOG");
        QApplication::quit();
        //return;
    }

    QSqlQuery qry;

    qry.prepare("INSERT INTO `paciente`(`nombre`, `edad`, `DNI`, `direccion`, `telefono`, `email`, `ciudad`) "
                "VALUES ('" + nombre +"','"
                    + edad + "','"
                    + dni +"','"
                    + direccion + "','"
                    + telefono + "','"
                    + email + "','"
                    + ciudad + "')");

    if (!qry.exec()) {
        QMessageBox::information(this,"ERROR","error en qry.exec()");
        return;
    }

    qry.prepare("SELECT codigopac FROM paciente WHERE DNI= :dni");
    qry.bindValue(":dni", dni);

    QString codpac;
    QString usuario;
    if (qry.exec()) {
        if (qry.size() == 1) {
            if(qry.first()){
                codpac = qry.value(0).toString();
                usuario = "pac" + dni;
            }
        } else {
            QMessageBox::warning(this,"ERROR", "Datos duplicados");
            return;
        }
    }

    qry.prepare("INSERT INTO `usuarios`(`cargo`, `usuario`, `clave`, `idreferencia`) "
                "VALUES ('P','" + usuario + "',md5('" +  clave + "'),'" + codpac + "')");

    if (qry.exec()) {
        QMessageBox::information(this,"CORRECTO","El paciente ha sido ingresado\n"
                                                 "USUARIO: " + usuario + "\nCLAVE: " + clave);
    } else {
        QMessageBox::information(this,"ERROR","error en qry.exec()");
    }
}

void newpac::on_btn_volver_clicked()
{
    vistaadm *ventanaadm = new vistaadm();
    ventanaadm->show();
    this->close();
}

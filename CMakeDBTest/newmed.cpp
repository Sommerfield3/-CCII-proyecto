#include "newmed.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QCryptographicHash>
#include "vistaadm.h"

newmed::newmed(QWidget *parent) : QWidget(parent), ui(new Ui::newmed)
{
    ui->setupUi(this);
}

newmed::~newmed()
{
    delete ui;
}

void newmed::on_btn_ingresar_clicked()
{
    QString nombre = ui->input_nombre->text();
    nombre = nombre.toUpper();
    int edad = (ui->input_edad->text()).toInt();
    QString dni = ui->input_DNI->text();
    QString direccion = ui->input_dir->text();
    QString telefono = ui->input_tel->text();
    QString email = ui->input_email->text();
    QString ciudad = ui->input_ciudad->text();
    QString especialidad = ui->input_esp->text();
    QString turno = "";
    if (ui->input_turnoM->isCheckable()) { turno = "M"; }
    if (ui->input_turnoT->isCheckable()) { turno = "T"; }
    if (ui->input_turnoN->isCheckable()) { turno = "N"; }
    QString clave = ui->input_clave->text();

    if (nombre.isEmpty() || edad == 0 || dni.isEmpty() || direccion.isEmpty() || telefono.isEmpty() || email.isEmpty() || ciudad.isEmpty()) {
        QMessageBox::warning(this,"Error", "Debe llenar todos los campos!");
        return;
    }

    if (!db.connOpen()) {
        QMessageBox::warning(this,"Error", "QSqlError: REVISAR LOG");
        QApplication::quit();
        //return;
    }

    QSqlQuery qry;

    qry.prepare("INSERT INTO `medico`(`nombre`, `edad`, `DNI`, `especialidad`, `direccion`, `telefono`, `email`, `ciudad`, `turno`) "
                "VALUES ('" + nombre +"','"
                    + QVariant(edad).toString() + "','"
                    + dni +"','"
                    + especialidad + "','"
                    + direccion + "','"
                    + telefono + "','"
                    + email + "','"
                    + ciudad + "','"
                    + turno + "')");

    if (!qry.exec()) {
        QMessageBox::information(this,"ERROR","error en qry.exec()");
        return;
    }

    qry.prepare("SELECT codigomed FROM medico WHERE DNI= :dni AND especialidad= :especialidad");
    qry.bindValue(":dni", dni);
    qry.bindValue(":especialidad",especialidad);

    QString codmed;
    QString usuario;
    if (qry.exec()) {
        if (qry.size() == 1) {
            if(qry.first()){
                codmed = qry.value(0).toString();
                usuario = "med" + dni;
            }
        } else {
            QMessageBox::warning(this,"ERROR", "Datos duplicados");
            return;
        }
    }

    qry.prepare("INSERT INTO `usuarios`(`cargo`, `usuario`, `clave`, `idreferencia`) "
                "VALUES ('M','" + usuario + "',md5('" +  clave + "'),'" + codmed + "')");

    if (qry.exec()) {
        QMessageBox::information(this,"CORRECTO","El medico ha sido ingresado\n"
                                                 "USUARIO: " + usuario + "\nCLAVE: " + clave);
    } else {
        QMessageBox::information(this,"ERROR","error en qry.exec()");
    }
}

void newmed::on_btn_volver_clicked()
{
    vistaadm *ventanaadm = new vistaadm();
    ventanaadm->show();
    this->close();
}

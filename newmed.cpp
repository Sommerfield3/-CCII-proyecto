#include "newmed.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QCryptographicHash>

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
    QString edad = ui->input_edad->text();
    QString dni = ui->input_DNI->text();
    QString direccion = ui->input_dir->text();
    QString telefono = ui->input_tel->text();
    QString email = ui->input_email->text();
    QString ciudad = ui->input_ciudad->text();
    QString especialidad = ui->input_esp->text();
    QString turno = ui->input_turno->text();
    QString clave = ui->input_clave->text();

    if (!db.connOpen()) {
        QMessageBox::warning(this,"Error", "QSqlError: REVISAR LOG");
        QApplication::quit();
        //return;
    }

    QSqlQuery qry;

    qry.prepare("INSERT INTO `medico`(`nombre`, `edad`, `DNI`, `especialidad`, `direccion`, `telefono`, `email`, `ciudad`, `turno`) "
                "VALUES ('" + nombre +"','"
                    + edad + "','"
                    + dni +"','"
                    + especialidad + "','"
                    + direccion + "','"
                    + telefono + "','"
                    + email + "','"
                    + ciudad + "','"
                    + turno + "')");
    //qry.bindValue(":nombre", nombre);
    //qry.bindValue(":edad", edad);
    //qry.bindValue(":dni", dni);
    //qry.bindValue(":especialidad",especialidad);
    //qry.bindValue(":direccion", direccion);
    //qry.bindValue(":telefono", telefono);
    //qry.bindValue(":email", email);
    //qry.bindValue(":ciudad", ciudad);
    //qry.bindValue(":turno", turno);

    if (!qry.exec()) {
        QMessageBox::information(this,"ERROR","error en qry.exec()");
        return;
    }

    qry.prepare("SELECT codigomed FROM medico WHERE DNI= :dni AND especialidad= :especialidad");
    qry.bindValue(":dni", dni);
    qry.bindValue(":especialidad",especialidad);

    QString codmed;
    if (qry.exec()) {
        if (qry.size() == 1) {
            if(qry.first()){
                codmed = qry.value(0).toString();
                codmed = "med" + codmed;
            }
        } else {
            QMessageBox::warning(this,"ERROR", "Datos duplicados");
            return;
        }
    }

    qry.prepare("INSERT INTO `usuarios`(`cargo`, `usuario`, `clave`) VALUES ('M','" + codmed + "',md5('" +  clave + "'))");

    if (qry.exec()) {
        QMessageBox::information(this,"CORRECTO","El medico ha sido ingresado su usuario es "+ codmed
                                 + " y su clave es " + clave);
    } else {
        QMessageBox::information(this,"ERROR","error en qry.exec()");
    }
}

void newmed::on_btn_volver_clicked()
 {

 }

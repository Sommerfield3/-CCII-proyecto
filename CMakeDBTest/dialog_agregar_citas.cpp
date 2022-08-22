#include "dialog_agregar_citas.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QCryptographicHash>
#include <QTime>
#include "vistaadm.h"

Dialog_agregar_citas::Dialog_agregar_citas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_agregar_citas)
{
    ui->setupUi(this);
}

Dialog_agregar_citas::~Dialog_agregar_citas()
{
    delete ui;
}

void Dialog_agregar_citas::on_agregar_clicked()
{
    QString usuariopac = ui->insertar_usuariopac->text();
    QString especialidad = ui->insertar_espec->text();
    QString turno = "";
    if (ui->insertar_turnM->isCheckable()) { turno = "M"; }
    if (ui->insertar_turnT->isCheckable()) { turno = "T"; }
    QString fechaHoy = QDate::currentDate().toString("yyyy-MM-dd");
    QString fecha = ui->insert_fecha->date().toString("yyyy-MM-dd");
    if (!db.connOpen()) {
          QMessageBox::warning(this,"Error", "QSqlError: REVISAR LOG");
          QApplication::quit();
          //return;
    }
    if (fecha<=fechaHoy){
        QMessageBox::warning(this,"ERROR", "Fecha inválida.");
        return;
    }
    QSqlQuery qry;
    qry.prepare("SELECT idreferencia FROM usuarios WHERE usuario= :usuariopac AND cargo='P'");
    qry.bindValue(":usuariopac", usuariopac);

    QString codigopaciente;
    QString codigomedico;
    QString hora;
    int horacita=0;
    int minutoscita=0;
    if (qry.exec()) {
        if (qry.size() == 1) {
            if (qry.first()){
                codigopaciente=qry.value(0).toString();
            }
        } else {
            QMessageBox::warning(this,"ERROR", "Paciente no válido.");
            return;
        }
    }
    qry.prepare("SELECT codigomed FROM medico WHERE especialidad= :especialidad AND turno= :turno");
    qry.bindValue(":especialidad", especialidad);
    qry.bindValue(":turno", turno);
    if (qry.exec()) {
        if (qry.size() == 1) {
            if (qry.first()){
                codigomedico=qry.value(0).toString();
            }
        } else {
            QMessageBox::warning(this,"ERROR", "Médico no válido.");
            return;
        }
    }
    qry.prepare("SELECT hora FROM citas WHERE codigomed= :codigomedico AND turno= :turno AND fecha= :fecha");
    qry.bindValue(":codigomedico", codigomedico);
    qry.bindValue(":turno",turno);
    qry.bindValue(":fecha",fecha);
    if (qry.exec()) {
        if (qry.size() > 0) {
            if (qry.last()){
                QString horaMayor;
                horaMayor=qry.value(0).toString();
                horacita = horaMayor[0].digitValue()*10 + horaMayor[1].digitValue();
                minutoscita = horaMayor[3].digitValue()*10 + horaMayor[4].digitValue();
                if (horaMayor=="12:30:00" || horaMayor=="18:30:00"){
                    QMessageBox::warning(this,"ERROR", "Límite de citas alcanzado en  este turno.");
                    return;
                }
                minutoscita+=30;
                if (minutoscita==60){
                    horacita+=1;
                    minutoscita=0;
                }
            }
        } else {
            if (turno=="M"){
                horacita=7;
            }
            else if (turno=="T"){
                horacita=13;
            }
        }
    }
    QString horaColocar="";
    if (horacita<10){
        horaColocar+="0";
    }
    horaColocar+=QVariant(horacita).toString();
    horaColocar+=":";
    if (minutoscita==0){
        horaColocar+="0";
    }
    horaColocar+=QVariant(minutoscita).toString();
    horaColocar+=":00";
    qry.prepare("INSERT INTO `citas`(`codigopac`, `codigomed`, `turno`, `fecha`, `hora`, `estado`) "
                    "VALUES ('" + codigopaciente + "','"
                    + codigomedico+ "','"
                    +turno+ "','"
                    +fecha+ "','"
                    +hora+ "','2')");
    if (qry.exec()) {
        QMessageBox::warning(this,"ERROR", "Cita agregada exitósamente.\n"
                                           "FECHA: " + fecha + "\nHORA: '" + horaColocar + "'");
    } else {
        QMessageBox::warning(this,"ERROR", "Cita no procedente.");
        return;
    }
}



void Dialog_agregar_citas::on_volver_clicked()
{
    vistaadm *ventanaadm = new vistaadm();
    ventanaadm->show();
    this->close();
}


#include "newmed.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QCryptographicHash>
#include "vistaadm.h"
#include "crearmed.h"
#include <QScopedPointer>

newmed::newmed(QSharedPointer<functorOperaciones> c, QWidget *parent) : QWidget(parent), cont(c), ui(new Ui::newmed)
{
    ui->setupUi(this);
}

newmed::~newmed()
{
    delete ui;
}

void newmed::on_btn_ingresar_clicked()
{
    QScopedPointer<crearcargo> nuevomed( new crearmed(cont,this) );
    nuevomed->set_nombre((ui->input_nombre->text()).toUpper());
    nuevomed->set_edad(ui->input_edad->value());
    nuevomed->set_dni(ui->input_DNI->text());
    nuevomed->set_direccion(ui->input_dir->text());
    nuevomed->set_telefono(ui->input_tel->text());
    nuevomed->set_email(ui->input_email->text());
    nuevomed->set_ciudad(ui->input_ciudad->text());
    nuevomed->set_especialidad(ui->input_esp->text());
    if (ui->input_turnoM->isCheckable()) { nuevomed->set_turno('M'); }
    if (ui->input_turnoT->isCheckable()) { nuevomed->set_turno('T'); }
    if (ui->input_turnoN->isCheckable()) { nuevomed->set_turno('N'); }
    nuevomed->set_clave(ui->input_clave->text());
    nuevomed->agregar();
}

void newmed::on_btn_volver_clicked()
{
    vistaadm *ventanaadm = new vistaadm(cont,nullptr);
    ventanaadm->show();
    this->close();
    delete this;
}

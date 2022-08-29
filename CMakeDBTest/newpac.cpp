#include "newpac.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QCryptographicHash>
#include "vistaadm.h"
#include "crearpac.h"
#include <QScopedPointer>

newpac::newpac(QSharedPointer<functorOperaciones> c, QWidget *parent) : QWidget(parent), cont(c), ui(new Ui::newpac)
{
    ui->setupUi(this);
}

newpac::~newpac()
{
    delete ui;
}

void newpac::on_btn_ingresar_clicked()
{
    QScopedPointer<crearcargo> nuevopac( new crearpac(cont,this) );
    nuevopac->set_nombre((ui->input_nombre->text()).toUpper());
    nuevopac->set_edad(ui->input_edad->value());
    nuevopac->set_dni(ui->input_DNI->text());
    nuevopac->set_direccion(ui->input_dir->text());
    nuevopac->set_telefono(ui->input_tel->text());
    nuevopac->set_email(ui->input_email->text());
    nuevopac->set_ciudad(ui->input_ciudad->text());
    nuevopac->set_clave(ui->input_clave->text());
    nuevopac->agregar();
}

void newpac::on_btn_volver_clicked()
{
    vistaadm *ventanaadm = new vistaadm(cont,nullptr);
    ventanaadm->show();
    this->close();
    delete this;
}

#include "vistaadm.h"
#include "ui_vistaadm.h"
#include "newmed.h"
#include "newpac.h"
#include "login.h"
#include "dialog_agregar_citas.h"

vistaadm::vistaadm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vistaadm)
{
    ui->setupUi(this);
}

vistaadm::~vistaadm()
{
    delete ui;
}

void vistaadm::on_btn_agregarpac_clicked()
{
    newpac *ventanapac = new newpac();
    ventanapac->show();
    this->close();
}

void vistaadm::on_btn_agregarmed_clicked()
{
    newmed *ventanamed = new newmed();
    ventanamed->show();
    this->close();
}

void vistaadm::on_btn_agregarcita_clicked()
{
    Dialog_agregar_citas *ventanacita = new Dialog_agregar_citas();
    ventanacita->show();
    this->close();
}

void vistaadm::on_btn_cerrar_clicked()
{
    Login *ventanalog = new Login();
    ventanalog->show();
    this->close();
}

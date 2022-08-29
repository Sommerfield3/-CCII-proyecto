#include "vistaadm.h"
#include "ui_vistaadm.h"
#include "newmed.h"
#include "newpac.h"
#include "login.h"
#include "dialog_agregar_citas.h"
#include <QMessageBox>
#include <QScopedPointer>

vistaadm::vistaadm(QSharedPointer<functorOperaciones> c, QWidget *parent)
    : QWidget(parent), cont(c),
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
    newpac *ventanapac = new newpac(cont, nullptr);
    ventanapac->show();
    this->close();
    delete this;
}

void vistaadm::on_btn_agregarmed_clicked()
{
    newmed *ventanamed = new newmed(cont, nullptr);
    ventanamed->show();
    this->close();
    delete this;
}

void vistaadm::on_btn_agregarcita_clicked()
{
    Dialog_agregar_citas *ventanacita = new Dialog_agregar_citas(cont, nullptr);
    ventanacita->show();
    this->close();
    delete this;
}

void vistaadm::on_btn_cerrar_clicked()
{
    QMessageBox::StandardButton out = QMessageBox::question(this, "Exit", "Cerrando Sesión..."
                                                                          "\nOperaciones realizadas: "
                                                            + QVariant(cont->RetornarNumeroOperacionesSesion()).toString(),
                                                            QMessageBox::Cancel | QMessageBox::Ok);
    if (out == QMessageBox::Ok) {
        Login* ventanalog = new Login();
        ventanalog->show();
        this->close();
        delete this;
    } else {}

}

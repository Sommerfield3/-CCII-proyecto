#include "menupaciente.h"
#include "ui_menupaciente.h"
#include "login.h"
#include "citascalendarpac.h"
#include <QFont>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSharedPointer>

menupaciente::menupaciente(QString idreferencia, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menupaciente)
{
    ui->setupUi(this);
    ui->txt_bienvenida->setText("Bienvenido ");
    //usuario->getNombre()
    idReferencia = idreferencia;
    connect(ui->btn_citasCalendar,SIGNAL(clicked()),
            this, SLOT(on_btn_citasCalendar_clicked()));
}

menupaciente::~menupaciente()
{
    delete ui;
    delete wdg_citascalpac;
}

void menupaciente::on_btn_citasCalendar_clicked() {
    //QSharedPointer<citasCalendar> wdg_citasCal(new citasCalendar());
    if(wdg_citascalpac==nullptr)
        wdg_citascalpac = new citascalendarpac(idReferencia); /* aqui se llama 2 veces */
    wdg_citascalpac->show();
    this->close();
}

void menupaciente::on_btn_logout_clicked() {
    QMessageBox::StandardButton out = QMessageBox::question(this, "Exit", "Cerrando Sesión...",
                                                            QMessageBox::Cancel | QMessageBox::Ok);
    if (out == QMessageBox::Ok) {
        Login* ventanalog = new Login();
        ventanalog->show();
        this->close();
    } else {}
}

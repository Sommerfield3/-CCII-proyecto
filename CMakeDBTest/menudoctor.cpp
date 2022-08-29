#include "menudoctor.h"
#include "ui_menudoctor.h"
#include "login.h"
#include "citascalendar.h"
#include <QFont>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSharedPointer>

menuDoctor::menuDoctor(QString idreferencia, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuDoctor)
{
    ui->setupUi(this);
    ui->txt_bienvenida->setText("Bienvenido ");
    //usuario->getNombre()
    idReferencia = idreferencia;
    connect(ui->btn_citasCalendar,SIGNAL(clicked()),
            this, SLOT(on_btn_citasCalendar_clicked()));
}

menuDoctor::~menuDoctor()
{
    delete ui;
    delete wdg_citasCal;
}

void menuDoctor::on_btn_citasCalendar_clicked() {
    //QSharedPointer<citasCalendar> wdg_citasCal(new citasCalendar());
    if(wdg_citasCal==nullptr)
        wdg_citasCal = new citasCalendar(idReferencia); /* aqui se llama 2 veces */
    wdg_citasCal->show();
    this->close();
}

void menuDoctor::on_btn_logout_clicked() {
    QMessageBox::StandardButton out = QMessageBox::question(this, "Exit", "Cerrando Sesión...",
                                                            QMessageBox::Cancel | QMessageBox::Ok);
    if (out == QMessageBox::Ok) {
        Login* ventanalog = new Login();
        ventanalog->show();
        this->close();
    } else {}
}


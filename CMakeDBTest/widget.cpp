#include "widget.h"
#include "./ui_widget.h"
#include <QSqlTableModel>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mDatabase = QSqlDatabase::addDatabase("QMYSQL");
    mDatabase.setDatabaseName("cc_proyectofinal_22");
    mDatabase.setHostName("localhost");
    mDatabase.setPort(3306);
    mDatabase.setUserName("root");
    mDatabase.setPassword("");
    if (!mDatabase.open()){
        QMessageBox::critical(this,"error", mDatabase.lastError().text());
        return;
    }

    mModel = new QSqlTableModel(this);
    mModel->setTable("paciente");
    mModel->select();
    ui->clientes->setModel(mModel);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_nuevoBtn_clicked()
{
    mModel->insertRow(mModel->rowCount());
}

void Widget::on_eliminarBtn_clicked()
{
    mModel->removeRow(ui->clientes->currentIndex().row());
}


void Widget::on_actualizarBtn_clicked()
{
    mModel->select();
}


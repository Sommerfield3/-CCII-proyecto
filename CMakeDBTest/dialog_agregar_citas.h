#ifndef DIALOG_AGREGAR_CITAS_H
#define DIALOG_AGREGAR_CITAS_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QDate>
#include "ui_dialog_agregar_citas.h"
#include "DBConexion.h"

namespace Ui {
class Dialog_agregar_citas;
}

class Dialog_agregar_citas : public QDialog
{
    Q_OBJECT

public:
    Dialog_agregar_citas(QWidget *parent = nullptr);
    ~Dialog_agregar_citas();

private slots:
    void on_volver_clicked();
    void on_agregar_clicked();

private:
    Ui::Dialog_agregar_citas *ui;
    QSqlDatabase mDatabase;
    DBConexion db;
};
#endif // DIALOG_AGREGAR_CITAS_H

#ifndef NEWPAC_H
#define NEWPAC_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include "ui_newpac.h"
#include "DBConexion.h"

namespace Ui {
class newpac;
}

class newpac : public QWidget
{
    Q_OBJECT

public:
    explicit newpac(QWidget *parent = nullptr);
    ~newpac();

private slots:
    void on_btn_ingresar_clicked();
    void on_btn_volver_clicked();

private:
    Ui::newpac *ui;
    QSqlDatabase mDatabase;
    DBConexion db;
};

#endif // NEWPAC_H

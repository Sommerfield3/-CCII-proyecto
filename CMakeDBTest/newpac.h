#ifndef NEWPAC_H
#define NEWPAC_H

#include <QWidget>
#include <QtSql>
#include "ui_newpac.h"
#include "DBConexion.h"
#include <functorOperaciones.h>
#include <QSharedPointer>

namespace Ui {
class newpac;
}

class newpac : public QWidget
{
    Q_OBJECT

public:
    explicit newpac(QSharedPointer<functorOperaciones> c, QWidget *parent = nullptr);
    ~newpac();

private slots:
    void on_btn_ingresar_clicked();
    void on_btn_volver_clicked();

private:
    Ui::newpac *ui;
    DBConexion db;
    QSharedPointer<functorOperaciones> cont;
};

#endif // NEWPAC_H

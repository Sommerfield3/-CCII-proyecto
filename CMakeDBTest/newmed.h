#ifndef NEWMED_H
#define NEWMED_H

#include <QWidget>
#include <QtSql>
#include "ui_newmed.h"
#include "DBConexion.h"
#include <functorOperaciones.h>
#include <QSharedPointer>

namespace Ui {
class newmed;
}

class newmed : public QWidget
{
    Q_OBJECT

public:
    explicit newmed(QSharedPointer<functorOperaciones> c, QWidget *parent = nullptr);
    ~newmed();

private slots:
    void on_btn_ingresar_clicked();
    void on_btn_volver_clicked();

private:
    Ui::newmed *ui;
    DBConexion db;
    QSharedPointer<functorOperaciones> cont;
};

#endif // NEWMED_H

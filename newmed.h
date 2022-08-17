#ifndef NEWMED_H
#define NEWMED_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include "ui_newmed.h"
#include "DBConexion.h"

namespace Ui {
class newmed;
}

class newmed : public QWidget
{
    Q_OBJECT

public:
    explicit newmed(QWidget *parent = nullptr);
    ~newmed();

private slots:
    void on_btn_ingresar_clicked();
    void on_btn_volver_clicked();

private:
    Ui::newmed *ui;
    QSqlDatabase mDatabase;
    DBConexion db;
};

#endif // NEWMED_H

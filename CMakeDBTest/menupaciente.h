#ifndef MENUPACIENTE_H
#define MENUPACIENTE_H

#include <QDialog>
#include <QString>
#include "citascalendarpac.h"

namespace Ui {
class menupaciente;
}

class menupaciente : public QDialog
{
    Q_OBJECT

public:
    explicit menupaciente(QString idreferencia, QWidget *parent = nullptr);
    ~menupaciente();

private slots:
    void on_btn_logout_clicked();
    void on_btn_citasCalendar_clicked();

private:
    Ui::menupaciente *ui;
    //Usuario *usuario;
    QString idReferencia;
    citascalendarpac *wdg_citascalpac = nullptr;
};

#endif // MENUPACIENTE_H

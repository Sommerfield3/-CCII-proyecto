#ifndef MENUDOCTOR_H
#define MENUDOCTOR_H

#include <QDialog>
#include <QString>
#include "citascalendar.h"

namespace Ui {
class menuDoctor;
}

class menuDoctor : public QDialog
{
    Q_OBJECT

public:
    explicit menuDoctor(QString idreferencia, QWidget *parent = nullptr);
    // , const QString& n = "", const QString& r = ""
    ~menuDoctor();

private slots:
    void on_btn_logout_clicked();
    void on_btn_citasCalendar_clicked();

private:
    Ui::menuDoctor *ui;
    //Usuario *usuario;
    QString idReferencia;
    citasCalendar *wdg_citasCal = nullptr;
};

#endif // MENUDOCTOR_H

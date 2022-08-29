#ifndef VISTAADM_H
#define VISTAADM_H

#include <QWidget>
#include <functorOperaciones.h>
#include <QSharedPointer>

namespace Ui {
class vistaadm;
}

class vistaadm : public QWidget
{
    Q_OBJECT

public:
    explicit vistaadm(QSharedPointer<functorOperaciones> c, QWidget *parent = nullptr);
    ~vistaadm();
public slots:
    void on_btn_agregarpac_clicked();
    void on_btn_agregarmed_clicked();
    void on_btn_agregarcita_clicked();
    void on_btn_cerrar_clicked();

private:
    Ui::vistaadm *ui;
    QSharedPointer<functorOperaciones> cont;
};

#endif // VISTAADM_H

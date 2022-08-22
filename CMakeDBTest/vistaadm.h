#ifndef VISTAADM_H
#define VISTAADM_H

#include <QWidget>

namespace Ui {
class vistaadm;
}

class vistaadm : public QWidget
{
    Q_OBJECT

public:
    explicit vistaadm(QWidget *parent = nullptr);
    ~vistaadm();
public slots:
    void on_btn_agregarpac_clicked();
    void on_btn_agregarmed_clicked();
    void on_btn_agregarcita_clicked();
    void on_btn_cerrar_clicked();

private:
    Ui::vistaadm *ui;
};

#endif // VISTAADM_H

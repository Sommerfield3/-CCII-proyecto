#ifndef CITASCALENDARPAC_H
#define CITASCALENDARPAC_H

#include "DBConexion.h"
#include <QModelIndex>
#include <QWidget>
#include <QDate>

namespace Ui {
class citascalendarpac;
}

class citascalendarpac : public QWidget
{
    Q_OBJECT

public:
    explicit citascalendarpac(QString idreferencia, QWidget *parent = nullptr);
    ~citascalendarpac();

public slots:
    void updateDataCalendar(const QDate &d);

private slots:
    void on_pushButton_6_clicked();
    void on_tableView_6_clicked(const QModelIndex &index);

private:
    Ui::citascalendarpac *ui;
    QString idReferencia;
    DBConexion conn;
};

#endif // CITASCALENDARPAC_H

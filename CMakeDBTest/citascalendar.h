#ifndef CITASCALENDAR_H
#define CITASCALENDAR_H

#include "DBConexion.h"
#include <QModelIndex>
#include <QWidget>
#include <QDate>

namespace Ui {
class citasCalendar;
}

class citasCalendar : public QWidget
{
    Q_OBJECT

public:
    explicit citasCalendar(QString idreferencia,QWidget *parent = nullptr);
    ~citasCalendar();

public slots:
    void updateDataCalendar(const QDate &d);

private slots:
    void on_pushButton_clicked();
    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::citasCalendar *ui;
    QString idReferencia;
    DBConexion conn;
};

#endif // CITASCALENDAR_H

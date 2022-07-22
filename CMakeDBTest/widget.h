#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class QSqlTableModel;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_nuevoBtn_clicked();

    void on_eliminarBtn_clicked();

    void on_actualizarBtn_clicked();

private:
    Ui::Widget *ui;
    QSqlTableModel *mModel;
    QSqlDatabase mDatabase;
};
#endif // WIDGET_H

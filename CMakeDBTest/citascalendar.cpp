#include "citascalendar.h"
#include "ui_citascalendar.h"
#include "menudoctor.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
//#include <QSharedPointer>


citasCalendar::citasCalendar(QString idreferencia,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::citasCalendar)
{
    ui->setupUi(this);
    idReferencia = idreferencia;
    if (!conn.connOpen()) {
        QMessageBox::warning(this,"Error", "QSqlError: REVISAR LOG");
        QApplication::quit();
        //return;
    }
    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QSqlQueryModel* model = new QSqlQueryModel;
    QSqlQuery * qry = new QSqlQuery(conn.mDatabase);

    qry->prepare("SELECT idc, nombre, DNI, telefono, edad, hora, turno, estado "
                 "FROM pacientesview WHERE codigomed=:codmedico AND fecha=:fecha");
    qry->bindValue(":codmedico", idReferencia); /* completar despues medico activo */
    qry->bindValue(":fecha", QDate::currentDate());
    qry->exec();
    model->setQuery(*qry);
    model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nombre del Paciente"));
    model->setHeaderData(2, Qt::Horizontal, tr("DNI"));
    model->setHeaderData(3, Qt::Horizontal, tr("Telefono"));
    model->setHeaderData(4, Qt::Horizontal, tr("Edad"));
    model->setHeaderData(5, Qt::Horizontal, tr("Hora"));
    model->setHeaderData(6, Qt::Horizontal, tr("Turno"));
    model->setHeaderData(7, Qt::Horizontal, tr("Estado"));
    ui->tableView->setModel(model);

    connect(ui->calendarCitas, SIGNAL(activated(const QDate&)),
            this, SLOT(updateDataCalendar(const QDate)));
}

citasCalendar::~citasCalendar()
{
    delete ui;
    conn.connClose();
}

void citasCalendar::updateDataCalendar(const QDate &d) {
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
//    if (!conn.connOpen()) {
//        QMessageBox::warning(this,"Error", "QSqlError: REVISAR LOG");
//        QApplication::quit();
//        //return;
//    }
    //QSharedPointer<QSqlQueryModel> model(new QSqlQueryModel);
    QSqlQueryModel* model = new QSqlQueryModel;
    //QSharedPointer<QSqlQuery> qry(new QSqlQuery(conn.mDatabase));
    QSqlQuery *qry = new QSqlQuery(conn.mDatabase);
    qry->prepare("SELECT idc, nombre, DNI, telefono, edad, hora, turno, estado "
                 "FROM pacientesview WHERE codigomed=:codmedico and fecha=:fecha");
    qry->bindValue(":codmedico", idReferencia); /* completar despues medico activo */
    qry->bindValue(":fecha", d.toString("yyyy-MM-dd")); //ui->calendar->selectedDate());
    qry->exec();

    model->setQuery(*qry);
    model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nombre del Paciente"));
    model->setHeaderData(2, Qt::Horizontal, tr("DNI"));
    model->setHeaderData(3, Qt::Horizontal, tr("Telefono"));
    model->setHeaderData(4, Qt::Horizontal, tr("Edad"));
    model->setHeaderData(5, Qt::Horizontal, tr("Hora"));
    model->setHeaderData(6, Qt::Horizontal, tr("Turno"));
    model->setHeaderData(7, Qt::Horizontal, tr("Estado"));

    ui->tableView->setModel(model);
    ui->tableView->show();

}

void citasCalendar::on_pushButton_clicked()
{
    this->close();
    conn.connClose();
    menuDoctor * wdg_mDoctor = new menuDoctor(idReferencia);
    wdg_mDoctor->setModal(true);
    wdg_mDoctor->exec();
    delete this;
}

void citasCalendar::on_tableView_clicked(const QModelIndex &index)
{
    int nfila = index.row();
    QList<QString> data;
    for (int i = 1; i < 8; i++){
        QString val = ui->tableView->model()->data(
                    ui->tableView->model()->index(nfila, i)
                    ).toString();
        data.append(val);
    }
    ui->txt_nombrePac->setText(data[0]);
    ui->txt_dni->setText(data[1]);
    ui->txt_telef->setText(data[2]);
    ui->txt_edad->setText(data[3]);
    QTime t = QTime::fromString(data[4]);
    ui->time_horaCita->setTime(t);
    ui->txt_turno->setText(data[5]);
    ui->txt_estado->setText(data[6]);
}


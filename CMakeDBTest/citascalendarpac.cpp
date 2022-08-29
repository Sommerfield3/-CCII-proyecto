#include "citascalendarpac.h"
#include "ui_citascalendarpac.h"
#include "menupaciente.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
//#include <QSharedPointer>


citascalendarpac::citascalendarpac(QString idreferencia, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::citascalendarpac)
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

    qry->prepare("SELECT idc, nombre, espec, hora, turno, estado "
                 "FROM medicosview WHERE codigopac=:codpaciente AND fecha=:fecha");
    qry->bindValue(":codpaciente", idReferencia); /* completar despues medico activo */
    qry->bindValue(":fecha", QDate::currentDate());
    qry->exec();
    model->setQuery(*qry);
    model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nombre del Medico"));
    model->setHeaderData(2, Qt::Horizontal, tr("Especialidad"));
    model->setHeaderData(3, Qt::Horizontal, tr("Hora"));
    model->setHeaderData(4, Qt::Horizontal, tr("Turno"));
    model->setHeaderData(5, Qt::Horizontal, tr("Estado"));
    ui->tableView_6->setModel(model);

    connect(ui->calendarCitas_6, SIGNAL(activated(const QDate&)),
            this, SLOT(updateDataCalendar(const QDate)));
}

citascalendarpac::~citascalendarpac()
{
    delete ui;
    conn.connClose();
}

void citascalendarpac::updateDataCalendar(const QDate &d) {
    ui->tableView_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
//    if (!conn.connOpen()) {
//        QMessageBox::warning(this,"Error", "QSqlError: REVISAR LOG");
//        QApplication::quit();
//        //return;
//    }
    //QSharedPointer<QSqlQueryModel> model(new QSqlQueryModel);
    QSqlQueryModel* model = new QSqlQueryModel;
    //QSharedPointer<QSqlQuery> qry(new QSqlQuery(conn.mDatabase));
    QSqlQuery *qry = new QSqlQuery(conn.mDatabase);
    qry->prepare("SELECT idc, nombre, espec, hora, turno, estado "
                 "FROM medicosview WHERE codigopac=:codpaciente and fecha=:fecha");
    qry->bindValue(":codpaciente", idReferencia); /* completar despues medico activo */
    qry->bindValue(":fecha", d.toString("yyyy-MM-dd")); //ui->calendar->selectedDate());
    qry->exec();

    model->setQuery(*qry);
    model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nombre del Medico"));
    model->setHeaderData(2, Qt::Horizontal, tr("Especialidad"));
    model->setHeaderData(3, Qt::Horizontal, tr("Hora"));
    model->setHeaderData(4, Qt::Horizontal, tr("Turno"));
    model->setHeaderData(5, Qt::Horizontal, tr("Estado"));

    ui->tableView_6->setModel(model);
    ui->tableView_6->show();

}

void citascalendarpac::on_pushButton_6_clicked()
{
    this->close();
    conn.connClose();
    menupaciente * wdg_mpaciente = new menupaciente(idReferencia);
    wdg_mpaciente->setModal(true);
    wdg_mpaciente->exec();
    delete this;
}

void citascalendarpac::on_tableView_6_clicked(const QModelIndex &index)
{
    int nfila = index.row();
    QList<QString> data;
    for (int i = 1; i < 6; i++){
        QString val = ui->tableView_6->model()->data(
                    ui->tableView_6->model()->index(nfila, i)
                    ).toString();
        data.append(val);
    }
    ui->txt_nombremed_6->setText(data[0]);
    ui->txt_especialidad_6->setText(data[1]);
    QTime t = QTime::fromString(data[2]);
    ui->time_horaCita_6->setTime(t);
    ui->txt_turno_6->setText(data[3]);
    ui->txt_estado_6->setText(data[4]);
}


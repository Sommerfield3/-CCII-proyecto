#include "crearmed.h"

crearmed::crearmed(QSharedPointer<functorOperaciones> c, QWidget *parent) : ventana(parent) { cont = c; }

crearmed::~crearmed() {
    qDebug() << "Borrando crearmed";
}

bool crearmed :: validacion() {
    if (nombre.isEmpty() || edad == 0 || dni.isEmpty() || direccion.isEmpty() || especialidad.isEmpty() || turno.isNull() || telefono.isEmpty() || email.isEmpty() || ciudad.isEmpty()) {
        QMessageBox::warning(ventana,"Error", "Debe llenar todos los campos!");
        return false;
    }
    return true;
}

void crearmed :: insertar_en_cargo() {
    if (!db.connOpen()) {
        QMessageBox::warning(ventana,"Error", "QSqlError: REVISAR LOG");
        //QApplication::quit();
    }

    QSqlQuery qry;
    qry.prepare("INSERT INTO `medico`(`nombre`, `edad`, `DNI`, `especialidad`, `direccion`, `telefono`, `email`, `ciudad`, `turno`) "
                "VALUES ('" + nombre +"','"
                    + QVariant(edad).toString() + "','"
                    + dni +"','"
                    + especialidad + "','"
                    + direccion + "','"
                    + telefono + "','"
                    + email + "','"
                    + ciudad + "','"
                    + turno + "')");

    if (!qry.exec()) {
        QMessageBox::information(ventana,"ERROR","error en qry.exec() insertar medico");
        return;
    }

    db.connClose();
}

QString crearmed :: obtener_codid() {
    if (!db.connOpen()) {
        QMessageBox::warning(ventana,"Error", "QSqlError: REVISAR LOG");
        //QApplication::quit();
    }

    QSqlQuery qry;

    qry.prepare("SELECT codigomed FROM medico WHERE DNI= :dni AND especialidad= :especialidad");
    qry.bindValue(":dni", dni);
    qry.bindValue(":especialidad",especialidad);

    QString codmed;
    if (qry.exec()) {
        if (qry.size() == 1) {
            if(qry.first()){
                codmed = qry.value(0).toString();
            }
        } else {
            QMessageBox::warning(ventana,"ERROR", "Datos duplicados");
        }
    }

    db.connClose();
    return codmed;
}

void crearmed :: insertar_en_usuarios(QString codmed) {
    if (!db.connOpen()) {
        QMessageBox::warning(ventana,"Error", "QSqlError: REVISAR LOG");
        //QApplication::quit();
    }

    QString usuario = "med" + dni;

    QSqlQuery qry;
    qry.prepare("INSERT INTO `usuarios`(`cargo`, `usuario`, `clave`, `idreferencia`) "
                "VALUES ('M','" + usuario + "',md5('" +  clave + "'),'" + codmed + "')");

    if (qry.exec()) {
        QMessageBox::information(ventana,"CORRECTO","El medico ha sido ingresado\n"
                                                 "USUARIO: " + usuario + "\nCLAVE: " + clave);
        (*cont)();
    } else {
        QMessageBox::information(ventana,"ERROR","Error al insertar usuario()");
    }

    db.connClose();
}

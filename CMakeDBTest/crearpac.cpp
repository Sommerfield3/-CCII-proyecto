#include "crearpac.h"

crearpac::crearpac(QSharedPointer<functorOperaciones> c, QWidget *parent) : ventana(parent) { cont = c; }

crearpac::~crearpac() {
    qDebug() << "Borrando crearpac";
}

bool crearpac :: validacion() {
    if (nombre.isEmpty() || edad == 0 || dni.isEmpty() || direccion.isEmpty() || telefono.isEmpty() || email.isEmpty() || ciudad.isEmpty()) {
        QMessageBox::warning(ventana,"Error", "Debe llenar todos los campos!");
        return false;
    }
    return true;
}

void crearpac :: insertar_en_cargo() {
    if (!db.connOpen()) {
        QMessageBox::warning(ventana,"Error", "QSqlError: REVISAR LOG");
        //QApplication::quit();
    }

    QSqlQuery qry;
    qry.prepare("INSERT INTO `paciente`(`nombre`, `edad`, `DNI`, `direccion`, `telefono`, `email`, `ciudad`) "
                "VALUES ('" + nombre +"','"
                    + QVariant(edad).toString() + "','"
                    + dni +"','"
                    + direccion + "','"
                    + telefono + "','"
                    + email + "','"
                    + ciudad + "')");

    if (!qry.exec()) {
        QMessageBox::information(ventana,"ERROR","error en qry.exec() insertar paciente");
        //QApplication::quit();
    }

    db.connClose();
}

QString crearpac :: obtener_codid() {
    if (!db.connOpen()) {
        QMessageBox::warning(ventana,"Error", "QSqlError: REVISAR LOG");
        //QApplication::quit();
    }

    QSqlQuery qry;
    qry.prepare("SELECT codigopac FROM paciente WHERE DNI= :dni");
    qry.bindValue(":dni", dni);

    QString codpac;
    if (qry.exec()) {
        if (qry.size() == 1) {
            if(qry.first()){
                codpac = qry.value(0).toString();
            }
        } else {
            QMessageBox::warning(ventana,"ERROR", "Datos duplicados");
            //QApplication::quit();
        }
    }

    db.connClose();
    return codpac;
}

void crearpac :: insertar_en_usuarios(QString codpac) {
    if (!db.connOpen()) {
        QMessageBox::warning(ventana,"Error", "QSqlError: REVISAR LOG");
        QApplication::quit();
    }

    QString usuario = "pac" + dni;

    QSqlQuery qry;
    qry.prepare("INSERT INTO `usuarios`(`cargo`, `usuario`, `clave`, `idreferencia`) "
                "VALUES ('P','" + usuario + "',md5('" +  clave + "'),'" + codpac + "')");

    if (qry.exec()) {
        QMessageBox::information(ventana,"CORRECTO","El paciente ha sido ingresado\n"
                                                 "USUARIO: " + usuario + "\nCLAVE: " + clave);
        (*cont)();
    } else {
        QMessageBox::information(ventana,"ERROR","Error al insertar usuario()");
    }

    db.connClose();
}

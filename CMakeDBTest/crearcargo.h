#ifndef CREARCARGO_H
#define CREARCARGO_H

#include <QString>
#include <QtSql>
#include <QMessageBox>
#include <QSqlError>
#include <QCryptographicHash>
#include <QWidget>
#include <QApplication>
#include <QSharedPointer>
#include <QDebug>
#include "DBConexion.h"
#include "functorOperaciones.h"

namespace std {
class crearcargo;
}

class crearcargo {
public:
    void agregar() {
        if (validacion() == false) {
            qDebug() << "Aqui estoy";
            return;
        } else {}
        insertar_en_cargo();
        insertar_en_usuarios(obtener_codid());
    }
    void set_nombre(QString n) { nombre = n; }
    void set_edad(int e) { edad = e; }
    void set_dni(QString d) { dni = d; }
    void set_direccion(QString dir) { direccion = dir; }
    void set_telefono(QString tel) { telefono = tel; }
    void set_email(QString em) { email = em; }
    void set_ciudad(QString ciu) { ciudad = ciu; }
    void set_especialidad(QString esp) { especialidad = esp; }
    void set_turno(QChar t) { turno = t; }
    void set_clave(QString cl) { clave = cl; }

    virtual ~crearcargo() {}
protected:
    QString nombre;
    int edad;
    QString dni;
    QString direccion;
    QString telefono;
    QString email;
    QString ciudad;
    QString especialidad;
    QChar turno;
    QString clave;
    DBConexion db;
    QSharedPointer<functorOperaciones> cont;

    virtual bool validacion() = 0;
    virtual void insertar_en_cargo() = 0;
    virtual void insertar_en_usuarios(QString) = 0;
    virtual QString obtener_codid() = 0;
};

#endif // CREARCARGO_H

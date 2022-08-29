#ifndef CREARPAC_H
#define CREARPAC_H

#include "crearcargo.h"

class crearpac : public crearcargo
{
public:
    crearpac(QSharedPointer<functorOperaciones>,QWidget*);
    ~crearpac();
protected:
    bool validacion() override;
    void insertar_en_cargo() override;
    void insertar_en_usuarios(QString) override;
    QString obtener_codid() override;
private:
    DBConexion db;
    QWidget* ventana;
};

#endif // CREARPAC_H

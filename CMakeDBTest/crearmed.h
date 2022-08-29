#ifndef CREARMED_H
#define CREARMED_H

#include "crearcargo.h"

class crearmed : public crearcargo
{
public:
    crearmed(QSharedPointer<functorOperaciones>,QWidget*);
    ~crearmed();
protected:
    bool validacion() override;
    void insertar_en_cargo() override;
    void insertar_en_usuarios(QString) override;
    QString obtener_codid() override;
private:
    DBConexion db;
    QWidget* ventana;
};

#endif // CREARMED_H

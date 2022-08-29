#include "functorOperaciones.h"
#include <QDebug>

functorOperaciones::~functorOperaciones() {
    qDebug() << "Borrando puntero functor";
}

void functorOperaciones::operator()(){
	x++;
}

int functorOperaciones::RetornarNumeroOperacionesSesion(){
	return x;
}

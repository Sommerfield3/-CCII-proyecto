#ifndef FUNCTOROPERACIONES_H
#define FUNCTOROPERACIONES_H

class functorOperaciones {
private:
	int x=0;
public:
    ~functorOperaciones();
    void operator()();
    int RetornarNumeroOperacionesSesion();
};

#endif


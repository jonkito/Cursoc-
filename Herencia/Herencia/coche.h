#ifndef COCHE_H
#define COCHE_H

#include "Vehiculo.h"


class Coche : public Vehiculo
{
    public:
        Coche();
        Coche(int, float, float, float, string,int);
        virtual ~Coche();
        string mostrarInformacion();

    protected:

    private:
        int ruedas;
};

#endif // COCHE_H

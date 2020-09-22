#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "telefono.h"
#include "ordenador.h"


class SmartPhone : public Ordenador, public Telefono
{
    public:
        SmartPhone();
        SmartPhone(string, int, float, double, int);
        virtual ~SmartPhone();
        int getAtributoMio();

    protected:

    private:
        int atributoMio;
};

#endif // SMARTPHONE_H

#ifndef ESPADA_H
#define ESPADA_H
#include "pluma.h"


class Espada
{
    public:
        Espada();
        virtual ~Espada();

        void usarPluma();
        void usarPluma2();

    protected:

    private:
        Pluma pluma;
};

#endif // ESPADA_H

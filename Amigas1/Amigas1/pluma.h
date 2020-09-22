#ifndef PLUMA_H
#define PLUMA_H
#include <iostream>

using namespace std;


class Pluma
{
    public:
        Pluma();
        virtual ~Pluma();
        friend class Espada; //damos derecho a esa clase a acceder a las partes privadas.

    protected:

    private:
        void mostrarNombre();
        string nombre;
        int tamanio;
};

#endif // PLUMA_H

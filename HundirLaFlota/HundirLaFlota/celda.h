#ifndef CELDA_H
#define CELDA_H
#include <string>

using namespace std;

enum estados{Inicial, Agua, Tocado, Hundido, Barco};


class Celda
{
    public:
        Celda();
        virtual ~Celda();
        string getCararterEstado();
        estados disparar();
        void ponerBarco();


    protected:

    private:
        estados estado;
};

#endif // CELDA_H

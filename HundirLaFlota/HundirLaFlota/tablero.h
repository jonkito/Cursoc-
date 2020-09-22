#ifndef TABLERO_H
#define TABLERO_H
#include "celda.h"

#include <iostream>
#define TAM 10

using namespace std;

class Tablero
{
    public:
        Tablero();
        void dibujar();
        virtual ~Tablero();
        static int getNumTableros();
        static string letrasString[10];
        estados disparar(int, int);
        void generarBarcos();
    protected:

    private:
        static int numTableros;
        Celda celdas[TAM][TAM];
};

#endif // TABLERO_H

#ifndef JUGADOR_H
#define JUGADOR_H
#include "tablero.h"

using namespace std;

class Jugador
{
    public:
        Jugador(string="Jugador 1");
        virtual ~Jugador();
        //void dibujarTablero();
        void mostrarTableroTapado();
        void mostrarTableroConBarcos(string);
        estados disparar(int, int);
        void generarBarcos();


    protected:

    private:
        string nombre;
        Tablero tablero;
};

#endif // JUGADOR_H

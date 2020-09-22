#ifndef PARTIDA_H
#define PARTIDA_H
#include "jugador.h"
#include <algorithm>
#include <string>


class Partida
{
    public:
        Partida();
        virtual ~Partida();
        void iniciar();


    protected:

    private:
        Jugador jugador1;
        Jugador jugador2;
        bool turno;
        void mostrarTableros(string="Turno");
        void cambiarTurno();
        bool pedirDato();
        bool datoInvalido(string);
        bool letraCorrecta(string);
        bool numeroCorrecto(string);
        int letra;
        int numero;
        estados disparar();
        void generarBarcos();
};

#endif // PARTIDA_H

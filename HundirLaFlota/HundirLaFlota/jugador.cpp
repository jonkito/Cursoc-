#include "jugador.h"

Jugador::Jugador(string nombre)
{
    this->nombre = nombre;
}


//void Jugador::dibujarTablero()
//{
//
//    //Tablero.dibujar();
//
//}

void Jugador::mostrarTableroTapado()
{

    cout << endl << "\tAtaca a: " << nombre << endl;
    tablero.dibujar();

}
void Jugador::mostrarTableroConBarcos(string m)
{

    cout << "\t" << m<< " de: "  << nombre << endl;
    tablero.dibujar();
}

estados Jugador::disparar(int f, int c)
{

   return tablero.disparar(f,c);

}

void Jugador::generarBarcos()
{

    tablero.generarBarcos();

}

Jugador::~Jugador()
{
    //dtor
}

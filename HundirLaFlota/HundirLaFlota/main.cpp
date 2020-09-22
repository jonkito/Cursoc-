#include <iostream>
#include "partida.h"

using namespace std;

int main()
{
  /*  cout << Tablero::getNumTableros() << endl;
    Tablero tablero = Tablero();

    tablero.dibujar();
    cout << Tablero::getNumTableros() << endl;*/

//    Jugador jugador1 = Jugador();
//    Jugador jugador2 = Jugador();
//    Tablero tableroPropio = Tablero();
//    Tablero tableroAjeno = Tablero();
//    tableroPropio.dibujar();
//    tableroAjeno.dibujar();

    Partida partida = Partida();
    partida.iniciar();



    return 0;
}

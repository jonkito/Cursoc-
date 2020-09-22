/**
* Nombres.cpp
* Programa que implementa la clase nombres y utilza los templates
* para crear una lista de nombres.
*
* Pello Xabier Altadill Izura
* Compilando: g++ -o Nombre Lista.o Nombre.cpp
*/
#include "Nombre.h"
#include "Lista.h"
// Constructor copia
Nombre::Nombre(Nombre const & original)
{
    nombre = new char;
    nombre = original.getNombre();
}


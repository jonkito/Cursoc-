#include "celda.h"

Celda::Celda()
{
    estado=Inicial;
}

Celda::~Celda()
{
    //dtor
}

string Celda::getCararterEstado()
{

    switch(estado){

        case Inicial:
            return "~";
        case Agua:
            return "o";
        case Tocado:
            return "x";
        case Hundido:
            return "*";
        case Barco:
            return "B";
        default:
            return "@";



    }

}

estados Celda::disparar()
{

    switch(estado)
    {
        case Inicial:
            estado=Agua;
            break;
        case Tocado:
        case Hundido:
            return Inicial;
            break;
        case Barco:
            estado = Tocado;
            break;
        default:
            return Inicial;
    }

}

void Celda::ponerBarco()
{

    estado = Barco;

}

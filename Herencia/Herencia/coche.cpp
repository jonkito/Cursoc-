#include "coche.h"

Coche::Coche()
{
    ruedas = 3;
}

Coche::Coche(int plazas, float largo, float ancho, float alto, string nombre, int ruedas):Vehiculo( plazas, largo, ancho, alto, nombre)  //llamamos al contructor de vehiculo de esta manera
{
    this->ruedas = ruedas;
}

string Coche::mostrarInformacion()
{
    stringstream mensaje;
    mensaje << Vehiculo::mostrarInformacion() << "Ruedas " << ruedas;
    return mensaje.str();

}

Coche::~Coche()
{
    //dtor
}

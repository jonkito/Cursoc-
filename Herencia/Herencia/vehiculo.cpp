#include "vehiculo.h"

Vehiculo::Vehiculo()
{

    velocidad = 0;
    plazas = 0;
    ancho = 0;
    largo = 0;
    alto = 0;
    nombre = "";

}

Vehiculo::Vehiculo(int plazas, float largo, float ancho, float alto, string nombre)
{
        velocidad = 0;
        this->plazas = plazas;
        this->largo = largo;
        this->ancho = ancho;
        this->alto = alto;
        this->nombre = nombre;

}

void Vehiculo::acelerar()
{
    velocidad++;
}

void Vehiculo::frenar()
{
    velocidad--;
}

void Vehiculo::acelerar(float v)
{
    velocidad+= v;
}

void Vehiculo::frenar(float v)
{
    velocidad-= v;
}

string Vehiculo::mostrarInformacion()
{
    stringstream mensaje;
    mensaje << "\n------------------------------------------------\n" << "Vehiculo: " << nombre << "\nVelocidad " << velocidad << "\nAlto " << alto << "\nAncho " << ancho << "\nLargo" << largo;
    return mensaje.str();
}

Vehiculo::~Vehiculo()
{
    //dtor
}

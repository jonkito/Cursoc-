#include "Garage.hpp"

Garage::Garage()
{
    plazas = 10;
    plazasOcupadas = 0;
}

Garage::Garage(int plazas)
{
 this->plazas = plazas;
 this->plazasOcupadas = 0;
}


Garage::~Garage()
{
    //dtor
}

bool Garage::entra(Coche c){
    if(plazasOcupadas >= plazas) {
        return false;
    }
    plazasOcupadas++;
    return true;
}

bool Garage::sale(Coche c) {
    if(estaVacio()) {
        return false;
    }
    plazasOcupadas--;
    return true;
}

bool Garage::estaLleno() {
    if(plazasOcupadas >= plazas) {
        return true;
    }
    return false;
}

bool Garage::estaVacio() {
    if(plazasOcupadas <= plazas) {
        return true;
    }
    return false;
}

int Garage::plazasLibres() {
    return plazas - plazasOcupadas;
}


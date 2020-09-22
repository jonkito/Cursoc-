#include "smartphone.h"

SmartPhone::SmartPhone()
{
    //ctor
}

SmartPhone::SmartPhone(string n, int num, float vel, double sal, int a):Ordenador(n, vel),Telefono(num, sal)
{
    atributoMio = a;
}

SmartPhone::~SmartPhone()
{
    //dtor
}

int SmartPhone::getAtributoMio()
{
    return atributoMio;
}

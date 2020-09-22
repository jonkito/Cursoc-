#include "Objeto.hpp"

Objeto::Objeto()
{
    atributo = 555;
}

Objeto::Objeto(int atributo) {
    this->atributo = atributo;
    privado = &atributo;
}

Objeto::Objeto(float valor) {
    this->valorFloat=valor;
    punteroFloat = &valorFloat;
}

int Objeto::devuelveAlgo() {
    return atributo;
}

int Objeto::getValorPunteroPrivado() {
    return *privado;
}

Objeto::~Objeto()
{
    //dtor
}

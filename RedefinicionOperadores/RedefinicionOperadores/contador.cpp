#include "contador.h"

using namespace std;

contador::contador()
{
    this->valor=10;
}

contador::contador(int valor) {
        this->valor= valor;
}
contador::~contador()
{
    cout << "Objeto destruido" << endl;
}

void contador::operator ++() {
    valor++;
}

void contador::operator ++(int) {
    valor+=5;
}

contador contador::operator+(const contador & c) {
    return contador(c.valor + this->valor);
}

bool contador::operator == (const contador & c) {
    return this->valor==c.valor;
}

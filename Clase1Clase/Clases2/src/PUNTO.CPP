#include "Punto.h"


Punto::Punto()
{
    //ctor
}

Punto::Punto(int x, int y) {
    this->x = x;
    this->y = y;
}

/*void Punto::setX(int x) {
    this->x = x;
}*/

int Punto::getX() {
    return this->x;
}

int Punto::getY() {
    return this->y;
}

void Punto::mover(int x, int y) {
    this->x += x;
    this->y += y;
}

string Punto::mostrar() {
    stringstream coutvirtual;
    coutvirtual << "(" << x << ", " << y << ")";
    return coutvirtual.str();
}

double Punto::distancia(Punto p) {
    cout << p.x;
    cout << this->x;
    return sqrt((pow(p.x - this-> x, 2)) + pow(p.y - y,2));
    return 0;
}

Punto::~Punto()
{
    //dtor
}

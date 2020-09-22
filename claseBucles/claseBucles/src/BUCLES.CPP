#include "Bucles.hpp"


Bucles::Bucles()
{
    maximo = 2;
}

Bucles::~Bucles()
{
    //dtor
}

// Contructor parametrizado
Bucles::Bucles(int maximo){
    this->maximo = maximo;
}
// Bucle tipo while
void Bucles::bucleWhile(int maximo){
    int temp = 0;
    cout << " iniciamos el bucle WHILE: " << temp << " y max " << maximo << endl;
    while (temp < maximo) {
        cout << temp << " es menor que " << maximo << endl;
        temp++;
    }
}

void Bucles::bucleWhile(){
    bucleWhile(maximo);
}

// Bucle tipo for
void Bucles::bucleFor(int maximo){
    int temp = 0;
    cout << " iniciamos el bucle FOR: " << temp << " y max " << maximo << endl;
    for (temp=0; temp < maximo; temp++) {
        cout << temp << " es menor que " << maximo << endl;
    }
}

// Bucle tipo do while
void Bucles::bucleDoWhile(int maximo){
    int temp = 0;
    cout << " iniciamos e bucle: " << temp << " y max " << maximo << endl;
    do {
        cout << temp << " es menor que " << maximo << endl;
        temp++;
    } while (temp < maximo);
}

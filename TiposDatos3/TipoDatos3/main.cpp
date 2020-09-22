#include <iostream>
#include <string.h>

using namespace std;

struct ficha {
    char nombre[50];
    int edad;
    char dni[10];
};

void mostrar(ficha f) {
    cout << "Nombre: " << f.nombre << endl;
    cout << "Edad: " << f.edad << endl;
    cout << "DNI: " << f.dni << endl;
    return;
}


int main()
{
    cout << "Hello world!" << endl;
    ficha ficha1;
    strcpy(ficha1.nombre,"Marujita Diaz");
    ficha1.edad = 25;
    strcpy(ficha1.dni,"45817855S");
    mostrar(ficha1);
    ficha ficha2;
    strcpy(ficha2.nombre,"Marujita");
    ficha2.edad = 23;
    strcpy(ficha2.dni,"45817565S");
    mostrar(ficha2);
    return 0;
}

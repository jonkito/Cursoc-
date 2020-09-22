#include <iostream>
#include <stdlib.h>
#include <limits>
#include <windows.h>
#include <math.h>

using namespace std;


int mostrarMenu();


double leerNumeroTeclado(char[]);
bool seleccion(int);

struct datos {
    double dato1;
    double dato2;
};

datos obtenerDatos();

int main()
{
    bool terminar = false;

    while(!terminar) {
        int op = mostrarMenu();
        terminar = seleccion(op);
        cout << endl;
        system("pause");
        cout << endl;
        system("cls");
    }

    return 0;
}

datos obtenerDatos() {
    datos retorno;
    retorno.dato1 = leerNumeroTeclado("Introduce el primer numero: ");
    retorno.dato2 = leerNumeroTeclado("Introduce el segundo numero: ");
    return retorno;
}

int mostrarMenu() {
    int op;
    int retorno, digito;
    //char validar[1];
    cout << "----------------------------------------------" << endl;
    cout << "-                 1. Sumar                   -" << endl;
    cout << "-                 2. Restar                  -" << endl;
    cout << "-                 3. Potencia                -" << endl;
    cout << "-                 4. Salir                   -" << endl;
    cout << "----------------------------------------------" << endl;
    do {
        digito = leerNumeroTeclado("Introduce una opcion: ");
        if(digito <1 || digito > 4) {
            cout << "Introduce un numero entre 1 y 4!!" << endl;
        }
    }while (digito < 1 || digito > 4);
    return digito;
}

double leerNumeroTeclado(char mensaje[]) {
    double retorno;
    cout << mensaje;
    while(!(cin >> retorno)) {
        cout << "Por favor, introduce un valor entero" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << mensaje;
    }
    return retorno;
}


bool seleccion(int op) {
    datos d;
    switch(op) {
    case 1:
        d = obtenerDatos();
        cout << "El resultado es: " << d.dato1 + d.dato2;
        return false;
    case 2:
        d = obtenerDatos();
        cout << "El resultado es: " << d.dato1 - d.dato2;
        return false;
    case 3:
        d = obtenerDatos();
        cout << "El resultado es: " << pow(d.dato1, d.dato2);
        return false;
    case 4:
        cout << "Hasta luego!!!!!";
        return true;
    default:
        cout << "Error no controlado!!!!!" << endl;
    }
}

#include <iostream>
#include "Objeto.hpp"

using namespace std;

int main()
{
    // Aqui guardaremos el resultado
    int resultado = 0;
    cout << " Vamos a jugar con los objetos." << endl;
    // Creamos la instancia del objeto puntero
    Objeto objeto = Objeto();
    //Creamos un puntero a ese objeto,
    // pero cuidado, no asignarle un constructor directamente
    Objeto *objetopuntero;
    // esto si...
    objetopuntero = &objeto;
    // Invocamos los metodos
    resultado = objetopuntero->devuelveAlgo();
    cout << "Resultado-> " << resultado << endl;

    resultado = objeto.getValorPunteroPrivado();
    cout << "Resultado-> " << resultado << endl;

//    resultado = objeto->getValorPunteroPrivado();
//    cout << "Resultado-> " << resultado << endl;

    Objeto objeto2((float)3.6);

    float resultado2 = *(objeto2.punteroFloat);
    cout << "Resultado punteroFloat-> " << resultado2 << endl;

    // Observese la diferencia al acceder al atributo publico:
    cout << " El valor de atributo con Objeto es: " << objeto.atributo << endl;
    cout << " El valor de atributo con Objeto es: " << objetopuntero->atributo << endl;
    return 0;
}

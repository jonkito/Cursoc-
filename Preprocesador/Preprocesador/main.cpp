/**
* Preprocesador.cpp
* Programa c++ que muestra el uso del preprocesador.
*
* Pello Xabier Altadill Izura
* Compilacion: g++ -o Preprocesador Preprocesador.cpp
*
*/
// include se utiliza para poder utilizar codigo externo,
// generalmente las librerias standar o nuestras propias librerias
using namespace std;
#include <iostream>
// Las variables de preprocesador sirven para que el compilador haga ciertas
// modificaciones en el codigo fuente
#define PI 3.1415
#define BATMAN "Bruce Wayne"
#define MISTERX "Felipe Gonzalez"
#define REVELAR
#define BUFFER 255
// podemos definir FUNCIONES, aunque sin complicarlas ya que dificulta
// la depuracion y se pasa el tipado de variables por el arcoltriunfo
#define PORCENTAJE(a,b) (a*b)/100
// Guardias de inclusion
// Estructura condicional para evitar multiples inclusiones
// La siguiente structura comprueba si NO se ha definido la variable FSTREAM
#ifndef FSTREAM
// si no se ha definido, la definimos
#define FSTREAM
#include <fstream>
#endif // fin de condicion
// macro de comillas:
#define write(x) cout << #x << endl;
int main ()
{
    int i = 345;
    float var = 4.67;
    char buffer[BUFFER]; // automaticamente el compilador traduce: buffer[255]
#ifdef PI
    cout << "El valor PI es: " << PI << ": ten fe en el caos" << endl;
#else
    cout << "PI no esta definido..." << endl;
#endif
// ahora miramos una variable de preprocesador que no esta:
// y asi en este caso no se revelamos quien es BATMAN...
#ifdef REVELAR
    cout << "Batman realmente se trata de: " << BATMAN << endl;
#endif
// con esta orden eliminamos la variable:
#undef REVELAR
// y este es el efecto:
#ifdef REVELAR
    cout << "MisterX realmente es: " << MISTERX << endl;
#endif
    cout << "var * PI = " << (var * PI) << endl;
// mostramos la llamada a la funcion
    cout << "Porcentaje 15% de "<< i << " es: " << PORCENTAJE(i,15) << endl;
// llamada a la macro. Atencion, convertira MISTERX?
    write(Hay que ver que lujo verdad MISTERX);
    return 0;
}

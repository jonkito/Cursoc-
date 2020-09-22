/**
* Depurador.cpp
* Programa c++ que muestra el uso del preprocesador para depurar
*
* Pello Xabier Altadill Izura
* Compilacion: g++ -o Depurador Depurador.cpp
*
*/
// include se utiliza para poder utilizar codigo externo,
// generalmente las librerias standar o nuestras propias librerias
using namespace std;
#include <iostream>
// Disponemos de estas variables de macro predefinidas, muy utiles para depurar.
// __DATE__ : sustituye esa variable por la fecha
// __TIME__ : sustituye esa variable por la hora
// __LINE__ : sustituye esa variable por la linea de programa
// __FILE__ : sustituye esa variable por el nombre del fichero del programa
// definimos la variable DEBUG para activar la depuracion
#define DEBUG
// y mostramos el uso de assert(), su disponibilidad dependera del compilador.
// cuando invocamos la funcion assert, si lo que tiene como parametro es TRUE
// no habra problema pero si es false saltara un codigo de depuracion que le digamos
#ifndef DEBUG
    #define ASSERT(x)
#else
#define ASSERT(x) \
if (! (x)) { \
    cout << "error detectado, fallo: " << #x << "\n"; \
    cout << " linea" << __LINE__ << " del fichero " <<__FILE__ << "\n";\
}
#endif
// funcion principal para las pruebas:
int main ()
{
    int i = 345;
    float var = 4.67;
    cout << "hola hoy es: " << __DATE__ << endl;
    ASSERT(i>5);
    cout << "Este es el fichero: " << __FILE__ << endl;
    cout << "Estamos en la linea: " << __LINE__ << endl;
    ASSERT(i==0);
    return 0;
}

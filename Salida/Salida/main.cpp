/**
* FlujosOut.cpp
* Programa para mostrar el uso de flujos de SALIDA
*
* Pello Xabier Altadill Izura
* Compilacion: g++ -o FlujosOut FlujosOut.cpp
*/
using namespace std;
#include <iostream>
#include <cstring>

using namespace std;
// cout tambien utiliza buffers y nos podemos llevar sorpresas al recoger datos
// aunque si queremos tirar de la cadena ejecutamos:
// Funcion principal
int main ()
{
    cout << flush;
    unsigned int i;
    char nombre_apellidos[25];
    char linea[80];
    int entero;
    char caracter;
    char frase[] = "Clatu verata nictu\n";
// si en cin teniamos get aqui tenemos: put
// mandamos un saludo
    cout.put('K').put('a').put('i').put('x').put('o').put('\n');
// vamos a mostrar una linea:
    entero = strlen(frase);
// con esto la mostramos entera
    cout.write(frase,entero);
// con esto... no
    cout.write(frase, (entero-5));
    cout << " ahora con formato: " << endl;
// vamos a ponerla con cierto formato: width y fill
    cout.width(30); // esto mete espacios en blanco equivalente = setw(30)
    cout << frase << endl;
    cout.width(50); // esto vuelve a meter espacios
    cout.fill('>'); // y esto RELLENA los ESPACIOS
    cout << frase << endl;
// Estableciendo el estado de cout con setf
// alineacion: setf(ios::left) y setf(ios::right)
// hay mas, para investigar: ios::showbase, ios::internal, etc...
    cout.setf(ios::right);
    entero = 666;
// podemos alterar la base con dec, oct y hex
    cout << "entero hexadecimal alineado a la derecha: " << hex << entero << endl;
    return 0;
}

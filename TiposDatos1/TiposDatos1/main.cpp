/** * Tipos.cpp * Programa para sacar el tamaño de cada tipo de datos * Pello Xabier Altadill Izura * * Compilado: g++ Tipos.cpp -o Tipos */
using namespace std;
#include <iostream>
int main () {
// Sacamos el tamaño de cada tipo
    cout << "El tama�o del int es:\t\t" << sizeof(int) << " bytes.\n";
    cout << "El tama�o del short es:\t\t" << sizeof(short) << " bytes.\n";
    cout << "El tama�o del long es:\t\t" << sizeof(long) << " bytes.\n";
    cout << "El tama�o del char es:\t\t" << sizeof(char) << " bytes.\n";
    cout << "El tama�o del float es:\t\t" << sizeof(float) << " bytes.\n";
    cout << "El tama�o del double es:\t" << sizeof(double) << " bytes.\n";
// Sacamos por salida standar un mensaje cout << "Termino el programa\n";
return 0;
}


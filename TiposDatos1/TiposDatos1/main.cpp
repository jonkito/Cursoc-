/** * Tipos.cpp * Programa para sacar el tama√±o de cada tipo de datos * Pello Xabier Altadill Izura * * Compilado: g++ Tipos.cpp -o Tipos */
using namespace std;
#include <iostream>
int main () {
// Sacamos el tama√±o de cada tipo
    cout << "El tamaÒo del int es:\t\t" << sizeof(int) << " bytes.\n";
    cout << "El tamaÒo del short es:\t\t" << sizeof(short) << " bytes.\n";
    cout << "El tamaÒo del long es:\t\t" << sizeof(long) << " bytes.\n";
    cout << "El tamaÒo del char es:\t\t" << sizeof(char) << " bytes.\n";
    cout << "El tamaÒo del float es:\t\t" << sizeof(float) << " bytes.\n";
    cout << "El tamaÒo del double es:\t" << sizeof(double) << " bytes.\n";
// Sacamos por salida standar un mensaje cout << "Termino el programa\n";
return 0;
}


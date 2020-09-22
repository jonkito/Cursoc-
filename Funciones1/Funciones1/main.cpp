/** * Funcion.cpp * Programa con llamada a una funcion * * Pello Xabier Altadill Izura * * Compilado: g++ Funcion.cpp -o Funcion */
using namespace std;
#include <iostream>
// Funcion: llamada
int llamada (int x, int y) {
    cout << "Estamos en la funcion!!" << endl;
    return (x+y);
    }

int main() {   // Estos comentarios son propios de C++
    cout << "Vamos a llamar a la funcion.." << endl;
// Llamamos a la funcion // Llamamos a una funcion y asignamos
    int z = llamada(5,7);
    cout << "Resultado:" << z << endl;
// Llamada desde el output cout << "Resultado:" << llamada(6,7) << endl; cout << "Programa terminado \n" << endl;
    return 0;
}

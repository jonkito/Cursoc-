/**
* ReferenciaFunciones.cpp
* Programa que muestra el uso de referencias en las funciones
*
* Pello Xabier Altadill Izura
*
* Compilado: g++ ReferenciaFunciones.cpp -o ReferenciaFunciones
*/
using namespace std;
#include <iostream>
// 1Âo funcion que intercambia dos valores
void exchange (int *refa, int *refb);
// 2Âo funcion -sobrecargada- que intercambia dos valores
void exchange (int &refa, int &refb);
int main()
{
// Definimos un dato y su referencia
    int a, b;
    cout << "Asignamos valores: " << endl;
    a = 45;
    b = 21;
    cout << "Valores: a=" << a << " b=" << b << endl;
    cout << "Hacemos intercambio con exchange(int *refa, int *refb): " << endl;
    exchange(&a, &b); // Con esta llamada invocamos la primera funcion!!
    cout << "Valores: a=" << a << " b=" << b << endl;
    cout << "Hacemos intercambio con exchange(int &refa, int &refb): " << endl;
    exchange(a, b); // Con esta llamada invocamos la segunda funcion!!
    cout << "Valores: a=" << a << " b=" << b << endl;
    cout << "Programa terminado" << endl;
    return 0;
}
// 1Âo funcion que intercambia dos valores
void exchange (int *refa, int *refb)
{
    int tmp;
    tmp = *refa;
    *refa = *refb;
    *refa = tmp;
}
// 2Âo funcion -sobrecargada- que intercambia dos valores
void exchange (int &refa, int &refb)
{
    int tmp;
    tmp = refa;
    refa = refb;
    refb = tmp;
}

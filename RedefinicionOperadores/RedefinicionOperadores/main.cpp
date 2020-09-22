#include <iostream>
#include "contador.h"

using namespace std;

int main()
{
    contador c1 = contador();
    contador c2 = contador(10);
    //c1++;
    //++c2;
    contador c3 = c1 + c2;
    cout << "El valor de la suma es: " << c3.getContador() << endl;
    if(c1 == c2) {
        cout << "Son iguales" << endl;
    } else {
        cout << "Direferentes" << endl;
    }
    //cout << "son iguales->" << igual << endl;
    cout << "El valor de c1 es: " << c1.getContador() << endl;
    cout << "El valor de c2 es: " << c2.getContador() << endl;
    return 0;
}

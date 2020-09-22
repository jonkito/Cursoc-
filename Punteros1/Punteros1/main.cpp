#include <iostream>
#include <limits>
#include <string>

using namespace std;

int suma(int *, int *);
int leerEntero(string mensaje = "Introduce un número: ");

int main()
{
    //cout << "Introduce un número: ";
    int num1 = leerEntero();
    int num2 = leerEntero("Introduce otro número: ");
    int resultado = suma(&num1, &num2);
    cout << "El valor del primer número es " << num1;
    cout << " el valor del segundo número es: " << num2 << endl;
    cout << "La suma es: " << resultado << endl;
    return 0;
}

int leerEntero(string mensaje) {
    int dato;
    cout << mensaje;
    while(!(cin >> dato)) {
        cout << "Debes introducir un número: " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << mensaje;
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return dato;
}

int suma(int *a, int *b) {
    int resul = *a + *b;
    *a = 10;
    *b = 10;
    return resul;
}


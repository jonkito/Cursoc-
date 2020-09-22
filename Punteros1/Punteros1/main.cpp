#include <iostream>
#include <limits>
#include <string>

using namespace std;

int suma(int *, int *);
int leerEntero(string mensaje = "Introduce un n�mero: ");

int main()
{
    //cout << "Introduce un n�mero: ";
    int num1 = leerEntero();
    int num2 = leerEntero("Introduce otro n�mero: ");
    int resultado = suma(&num1, &num2);
    cout << "El valor del primer n�mero es " << num1;
    cout << " el valor del segundo n�mero es: " << num2 << endl;
    cout << "La suma es: " << resultado << endl;
    return 0;
}

int leerEntero(string mensaje) {
    int dato;
    cout << mensaje;
    while(!(cin >> dato)) {
        cout << "Debes introducir un n�mero: " << endl;
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


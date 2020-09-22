#include <iostream>

using namespace std;

int main()
{
    int num1 = 80, num2;
    short enteroCorto;
    char carater;
    int *punto;
    int *punteroNum = &num1;
    int *punteroNum2 = &num2;

    int **direccion = &num2;  //guarda la dirección de memoria del puntero

    cout << "La variable entera num1 vale: " << num1 << endl;
    cout << "La referencia de num1 es: " << &num1 << endl;
    cout << "La dirección de num2: " << direccion;
    cout << "El puntero vale: " << punteroNum << endl;
    cout << "El puntero apunta a: " << *punteroNum << endl;

    cout << "La variable entera num2 vale: " << num2 << endl;
    cout << "La referencia de num2 es: " << &num2 << endl;
    cout << "El puntero vale: " << punteroNum2 << endl;
    cout << "El puntero apunta a: " << *punteroNum2 << endl;

    return 0;
}

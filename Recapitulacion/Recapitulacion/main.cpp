#include <iostream>
#include <windows.h>

using namespace std;

#define PI 3.14159

int main()
{
    float radio = 0.0;
    double perimetro = 0.0, area = 0.0;
    char respuesta;
    do{
        system("cls");
        cout << "Introduce el radio del circulo: " << endl;
        cin >> radio;


        perimetro = 2 * PI * radio;
        area = PI * (radio * radio);

        cout << "La solucion es la siguiente: " << endl << " area: " << area << " y el perimetro: " << perimetro << endl;

        cout << endl << "Desea calcular otro area: " << endl;

        cin >> respuesta;
        while (respuesta != 'S' && respuesta && 's' && respuesta != 'n' && respuesta != 'N') {
            cout << "La respuesta debe ser s/n!!!" << endl;
            cin >> respuesta;
        }
    } while(respuesta == 'S' || respuesta == 's');

    return 0;
}

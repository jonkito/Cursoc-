#include <iostream>
#include "vehiculo.h"
#include "coche.h"

using namespace std;

int main()
{
    Vehiculo coche = Vehiculo(5, 4.5, 1.62, 1.7, "citroen");
    cout << coche.mostrarInformacion();

    Coche coche2 = Coche();
    cout << coche.mostrarInformacion();

    Coche ford = Coche(5, 4.5, 1.62, 1.7, "ford", 4);
    cout << ford.mostrarInformacion();
    return 0;
}

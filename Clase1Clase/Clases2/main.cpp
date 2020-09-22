#include <iostream>
#include <PUNTO.H>

using namespace std;

int main()
{
    Punto p = Punto(0,4);
    cout << p.mostrar() << endl;

    Punto p2 = Punto(7,4);

    cout << p2.mostrar() << endl;

    //p.mover(-3,4);
    cout << p.mostrar() << endl;

    //p2.mover(3,-2);
    cout << p2.mostrar() << endl;

    cout << "La distancia entre " << p.mostrar() <<  " y " << p2.mostrar() << " es: " << p.distancia(p2) << endl;
    return 0;
}

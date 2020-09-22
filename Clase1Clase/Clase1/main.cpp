#include <iostream>
#include <COCHE.HPP>
#include <GARAGE.HPP>

using namespace std;

int main()
{
//    Coche instancia = Coche("seat", 900, 122);   //clase -> instancia = constructor
//    instancia.mostrarCoche();
//    Garage gar= Garage(4);
//    gar.entra(instancia);
//    for(int i = 0; i < 5; i++) {
//        if(!(gar.entra(instancia))) {
//            cout << "STOP!!!!! no hay más sitio" << endl;
//        }else {
//            cout << "Quedan las siguiente plazas libres: " << gar.plazasLibres() << endl;
//;       }
//    }
//
//    for(int i = 0; i < 7; i++) {
//        if(!(gar.sale(instancia))) {
//            cout << "NO ES POSIBE!!!!!" << endl;
//        }else {
//            cout << "Ha salido un coche" << endl;
//            cout << "Quedan las siguiente plazas libres: " << gar.plazasLibres() << endl;;
//        }
//    }

    Coche coches[10];
    cout << "Hay " << Coche::getNumCoches() << " coches." << endl;

    return 0;
}

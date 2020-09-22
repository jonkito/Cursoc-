#include "Coche.hpp"
#include <string>

using namespace std;

Coche::Coche()
{
    marca = "";
    cilindrada = 0;
    caballos = 0;
    velocidad = 0;
    encendido = false;
    Coche::numCoches++;

}

Coche::Coche(string marca, int cilindrada, int caballos)
{
    this->marca = marca;
    this->cilindrada = cilindrada;
    this->caballos = caballos;
    this->velocidad = 0.0;
    this->encendido = false;
    Coche::numCoches++;
}

void Coche::arrancar() {
    encendido = true;
    if(encendido) {
        velocidad++;
    }
}

Coche::~Coche() {
    this->marca = marca;
    this->cilindrada = cilindrada;
    this->caballos = caballos;
    this->velocidad = 0.0;
    this->encendido = false;
    Coche::numCoches--;
    cout << "Siniestro total!!!!!!!!!" << endl;
}

void Coche::parar() {
    velocidad = 0;
}

void Coche::acelerar() {
    if(encendido) {
        velocidad++;
    }
}

void Coche::mostrarCoche() {
    cout  << "Información del coche: " << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Marca: " << this->marca << endl;
    cout << "Cilindrada: " << this->cilindrada << endl;
    cout << "Caballos: " << this->caballos << endl;
    cout << "Velocidad: " << this->velocidad << "Km/h" << endl;
    if(encendido) {
        cout << "Arrancado!!"<< endl;
    }else {
        cout << "Apagado!!" << endl;
    }
}

int Coche::numCoches=0;

int Coche::getNumCoches()
{

    return Coche::numCoches;

}

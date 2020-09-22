#ifndef COCHE_H
#define COCHE_H
#include <string>
#include <iostream>

using namespace std;


class Coche
{
    public:

        Coche();
        Coche(string marca, int cilindrada, int caballos);
        virtual ~Coche();

        int cilindrada;
        string marca;
        int caballos;
        float velocidad;
        bool encendido;

        void arrancar();
        void acelerar();
        void parar();
        void mostrarCoche();

        static int getNumCoches();

    protected:

    private:
        static int numCoches; //variable que comparten todos los objetos de la clase coche
};

#endif // COCHE_H

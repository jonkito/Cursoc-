#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
#include <sstream>

using namespace std;


class Vehiculo
{
    public:
        Vehiculo();
        Vehiculo(int, float, float, float, string);
        virtual ~Vehiculo();
        void acelerar();
        void frenar();
        void acelerar(float);
        void frenar(float);
        string mostrarInformacion();

    protected:
        float velocidad;
        int plazas;
        float ancho;
        float largo;
        float alto;
        string nombre;

    private:


};

#endif // VEHICULO_H

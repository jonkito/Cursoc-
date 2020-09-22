#ifndef GARAGE_H
#define GARAGE_H
#include <COCHE.HPP>


class Garage
{
    public:

        Garage();
        Garage(int);
        virtual ~Garage();
        int Getplazas();
        void SetPlazas(int plazas);
        int GetPlazasOcupadas(int plazasOcupadas);
        void SetPlazasOcupadas();
        bool entra(Coche);
        bool sale(Coche);
        bool estaVacio();
        int plazasLibres();

    protected:

    private:
        int plazas;
        int plazasOcupadas;
        bool estaLleno();
};

#endif // GARAGE_H

#ifndef GREMLIN_H
#define GREMLIN_H
#include <string>
#include <iostream>

using namespace std;

class Gremlin
{
    public:
        enum estados {Normal, Crisalida, Transformado};
        Gremlin();
        virtual ~Gremlin();
        Gremlin(const Gremlin& g);
        Gremlin(string nmb,int ed, int p);
        void correr();
        void morder();
        void dormir();
        string getNombre() const;
        int peso;
        estados estado;
        void cambiarEstado();
        void cambiarEstado(estados e);
        void mostrarEstado();
        string getEstado();
        int getValor();
        void setValor(int);
        //void comer(const Gremlin* g);
    protected:

    private:
        string nombre;
        int edad;
        int* punteroValor;
};

#endif // GREMLIN_H

void comer ( Gremlin* g);

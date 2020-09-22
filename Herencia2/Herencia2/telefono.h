#ifndef TELEFONO_H
#define TELEFONO_H
#include <string>

using namespace std;


class Telefono
{
    public:
        Telefono();
        Telefono(int, double);
        virtual ~Telefono();
        double getSalgo(){return saldo;}

    protected:

    private:
        int numero;
        double saldo;
};

#endif // TELEFONO_H

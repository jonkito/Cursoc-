#ifndef ORDENADOR_H
#define ORDENADOR_H
#include <string>

using namespace std;

class Ordenador
{
    public:
        Ordenador();
        Ordenador(string, float);
        virtual ~Ordenador();
        string getSo(){return so;}

    protected:

    private:
        string so;
        float velocidad;
};

#endif // ORDENADOR_H

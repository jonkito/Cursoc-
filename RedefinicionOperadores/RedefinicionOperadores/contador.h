#ifndef CONTADOR_H
#define CONTADOR_H
#include <iostream>


class contador
{
    public:
        contador();
        contador(int v);
        virtual ~contador();
        void setContador(int) {this->valor =valor;}
        int getContador() {return valor;}
        void operator ++(); //redefinimos el operador ++ para poder utilizarlo como queramos. operador prefijo
        void operator ++(int); //operador sufiijo
        contador operator+(const contador &);
        bool operator == (const contador &);

    protected:

    private:
        int valor;
};

#endif // CONTADOR_H

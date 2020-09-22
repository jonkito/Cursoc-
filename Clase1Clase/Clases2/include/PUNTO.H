#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <cmath>

using namespace std;


class Punto
{
    public:
        Punto();
        Punto(int x, int y);
        string mostrar();
        void mover(int x, int y);
        virtual ~Punto();
        //void setX(int x);
        double distancia(Punto);
        int getX();
        int getY();

    protected:

    private:
        int x;
        int y;
};

#endif // PUNTO_H

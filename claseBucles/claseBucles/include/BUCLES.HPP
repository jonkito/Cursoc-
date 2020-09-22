#ifndef BUCLES_H
#define BUCLES_H
#include <iostream>

using namespace std;

class Bucles
{
    public:
    // Constructor
    Bucles();
    // Destructor
    ~Bucles();
    // Contructor parametrizado
    Bucles(int maximo);
    // Bucle tipo while
    void bucleWhile(int maximo);
    void bucleWhile();
    // Bucle tipo for
    void bucleFor(int maximo);
    // Bucle tipo do while
    void bucleDoWhile(int maximo);

    private:
        int maximo;
};

#endif // BUCLES_H

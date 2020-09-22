#include <iostream>

using namespace std;

void funcionPrincipal (void (*accion) (int,int));
void carga( int balas,int granadas);

int main()
{
    void (*funcion) (int, int) = carga;

    funcionPrincipal(funcion);
    carga(22,23);
    return 0;
}


void carga(int balas, int granadas)
 {
     cout << "Cargando balas " << balas << endl;
     cout << "Cargando granadas " << granadas << endl;

 }

 void funcionPrincipal (void (*accion) (int,int))
 {
     accion(70,90);
 }

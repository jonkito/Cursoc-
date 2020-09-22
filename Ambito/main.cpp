#include <iostream>

#define GLOBALCONSTANTE 10

const int GLOBALCONSTANTE2 = 20;

using namespace std;

double globalVariable = 5;

void mostrarGlobal() {
    cout << "Constante global: " << GLOBALCONSTANTE2 << endl;
    cout << "Constante global define: " << GLOBALCONSTANTE << endl;
    cout << "Función variable global" << globalVariable << endl;
}

int main()
{
    cout << "Constante global: " << GLOBALCONSTANTE2 << endl;
    cout << "Constante global define: " << GLOBALCONSTANTE << endl;
    cout << "Función variable global" << globalVariable << endl;
    mostrarGlobal();

    return 0;
}

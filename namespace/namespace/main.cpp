#include <iostream>

using namespace std;

namespace miEspacio
{

    int contador = 5;

}

int contador = 10;

int main()
{
    int contador = 2;
    cout << "LOCAL: " << contador << endl;
    cout << "GLOBAL: " << ::contador << endl;
    cout << "NAMESPACE: " << miEspacio::contador << endl;
    return 0;
}

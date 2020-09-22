#include <iostream>
#include "smartphone.h"

using namespace std;

int main()
{
    SmartPhone Xiaomi = SmartPhone("OLA",3,800,10.56,23);

    cout << "Atributo: " << Xiaomi.getAtributoMio();
    cout << "\nSO: " << Xiaomi.getSo();
    cout << "\nSaldo: " << Xiaomi.getSalgo();
    return 0;
}

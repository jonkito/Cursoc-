#include <iostream>
#include "gremlin.hpp"

using namespace std;

int main()
{
cout << "Iniciando programa. " << endl;
// Definimos un gremlin
Gremlin tbautista;
// y lo movemos por la ciudad
tbautista.correr();
tbautista.morder();

tbautista.mostrarEstado();
tbautista.cambiarEstado();
tbautista.mostrarEstado();
tbautista.cambiarEstado(Gremlin::Crisalida);
tbautista.mostrarEstado();


// Mostramos su peso
cout << "El gremlin pesa: " << tbautista.peso << endl;
// Le hacemos comer:
comer(&tbautista);
// Mostramos su peso otra vez
cout << "El valor es: " << tbautista.getValor() << endl;
cout << "El gremlin pesa ahora: " << tbautista.peso << endl;
cout << "Finalizando programa\n " << endl;
return 0;

}

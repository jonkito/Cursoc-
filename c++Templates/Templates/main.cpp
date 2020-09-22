#include "lista.h"
#include "nombre.h"

// Funcion principal para las pruebas
int main ()
{
// Asi es como se implementan objetos con clases plantilla
    Lista<Nombre> listanombres;
    Lista<Nombre> *tmp, *final;
    Nombre test = Nombre("Prince");
// podemos definir Listas de cualquier tipo basico
    Lista<int> listaenteros;
// guardamos la posicion inicial; final es un puntero, le pasamos la direccion
    final = &listanombres;
// vamos a crear unos cuantos NODOS y los a&ntilde;adimos
    tmp = new Lista<Nombre>;
    tmp->agregar(final);
    final = tmp;
// otra mas...
    tmp = new Lista<Nombre>;
    tmp->agregar(final);
    final = tmp;
// otra mas...
    tmp = new Lista<Nombre>;
    tmp->agregar(final);
    final = tmp;
// y ahora recorremos la lista:
    tmp = &listanombres;
    while (tmp)
    {
        cout << tmp->getDato().getNombre() << endl;
        tmp = tmp->siguiente();
    }
    return 0;
}

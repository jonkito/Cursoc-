/**
* Lista.hpp
* Clase que define una estructura de datos lista Generica
*
* Pello Xabier Altadill Izura
*/
using namespace std;
#include <iostream>
// Asi es como declaramos una clase plantilla
// template <class nombre_generico> class NombreClase
template <class GENERICO> class Lista
{
public:
    // Constructor
    Lista();
// Constructor
    Lista(GENERICO elemento);
// Constructor copia
    Lista(Lista const &);
// Destructor
    ~Lista();
// agregar elemento
    void agregar(Lista *nodo);
// se mueve hasta el siguiente dato
    Lista* siguiente();
// comprueba si existe un elemento
    bool existe(GENERICO dato);
// comprueba si existe un elemento
    GENERICO getDato()
    {
        return this->dato;
    }
private:
// un elemento que apunta a otra lista, asi sucesivamente
    Lista *ladealao;
// el dato es del tipo GENERICO
    GENERICO dato;
};

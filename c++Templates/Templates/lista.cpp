/**
* Lista.cpp
* Programa que implementa la clase de Lista generica
*
* Pello Xabier Altadill Izura
* Compilacion: g++ -c Lista.cpp
*
*/
#include "lista.h"
// En la implementacion debemos detallar el tipo de dato,
// especificando todo el tema de plantilla, o sea que en lugar
// de poner Lista:: delante de cada funcion debemos poner TODO
// el churro siguiente
// template <class GENERICO> Lista<GENERICO>::nombreFuncion
// Constructor
template <class GENERICO> Lista<GENERICO>::Lista() {
ladealao = 0;
//dato = 0;
cout << "Nueva lista creada." << endl;
}
// Constructor
template <class GENERICO>
Lista<GENERICO>::Lista(GENERICO elemento) {
ladealao = 0;
dato = elemento;
cout << "Nueva lista creada. Dato inicial: " << dato << endl;
}
// Constructor copia
template <class GENERICO> Lista<GENERICO>::Lista(Lista
const & original) {
ladealao = new Lista;
ladealao = original.ladealao;
dato = original.dato;
}
// Destructor
template <class GENERICO> Lista<GENERICO>::~Lista() {
}
// agregar elemento: AL LORO con donde se pone el retonno
template <class GENERICO> void Lista<GENERICO>::agregar(Lista *nodo) {
nodo->ladealao = this;
ladealao = 0;
}

// se mueve hasta el siguiente dato
template <class GENERICO> Lista<GENERICO>*
Lista<GENERICO>::siguiente() {
return ladealao;
}
//Lista template <class GENERICO> Lista<GENERICO>::siguiente();
// comprueba si existe un elemento
template <class GENERICO> bool
Lista<GENERICO>::existe(GENERICO dato) {
return false;
}

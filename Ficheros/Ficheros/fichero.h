/**
* Fichero.hpp
* Clase que define el objeto Fichero, un objeto que
sirve gestionar un fichero
*
* Pello Xabier Altadill Izura
*
*/
using namespace std;
#include <iostream>
#include <fstream> // atencion hay que incluir esto
enum tipo_fichero { ENTRADA, SALIDA, APPEND };
class Fichero {
public:
Fichero();
Fichero(char *nombre, tipo_fichero tipo);
~Fichero();
Fichero(Fichero const &);
char *getNombre() const { return this->nombre;}
// operaciones sobre ficheros
int cerrar () const; // cierra el fichero
char leer() const; // lee del fichero
void escribir (char linea[255]) const; // escribe linea
private:
// esta funcion decide que tipo de fichero iniciar
void inicializaFichero();
tipo_fichero tipo;
char *nombre;
ofstream *saliente;
ifstream *entrante;
};

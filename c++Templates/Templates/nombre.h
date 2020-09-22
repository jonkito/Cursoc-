/**
* Nombres.hpp
* Clase que define los nombres. No es mas que una
cobaya para probar el template
*
* Pello Xabier Altadill Izura
*/
// Esta clase la usaremos en el template, no hay que definir nada en especial
class Nombre
{
public:
// Constructor
    Nombre():nombre("Jezabel") {}
// Constructor
    Nombre(char *nombre)
    {
        this->nombre = nombre;
    }
// Constructor copia
    Nombre(Nombre const &);
// Destructor
    ~Nombre() {}
// agregar elemento
    char* getNombre() const
    {
        return this->nombre;
    }
private:
// el dato
    char *nombre;
};

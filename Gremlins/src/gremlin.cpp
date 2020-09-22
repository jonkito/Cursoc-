#include "gremlin.hpp"

Gremlin::Gremlin() {
nombre = " Moway";
peso = 1;
punteroValor=new int;
*punteroValor = 12;
cout << "Gremlin creado." << endl;
}

Gremlin::Gremlin(const Gremlin& g) {
    peso= g.peso;
    edad = g.edad;
    estado = g.estado;
    nombre = g.nombre;
    punteroValor = new int;
    *punteroValor=33;
}

Gremlin::Gremlin (string nmb,int ed, int p) {
nombre = nmb;
edad = ed;
peso = p;
}

Gremlin::~Gremlin() {
cout << "Aaaargh!\nGremlin destruido." << endl;
}

// El gremlin corre
void Gremlin::correr() {
cout << "Jaja grrrr!! jajaja!" << endl;
}

// El gremlin duerme
void Gremlin::dormir() {
cout << "zzzZZZZzzzzz" << endl;
}

// El gremlin muerde
void Gremlin::morder() {
cout << "roaar &ntilde;am &ntilde;am" << endl;
}

// FUNCION CONST!!!
// Devuelve el nombre del gremlin
string Gremlin::getNombre() const {
return nombre;
}

// Definimos esta funcion aparte de la clase
// Con ella el gremlin come y aumenta su atributo peso.
void comer ( Gremlin* g) {
g->peso++;
g->peso++;
// Invocamos la mordedura para que coma??
 g->morder(); //ERROR no podemos invocar una funcion NO CONSTANTE!!!
// en cambio si podemos invocar getNombre
cout << "Nombre: " << g->getNombre() << endl;
}


void Gremlin::cambiarEstado() {
    switch(estado) {
        case Normal:
            estado = Crisalida;
            break;
        case Crisalida:
            estado = Transformado;
            break;
        case Transformado:
            estado = Normal;
            break;
        default:
            estado = Normal;
            break;
    }
}

void Gremlin::cambiarEstado(estados e) {
    estado = e;
}

void Gremlin::mostrarEstado() {
    cout << "El estado de " << nombre << " es: " <<  getEstado() << endl;


}

string Gremlin::getEstado() {
        switch(estado) {
        case Normal:
            return "Normal";
        case Crisalida:
            return "Crisalida";
        case Transformado:
            return "Transformado";
        default:
            return "Indefinido";
    }
}

int Gremlin::getValor() {
    return* punteroValor;
}


void Gremlin::setValor(int v) {
    *punteroValor=v;
}

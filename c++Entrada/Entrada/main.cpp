/*Flujos.cpp
* Programa para mostrar el uso de flujos
*
* Pello Xabier Altadill Izura
* Compilacion: g++ -o Flujos Flujos.cpp
*/
using namespace std;
#include <iostream>
#include <cstdio> // para usar EOF
// Disponemos de varios flujos:
// cin : para la entrada de distintis tipos de datos (std input)
// cout : para la salida de distintos tipos de datos (std output)
// cer: para la salida de errores (std error)
// clo: para la salida de errores y redireccion a ficheros tipo log
// cin utiliza buffers y nos podemos llevar sorpresas al recoger datos
// si el usuario no los mete bien. Por ejemplo si se pide una palabra y se meten
// dos, la siguiente vez que se pida otro dato se tomara el que se habia metido!
// lo podemos evitar con cin.ignore
// Funcion principal
int main ()
{
    char nombre_apellidos[255];
    char linea[80];
    int entero;
    char caracter;
// ATENCION
// hay que tener cuidado con los strings. prueba a meter nombre y apellido
// y veras que el string solo se llena hasta el primer espacio en blanco,
// o incluso para a la siguiente variable i y el programa casca.
    cout << "Mete tu nombre y tu apellido resalao: " << endl;
    cin.getline(nombre_apellidos,80);
    cout << "Tu nombre y apellidos: " << nombre_apellidos << endl;
// con esta llamada evitamos que se tome en cuenta las sobras
    cin.ignore(255, '\n');
// Entrada multiple!
    cout << "Mete una palabra y un numero entero" << endl;
    cin >> nombre_apellidos >> entero;
    cout << "El texto: " << nombre_apellidos << " y el entero: " << entero << endl;
// explicacion: >> es un operador que se puede sobrecargar como hemos visto
// anteriormente: la expresion cin >> nombre_apellidos devuelve otro objeto iostream
// y se podria reescribir asi: (cin >> nombre_apellidos) >> entero;
// cin.get(string,tama&ntilde;o) para recoger string completos
    cout << " Mete un string largo con espacios. " << endl;
    cin.getline(linea,80);
    cout << "resultado: " << linea << endl;

// hay veces que puede interesar ignorar un numero de caracteres hasta llegar al final
// de la linea, para eso podemos usar la funcion cin.ignore(70,’\n’); en lugar de \n
// podemos usar cualquier caracter de terminacion que nos interese.
// no hay que olvidar que cin es un buffer. Que pasa si solo queremos leer un caracter
// sin tener que ’sacarlo’ del buffer? podemos usar cin.peek() y si queremos meter
// un caracter podemos usar cin.putback(’.’) -meteria un . en el buffer de cin
// cin.get() tomando un unico caracter. Si metemos mas imprimira todos
// puede usarse parametrizado: cin.get(caracter)
    cout << "Vete metiendo caracteres. termina con un ." << endl;
    while ( (caracter = cin.get()) != EOF)
    {
        if ( cin.peek() == '.' ) //peek fisgar
        {
            cout << "nos vamos" << endl;
            break;
        }
        cout << caracter;
    }
    cin.ignore(255,'\n');
    return 0;
}

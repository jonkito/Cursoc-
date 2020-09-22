/**
* Excepciones.cpp
* codigo que muestra como capturar excepciones y evitar
que el programa
* finalice inesperadamente.
*
* Pello Xabier Altadill Izura
*
*/
using namespace std;
#include <iostream>
#include <fstream>
#include <stdexcept>
// programa principal, para las pruebas
int main ()
{
    int i;
    float flotante;
    char *palabra;
    char buffer[5];
    ifstream ficheroInexistente;
// para capturar excepciones debemos crear un bloque try-catch
// que englobe algun momento problematico o critico del programa:
// try { codigo; } catch(TipoDeError) { codigo_corrector; }
// lo habitual suele ser alguna situacion que dependa de la existencia
// o no de un fichero, la entrada de datos de un usuario, etc..
// El programa no puede controlar lo que le meten, pero puede estar
// preparado para el error, reconducir la ejecucion y corregir la situacion
    try
    {
        // inicio del bloque. Preparamos una serie de putadas...
        cout << "Mete lo primero que se te ocurra, distinto de float: " << endl;
        cin >> flotante;
        char * buff = new char[100000000];
        ficheroInexistente.open("MotorDeAgua.txt");
        ficheroInexistente.getline(buffer,255);
        ficheroInexistente.close();
    }
    catch(std::bad_alloc& error_memoria)
    {
        cout << "Error de asignacion" << error_memoria.what() << endl;
    } // podemos seguir capturando
    catch (std::exception& stdexc)
    {
        // este es el tipo de error que se espera
// y entre llaves metemos el codigo que se ejecuta en caso de error.
        cout << "Error general, mensaje: " << stdexc.what() << endl;
    }
    return 1;
}

#include "tablero.h"


using namespace std;

int Tablero::numTableros=0;
string Tablero::letrasString[]={"A","B","C","D","E","F","G","H","I","J"};

Tablero::Tablero()
{
    for(int i = 0; i < TAM; i++) {

        for(int j = 0; j < TAM; j++) {

            celdas[i][j] = Celda();

        }

    }
    //cout << "Tablero creado!!!" << endl;
    numTableros++;
    //cout << "Hay " << numTableros << " tableros." << endl;
}

Tablero::~Tablero()
{
    //cout << "Tablero destuido!!!!" << endl;
    numTableros--;
    //cout << "Quedan " << numTableros << " tableros." << endl;

}

void Tablero::dibujar()
{

    cout << endl << "\t  ";
    for(int i = 0; i< TAM ; i++) {

        cout << " " << letrasString[i] << " ";

    }
    cout << endl;
    for(int i = 0; i< TAM ; i++) {

        cout << "\t" << i + 1;
        if(i < 9){ cout << " ";}
        for(int j = 0; j < TAM; j++) {

                cout << " ";
                cout << celdas[i][j].getCararterEstado();
                cout << " ";

        }

        cout << endl;

    }

}

int Tablero::getNumTableros() {

    return numTableros;

}

estados Tablero::disparar(int f, int c)
{

    celdas[f][c].disparar();


}

void Tablero::generarBarcos()
{

    for(int i=0; i<5;i++)
    {
        celdas[i+3][5].ponerBarco();
    }

}

#include <iostream>
#include <string>

using namespace std;
#define TAM 15

int main()
{
    int arreglo[TAM], arreglo2[TAM];
    //iniciamos los arrays
    for(int i = 0; i < TAM; i++) {

            arreglo[i] = arreglo2[i] = 0;

    }

    for(int i = 0; i < TAM; i++) {

            cout << "Arreglo1->" << arreglo[i] << " Arreglo2->" << arreglo2[i] << endl;

    }
    char arrayc[] = {'a','b','c','d',};
    char nombre[] = "Isaac";
    cout << "Mostrando un array de caracteres: " << endl;

    int tamano = sizeof(nombre)/sizeof(char);
    for(int i = 0; i < tamano; i++) {

            cout << "Valor de componente " << i << ": " << nombre[i] << endl;;

    }

    enum dias {Ene,Feb,Mar,Abr,May,Jun,Jul,Ago,Sep,Oct,Nov,Dic, NumerosMeses};
    string NombresMese[NumerosMeses]={"Ene","Feb","Mar","Abr","May","Jun","Jul","Ago","Sep","Oct","Nov","Dic"};

    int diasLibre[NumerosMeses] = {1,2,3,4,5,6,7,8,9,10,11,12};
    dias tmpDia;
    for(int i = 0; i <NumerosMeses; i++) {

        //tmpDia = dias[i];
        cout << "Dias Libres :" << NombresMese[dias(i)]  << " = " << diasLibre[i] << endl;

    }

    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int tamanoFilas = sizeof(matriz)/sizeof(matriz[0]);
    int tamanoColumnas = sizeof(matriz[0])/sizeof(matriz[0][0]);
    cout << "El tamaño del array es: Filas: " << tamanoFilas << " Columnas: " << tamanoColumnas << endl;

    for(int i = 0; i<tamanoFilas;i++) {


        for(int j=0; j <tamanoColumnas; j++) {

            cout << matriz[i][j] << "\t";

        }

        cout << endl;

    }

    return 0;
}

#include <iostream>

using namespace std;

void mostrarArray(int [], int); //cabecera para definir la función y poder usarla en otro cpp
void ordenarArray(int [], int [], int);

int main()
{
    const int TAMNUMEROS = 10;
    int numeros[TAMNUMEROS];
    int numeros2[] = {2,3,78,65,45,67,3,4,56,78,90,100};

    int tamnumeros = sizeof(numeros2)/sizeof(int); //devuelve el tamaño del array. no hay length como en java por ejemplo.

    for (int i = 0; i < TAMNUMEROS ; i++) {
            numeros[i] = i * i + i;
    }

    mostrarArray(numeros, TAMNUMEROS);
    mostrarArray(numeros2, tamnumeros);
    int numerosOrdenados[tamnumeros];
    ordenarArray(numeros2, numerosOrdenados, tamnumeros);
    mostrarArray(numerosOrdenados, tamnumeros);
    return 0;
}

void mostrarArray(int arr[], int numero) {
    cout << endl << "Los valores del array de tamaño " << numero << " son: " << endl;
    for (int i = 0; i < numero; i++) {

            if (i == numero -1) {
                cout << arr[i];
            } else {
                cout << arr[i] << ", ";
            }
    }
}

void ordenarArray(int arr[], int arra2[], int longi) {
    cout << "Le vamos a dar la vuelta!!!!" << endl;
    for (int i = longi -1; i >= 0; i--) {
            arra2[i] = arr[longi - 1 - i];
    }

    cout << "Lo vamos a ordenar!!!!" << endl;

    for (int i = 0; i <= longi; i++) {
            arra2[i] = arr[i];
    }

    for (int j = 0; j < longi -1; j++) {
            for(int i = 0; i< longi -1 ; i++) {
               if(arra2[i + 1] < arra2[i]) {
               int aux = arra2[i];
               arra2[i] = arra2[i + 1];
               arra2[i + 1] = aux;
                }
            }
    }
}


#include <stdlib.h>
#include <time.h>
#include<iostream>

using namespace std;
#define INTENTOS 7
int generarAleatorio();
void mostrarIntentos(int);

int main()
{
    int c;
    int num = generarAleatorio();
    int intentos = 0;
    cout << "He pensado un numero adivinalo: " << endl;
    do {
        cout << "Introduce un numero: " << endl;
        cin >> c;
        intentos++;
        if (num == c) {
            cout << "Correcto, has acertado!!! Has utilizado " << intentos << " intentos." << endl;
        }else if (num < c) { //num es menor
            cout << "Has fallado, el numero es menor." << endl;
            mostrarIntentos(intentos);
        }else {             //num es mayor
            cout << "Has fallado, el numero es mayor" << endl;
            mostrarIntentos(intentos);
        }
    }while(num != c && intentos < INTENTOS);
    if(num != c) {
        cout << "HAS PERDIDO ERES UN PAQUETE!!!"<< endl;
    }
    return 0;

}

int generarAleatorio() {
    srand(time(NULL));
    return 1 + rand() % (100); //para sacar numeros entre el 1 y el 100
}

void mostrarIntentos(int intentos){
    cout << "Llevas " << intentos << " intento";
    if(INTENTOS - intentos > 1) {
            cout << "s";
    }
    cout << endl;
    cout << "Te quedan " << INTENTOS - intentos << " intentos." << endl;
}

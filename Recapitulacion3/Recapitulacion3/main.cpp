#include <iostream>

using namespace std;

void superiorDerecha(int);
void superiorIzquierda(int);
void inferiorDerecha(int);
void inferiorIzquierda(int);

int main()
{
    int tam;

    cout << "Dime el tamaño del rombo: ";
    cin >> tam;

    superiorDerecha(tam);
    inferiorDerecha(tam);
    superiorIzquierda(tam);
    inferiorIzquierda(tam);
    return 0;
}

void superiorDerecha(int t) {
    for(int i = 0; i < t; i++) {
            for(int j = t; j < t - i; j++) {
                cout << "  ";
            }
            for(int j = 0; j < i; j++) {
                cout << "* ";
            }
        cout << endl;
    }

}

void superiorIzquierda(int t) {
    for(int i = 0; i < t; i++) {
            for(int j = 0; j < t - i; j++) {
                cout << "  ";
            }
            for(int j = 0; j < i; j++) {
                cout << "* ";
            }
        cout << endl;
    }

}

void inferiorIzquierda(int t) {
    for(int i = 0; i < t; i++) {
            for(int j = t; j < t + i; j++) {
                cout << "  ";
            }
            for(int j = 0; j < t - i; j++) {
                cout << "* ";
            }
        cout << endl;
    }
}

void inferiorDerecha(int t) {
    for(int i = t; i >= 0; i--) {
            for(int j = t; j < t - i; j++) {
                cout << "  ";
            }
            for(int j = 0; j < i; j++) {
                cout << "* ";
            }
        cout << endl;
    }

}

void rombo(int t) {
    for (int i = 0;;){

    }
}

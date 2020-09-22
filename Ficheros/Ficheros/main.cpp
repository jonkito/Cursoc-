#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream* ficheroSalida;
    ficheroSalida = new ofstream("FicheroTexto.txt", ios::app);
    ficheroSalida->write("HOLA\n", 5);
    *ficheroSalida << "HOLA CHIQUETETE";
    ficheroSalida->close();


    ifstream* ficheroEntrada;
    char texto;
    ficheroEntrada = new ifstream("FicheroTexto.txt", ios::in);
    while(ficheroEntrada->get(texto)) //lee caracter a caracter
    {
        cout << texto;
    }
    ficheroEntrada->close();


    ifstream inFile("FicheroTexto.txt");
    //inFile.open("FicheroTexto.txt", ios::in);
    string texto2;
    cout << "\n --------------------------------------------------------- \n";
    while(getline(inFile, texto2))
    {

        cout << texto2 << endl;

    }
    inFile.close();


    ifstream fichero("numeros.txt");
    cout << "\n --------------------------------------------------------- \n";
    int a,b;
    int i = 1;
    while(fichero >> a >> b)
    {

        cout << "Fila: " << i << " Num 1: " << a << " Num 2: " << b << endl;
        i++;

    }
    fichero.close();
    return 0;
}

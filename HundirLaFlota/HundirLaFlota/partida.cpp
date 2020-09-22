#include "partida.h"

Partida::Partida()
{
    turno = true;
    jugador2 = Jugador("Jugador 2");
}


void Partida::iniciar()
{
    generarBarcos();
    mostrarTableros();
    while(pedirDato()) {
        estados resultadoDisparo;
        resultadoDisparo = disparar();
        cout << "resultadoDisparo->" << resultadoDisparo;
        if(resultadoDisparo == Inicial)
        {
            cout << "Ya has disparado ahí. Vuelve a tirar.";
            system("pause");
            system("cls");
        }else if(resultadoDisparo == Tocado)
        {
            cout << "TOCADO!. Vuelve a tirar.";
            system("cls");
        }else if(resultadoDisparo == Hundido)
        {
            cout << "HUNDIDO!!!!!.";

        }else
        {
            cambiarTurno();
        }
        //cambiarTurno();
        mostrarTableros();

    }

}

estados Partida::disparar()
{

    if(turno){
       return jugador2.disparar(numero, letra);
    }else{
       return jugador1.disparar(numero,letra);
    }
}

bool Partida::pedirDato()
{

    string lectura;
    cout << "Introduce tirada(FIN para acabar:)";
    cin >>lectura;
    while((lectura.length()<2 || lectura.length() >3) || datoInvalido(lectura))
    {

        cout << "Introduce un valor valido: ";
        cin >> lectura;

    }

    if(lectura == "FIN")
        {
            return false;
        }
    return true;

}

void Partida::cambiarTurno()
{
    //cout << "\33[2J\033[1;1H"; //limpiar el terminal linux
    system("cls");
    mostrarTableros("Resultado");
    system("pause");
    system("cls");
    cout << "CAMBIO DE JUGADOR!!!!";
    system("pause");
    system("cls");
    turno=!turno; //si es true pone false y viceversa

}

void Partida::mostrarTableros(string m)
{

    if(turno) {
        jugador1.mostrarTableroConBarcos(m);
        jugador2.mostrarTableroTapado();

    }else {

        jugador2.mostrarTableroConBarcos(m);
        jugador1.mostrarTableroTapado();

    }


}


bool Partida::datoInvalido(string dato)
{

    string letra, numero;
    if(dato == "FIN")
    {
        return false;
    }
        letra = dato.substr(0,1);
        transform(letra.begin(), letra.end(), letra.begin(), ::toupper);
        numero=dato.substr(1,2);

        if(letraCorrecta(letra) && numeroCorrecto(numero))
        {
            return false;

        }
        return true;

}

bool Partida::letraCorrecta(string l)
{
    for(int i = 0; i < TAM; i++ ){

        if(l==Tablero::letrasString[i]) {
            letra=i;
            return true;
        }

    }
    return false;
}


bool Partida::numeroCorrecto(string n)
{

    int number;
    try{
        number = atoi(n.c_str());
    }catch(exception& e){
        return false;
    }
    if(number>0 && number <= TAM){
        numero=number-1;
        return true;
    }
    return false;

}

void Partida::generarBarcos()
{

    jugador1.generarBarcos();
    jugador2.generarBarcos();

}

Partida::~Partida()
{
    //dtor
}

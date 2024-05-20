#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main ()
{
    int opcus, ganar = 0, perder = 0, empatar = 0, terminar = 0;
    do
    {
    cout <<"INGRSE UNA DE LAS SIGUIENTES OPCIONES"<< endl << endl;
    cout <<"1. Piedra" << endl << "2. Papel" << endl << "3. Tijera" << endl << endl;
    int opcpc, t;
    t = time(NULL);
    srand(t);
    opcpc=rand()%3+1;

    cout << "Ingrese un numero para jugar: ";
    cin >> opcus;

    switch (opcpc)
    {
        case 1:
        if (opcus==1)
        {
            cout << "La computadora eligio: " << opcpc << endl;
            cout << "EMPATE" << endl;
            empatar = empatar+1;
        }

        else if (opcus==2)
        {
            cout << "La computadora eligio: " << opcpc << endl;
            cout << "GANO" << endl;
            ganar = ganar+1;
        }


        else if (opcus==3)
        {
            cout << "La computadora eligio: " << opcpc<< endl;
            cout << "PERDIO"<< endl;
            perder=perder+1;
        }

        else
        {
            cout << "La computadora eligio: " << opcpc<< endl;
            cout << endl << endl <<"Termino el juego"<< endl;
        }
        break;

        case 2:
        if (opcus==1)
        {
            cout << "La computadora eligio: " << opcpc<< endl;
            cout << "PERDIO"<< endl;
            perder=perder+1;
        }

        else if (opcus==2)
        {
            cout << "La computadora eligio: " << opcpc << endl;
            cout << "EMPATE"<< endl;
            empatar=empatar+1;
        }


        else if (opcus==3)
        {
            cout << "La computadora eligio: " << opcpc<< endl;
            cout << "GANO"<< endl;
            ganar = ganar+1;
        }

        else
        {
            cout << "La computadora eligio: " << opcpc<< endl;
            cout << endl << endl <<"Termino el juego"<< endl;
        }
        break;

        case 3:
        if (opcus==1)
        {
            cout << "La computadora eligio: " << opcpc<< endl;
            cout << "GANO"<< endl;
            ganar = ganar+1;
        }

        else if (opcus==2)
        {
            cout << "La computadora eligio: " << opcpc<< endl;
            cout << "PERDIO"<< endl;
            perder=perder+1;
        }


        else if (opcus==3)
        {
            cout << "La computadora eligio: " << opcpc<< endl;
            cout << "EMPATE"<< endl;
            empatar=empatar+1;
        }

        else
        {
            cout << "La computadora eligio: " << opcpc<< endl;
            cout << endl << endl << "Termino el juego"<< endl;
        }
        break;

        default:
        break;

    }
    

    } while (opcus != terminar);

    cout << "Veces empatadas: " << empatar <<endl;
    cout << "Vences ganadas: " << ganar <<endl;
    cout << "Veces perdidas: " << perder <<endl;
    
return 0; 
}
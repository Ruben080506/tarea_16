// Juego deonde se busca adivinar un número que se genera aleatoriamente entre 100 y 50.
// AL usuario se le asignarán pistas para adivinar el número generado, tiene de 3 a 5 oportunidades para adivinar

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    const int opor = 5;
    srand(time(NULL));
    int num = 50 + rand() % (100 - 50);
    cout << endl << "El número aleatorio es: " << num;
    int num_user;

    int cont=0;
    bool ganaste=false;

    cout << endl<< "Adivina el número correcto entre 1 y 100";
    cout << "\n-----------------------------------------------------------";
    
    while (cont < opor && ganaste==false)
    {
        cout << "\nElige un número: ";
        cin >> num_user;

        if (num_user>num)
        {
            cout << "debes ingresar un número más bajo";
        }
        else if (num_user<num)
        {
            cout << "debes ingresar un número más alto";
        }
        else if(num_user==num)

            ganaste=true;
        cont++;
    }

    if(ganaste)
    {
        cout<<endl<<"felicidades, ganaste :-)";
    }
    else
        cout<<"\nperdiste :-(";   
    return 0;
}
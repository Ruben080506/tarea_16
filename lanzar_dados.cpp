//4) Juego "Lanzar dados". Diseñe el programa que simule el lanzamiento de dos dados. 
//El usuario gana cuando ambos dados sacan el mismo número, o cuando un dado saca el valor de 1 y el otro saca el valor de 6.
//Los dos dados se lanzan al mismo tiempo. El usuario tiene 4 oportunidades para tirar los dados.


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    
    int intentos = 4;

    cout << "¡Bienvenido a 'Lanzar dados'!" << endl;
    cout << "Tienes 4 oportunidades para lanzar dos dados." << endl;

    while (intentos > 0) {
        cout << "Intento #" << (5 - intentos) << ": ";
        cin.ignore();

        int dado1 = rand() % 6 + 1; 
        int dado2 = rand() % 6 + 1; 

        cout << "Dado 1: " << dado1 << endl;
        cout << "Dado 2: " << dado2 << endl;

        if (dado1 == dado2) {
            cout << "¡Felicidades! Los dos dados tienen el mismo número. ¡Has ganado!" << endl;
            break;
        }
        else if ((dado1 == 1 && dado2 == 6) || (dado1 == 6 && dado2 == 1)) {
            cout << "¡Felicidades! Un dado sacó un 1 y el otro sacó un 6. ¡Has ganado!" << endl;
            break;
        }
        else {
            cout << "No has ganado. Inténtalo nuevamente." << endl;
        }

        intentos--;
    }

    if (intentos == 0) {
        cout << "¡Lo siento! Has agotado tus oportunidades. No has ganado." << endl;
    }

    return 0;
}

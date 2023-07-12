//5) Un programa pide dentro de un proceso repetitivo(bucle while), 
//un entero para imprimir su respectiva tabla de multiplicar, es decir,
//que por cada entero ingresado se imprime la tabla correspondiente a ese número.
//El proceso termina cuando la tabla ingresada corresponda a cero (0).

#include <iostream>

using namespace std;

int main() {
    int numero;

    while (true) {
        cout << "Ingresa un número para imprimir su tabla de multiplicar (ingresa 0 para salir): ";
        cin >> numero;

        if (numero == 0) {
            break;
        }

        cout << "Tabla de multiplicar del " << numero << ":" << endl;
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }
    }

    cout << "Fin del programa. ¡Hasta luego!" << endl;

    return 0;
}

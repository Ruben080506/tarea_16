#include<iostream>

using namespace std;

int main ()
{
    //imprime un saludo en la pantalla 20 veces
    int k=0;
    while(k<20)
    {
        cout<<endl<<"Bienvenido a la PUCE Esmeraldas"<<(k+1);
        k++;

    }
    //ejemplo de bucle decendente while}

    k=50;
    while(k>=20)
    {
        cout<<endl<<"El valor actual de k es :"<<k;
        cout<<",  "<<"EL valor de k por ahora es :"<<(k*10);
        k--;
    }
    return 0;

}
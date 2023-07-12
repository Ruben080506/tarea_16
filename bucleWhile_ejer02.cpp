//Se lee un enetro que indica una tabla de multiplicar 
//El entero debe estar comprendido entre 10 y 50 
//se pide imprimir la tabla desde el 2 hasta el 12
//use el bucle while

#include<iostream>

using namespace std;

main()
{
    cout<<"Este programa muestra la tabla de multiplicar correspondiente entre 10 y 50";
    cout<<"\n-----------------------------------------------";

    int num;
    cout<<"\nIngresa un número entre 10 y 50 : ";
    cin>>num;

    if(!(num>=10 && num<=50))
    {
        cout<<"\nIngresa un número entero entre 10 y 50 ";
        return 0;//termina la ejecución del programa 
    }
    else
    {
        cout<<"\nLa tabla será de el número :"<<num<<endl;  
          
        int cont=1;
        while(cont<=12)
        {
            cout<<num<<" * "<<cont<<" = "<<(num * cont)<<endl;
            cont++;
        }
    }
    
    
    return 0;

}
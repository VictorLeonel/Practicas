/******************************************************************************
                              Programa #27
Encontrar la suma de los cuadrados de los enteros del 1 al N.
*******************************************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
    {
        int suma = 0, cuadrado, numero;
        
        cout <<"\n"<< "Suma de los cuadrados de los enteros del 1 al N."<<"\n";
        cout <<"\n"<< "Digite un Numero   "; cin>>numero;
        
        for(int i=1; i<=numero; i++)
            {
                cuadrado = i*i;
                suma += cuadrado;
            }  
        
        cout<<"\n"<<"El resultado de la Suma es: "<<suma<<endl;
    
        getch();
        return 0;
    }
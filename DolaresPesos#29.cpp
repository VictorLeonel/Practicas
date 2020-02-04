/****************************************************************************************
                              Programa #29
Convertir dolares en formato decimal al equivalente en monedas
*****************************************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
    {
        float preciodolar, dolares, pesos;

        cout <<"\n"<< "Convercion de dolares a pesos"<<"\n";

        cout <<"\n"<< "Ingrese el precio actual del dolar "; cin>>preciodolar;

        cout <<"\n"<< "Ingrese la cantidad de Dolares a Convertir "; cin>>dolares;  

        pesos = preciodolar * dolares;

        cout <<"\n"<<dolares<<" dolares equivale a: "<<pesos<<" pesos";

        return 0;
    }

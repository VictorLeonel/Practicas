/****************************************************************************************
                              Programa #28
Calcular la suma de las raices cuadradas de los numeros impares que hay entre 1 y 1,000
*****************************************************************************************/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
    {
        double suma = 0, raiz;
        
        cout <<"\n"<< "Suma de las raices cuadradas de los numeros impares que hay entre 1 y 1,000"<<"\n";
        
        for(double i=1; i<=1000; i+=2)
            {
                        //printf(" %d ",i);
                        raiz = sqrt(i);
                        suma = suma+raiz;
            }  
        
        cout<<"\n"<<"El resultado de la Suma es: "<<suma<<endl;
    
        getch();
        return 0;
    }
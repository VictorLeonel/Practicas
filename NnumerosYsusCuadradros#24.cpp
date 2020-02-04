/*********************************************************************************

                             Programa #24
Calcular e imprimir una tabla de dos colunmas que muestre, en la primera,
los enteros del 1 al n, y en la segunda a n^2. No utilizar un entero mayor que 30
**********************************************************************************/

#include <iostream>

using namespace std;

int main()
    {
        int numero;
        do
            {
                cout <<"\n"<< "Digite un numero del 1 al 30  "; cin>>numero;
            }
        while((numero<1) || (numero>30));  
        
        for(int i=1; i<=numero; i++)
            {
                cout<<i<<"  "<<i*i<<endl;
            }    

        return 0;
    }

/******************************************************************************

                             Programa #25
Calcular e Imprimir una tabla que contenga las potencias cuartas de los 50
primeros numeros enteros
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
	{
	    
	    cout <<"\n"<< "Tabla de Numeros y sus Potencias Cuartas"<<"\n"<<"\n";
	    cout <<" "<<"N"<<" -> "<<"N^4"<<"\n";

	    for(int i=1; i<=50; i++)
	        {
	            cout<<" "<<i<<" -> "<<i*i*i*i<<endl;
	        }    

	    return 0;
	}

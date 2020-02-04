/******************************************************************************
                              Programa #26
Imprimir una tabla de raices cuadradas de los numeros 100 ... 120.
*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main()
	{
	    int n;
	    
	    cout <<"\n"<< "Tabla de Numeros y sus Raices Cuadradas"<<"\n"<<"\n";
	    cout <<"  "<<"N"<<" "<<" ->  "<<"√"<<"\n";

	    for(int i=100; i<=120; i++)
	        {
	            cout<<" "<<i<<" -> "<<sqrt(i)<<endl;
	        }    

	    return 0;
	}
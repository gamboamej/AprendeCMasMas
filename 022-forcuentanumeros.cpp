#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int numero,contador,sumador;
sumador=contador=0;
do
{
cout << "Introduzca un numero mayor que 0 y menor que 500: ";
cin >> numero;
}while(numero < 0 || numero > 500);
// La condici´on controla el intervalo establecido.
//Controla que no entren n´umeros con diferencia inferior a ocho hasta 500 y no superior.
if(numero<=492)
{
for(numero;numero<500;numero+= 5)
{
sumador = sumador + numero;
contador = contador + 1;
cout << numero << " , " ;
}
}
cout << "\nEsta es la suma: " << sumador << endl;
cout << "El numero total hasta 500 separado 5 posiciones es: " <<
contador << endl;
system("PAUSE");
return 0;
}
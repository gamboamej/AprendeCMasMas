//Codificado por: sAfOrAs
//Código Fuente: Calcula cuantos números pares hay entre dos ingresados
// Publicado en: https://beastieux.com/2008/01/03/codigo-c-contar-numeros-pares/

#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0;
	std::cout<<"ingrese un numero: ";cin>>a;
	std::cout<<"ingrese otro numero: ";cin>>b;
	while(a<=b)
	{
		if(a%2!=0)
		c=c+1; a=a+1;		
	}
	std::cout<<c<<endl;
	cin.ignore(); return 0;
}
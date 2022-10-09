//Codificado por: sAfOrAs
//Codigo fuente: Mostrar un menú con 6 opciones.
// https://beastieux.com/2008/01/03/codigo-c-ejemplo-de-menu/
#include<iostream>
using namespace std;
int main()
{
    int m;
    std::cout<<"\t\t\tElija una opcion\n\n";
//con '\t\t\t' llevo un poco al centro el mensaje, y con '\n\n' salto 2 lineas hacia abajo.
    std::cout<<"1  Ingresos\n";
    std::cout<<"2  Modificacion\n";
    std::cout<<"3  Consultas\n";
    std::cout<<"4  Reportes\n";
    std::cout<<"5  Utilidades\n";
    std::cout<<"6  Salir\n\n";
    cin>>m;
 
switch(m)
{
case 1:std::cout<<"Ud tiene S/. 2500"<<endl;break;
case 2:std::cout<<"¿Que desea modificar?"<<endl;break;
case 3:std::cout<<"Escriba su consulta aqui: "<<endl;break;
case 4:std::cout<<"Ud. no presenta reportes"<<endl;break;
case 5:std::cout<<"Este servicio esta bloqueado por el momento"<<endl;break;
case 6:std::cout<<"Ya esta fuera"<<endl;break;
default: std::cout<<"El valor ingresado no esta en el menu"<<endl;
}
    cin.ignore(); return 0;
}
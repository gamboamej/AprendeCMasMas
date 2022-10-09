//Codificado por: sAfOrAs
//Código Fuente: Calcula el salario de un trabajador.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string apno;
    float hrtr,tahr,subt,boni,tota;
    std::cout<<"Calculos de pagos\n\n";
    std::cout<<"Nombres:\t";cin>>apno;
    std::cout<<endl<<endl<<"Horas Trabajadas:\t";cin>>hrtr;
    if (hrtr<=0)
        std::cout<<"No trabajo nada"<<endl;else
    {std::cout<<"Tarifa por hora:\t";cin>>tahr;
    subt=hrtr*tahr;
    if(hrtr>192)
        boni=subt*0.05;
    else
        boni=subt*0.03;
    tota=subt+boni;
    std::cout<<"El sub total es:\t"<<subt<<endl;
    std::cout<<"La bonifiacion es:\t"<<boni<<endl;
    std::cout<<"El total a pagar es:\t"<<tota<<endl<<endl;
    }
     std::cin.ignore(); return 0;
}
//Codificado por: sAfOrAs
//CONVIERTE entero a NUMEROS ROMANOS
// https://beastieux.com/2008/01/03/codigo-c-convertir-decimales-a-numeros-romanos/
#include<iostream>
using namespace std;
int main()
{
    int x;
    std::cout<<"ingrese un numero"<<endl;
    cin>>x;
  if((x<1)||(x>999))
       std::cout<<"Ingrese un numero entre 0-999"<<endl;
  else
   
   {
 
        if(x>=900)   {std::cout<<"CM"   ;x=x-900; }
        if(x>=500)   {std::cout<<"D"    ;x=x-500; }
        if(x>=400)   {std::cout<<"CD"   ;x=x-400; }
        if(x>=300)   {std::cout<<"C"    ;x=x-100; }
        if(x>=200)   {std::cout<<"C"    ;x=x-100; }
        if(x>=100)   {std::cout<<"C"    ;x=x-100; }
        if(x>=90)    {std::cout<<"XC"   ;x=x-90;  }
        if(x>=50)    {std::cout<<"L"    ;x=x-50;  }
        if(x>=40)    {std::cout<<"XL"   ;x=x-40;  }
        if(x>=30)    {std::cout<<"X"    ;x=x-10;  }
        if(x>=20)    {std::cout<<"X"    ;x=x-10;  }
        if(x>=10)    {std::cout<<"X"    ;x=x-10;  }
        if(x>=9) {std::cout<<"IX"   ;x=x-9;   }
        if(x>=5) {std::cout<<"V"    ;x=x-5;   }
        if(x>=4) {std::cout<<"IV"   ;x=x-4;   }
        if(x>=3) {std::cout<<"III";x=x-3;     }
        if(x>=2) {std::cout<<"II"   ;x=x-2;   }
        if(x>=1) {std::cout<<"I"    ;x=x-1;   }
  
    }
   std::cout<<endl;
std::cin.ignore();return 0;
}
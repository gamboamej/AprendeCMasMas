//Codificado por: sAfOrAs
//Convierte a números romanos
#include<iostream>
using namespace std;
int main()
{
    int x;
    std::cout<<"ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999)) std::cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(x>=900)   {std::cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {std::cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {std::cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {std::cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {std::cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {std::cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {std::cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {std::cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {std::cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {std::cout<<"CIEN"     ;x=x-100;}
        if(x>90) {std::cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {std::cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {std::cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {std::cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {std::cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {std::cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {std::cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {std::cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {std::cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {std::cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {std::cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {std::cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {std::cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {std::cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {std::cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {std::cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {std::cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {std::cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {std::cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {std::cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {std::cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {std::cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {std::cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {std::cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {std::cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {std::cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {std::cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {std::cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {std::cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {std::cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {std::cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {std::cout<<"UNO"      ;x=x-1;  }
       }
    std::cout<<endl;
std::cin.ignore();return 0;
}
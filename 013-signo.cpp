//Codificado por: sAfOrAs
//Codigo fuente: Signos del zodiaco
// https://beastieux.com/2008/01/03/codigo-c-signo-zodiacal/
#include <iostream>
using namespace std;
int main()
{
      int mes, dia;
      std::cout<<"\t\t\tSIGNO ZODIACAL"<<endl;
      std::cout<<"(1)Enero  \t(2)Febrero  \t(3)Marzo  \t(4)Abril"<<endl;
      std::cout<<"(5)Mayo  \t(6)Junio     \t(7)Julio  \t(8)Agosto"<<endl;
      std::cout<<"(9)Septiembre  \t(10)Octubre  \t(11)Noviembre  \t(12)Diciembre"<<endl<<endl;
      std::cout<<"Ingrese la fecha de su cumplea"<<char(164)<<"o (dia y mes)"<<endl;
      cin>>dia>>mes;
      switch(mes)
      {
/*enero*/       case 1:if(dia<21) std::cout<<"Capricornio"<<endl;
                        else      std::cout<<"Acuario"<<endl;break;
 
/*febrero*/     case 2:if(dia<21) std::cout<<"Acuario"<<endl;
                        else      std::cout<<"Piscis"<<endl;break;
 
/*marzo*/       case 3:if(dia<21) std::cout<<"Piscis"<<endl;
                        else      std::cout<<"Aries"<<endl;break;
 
/*abril*/       case 4:if(dia<21) std::cout<<"Aries"<<endl;
                        else      std::cout<<"Tauro"<<endl;break;
 
/*mayo*/        case 5:if(dia<22) std::cout<<"Tauro"<<endl;
                        else      std::cout<<"Geminis"<<endl;break;
 
/*junio*/       case 6:if(dia<22) std::cout<<"Geminis"<<endl;
                        else      std::cout<<"Cancer"<<endl;break;
 
/*julio*/       case 7:if(dia<23) std::cout<<"Cancer"<<endl;
                        else      std::cout<<"Leo"<<endl;break;
 
/*agosto*/      case 8:if(dia<23) std::cout<<"Leo"<<endl;
                        else      std::cout<<"Virgo"<<endl;break;
 
/*septiembre*/  case 9:if(dia<24) std::cout<<"Virgo"<<endl;
                        else      std::cout<<"Libra"<<endl;break;
 
/*octubre*/     case 10:if(dia<25)std::cout<<"Libra"<<endl;
                        else      std::cout<<"Escorpio"<<endl;break;
 
/*noviembre*/   case 11:if(dia<23)std::cout<<"Escorpio"<<endl;
                        else      std::cout<<"Sagitario"<<endl;break;
 
/*diciembre*/   case 12:if(dia<22)std::cout<<"Sagitario"<<endl;
                        else      std::cout<<"Capricornio"<<endl;break;
 
                default:std::cout<<"INGRESE UNA FECHA VALIDA"<<endl;
      }
std::cin.ignore();return 0;
}
#include <iostream>

using namespace std;

int main() {
    unsigned long cont = 0, numero, lim = 0;

    std::cout << "Ingrese el numero a comprobar: ";
    std::cin >> numero;
  
    std::cout << "\n";
    std::cout << "Numero ingresado:\t" << numero << "\n";
    std::cout << "Numero de divisores:\t";
    for(unsigned long div = 1; div <= numero; div++) {
        if(numero % div == 0) {
            std::cout << "{" << div << "} ";
            cont++;
            lim++;
            if(lim == 10) {
                std::cout << "\n\t\t\t";
                lim = 0;
            }
        }
    }
    std::cout << "Fin!!" << endl;
    
    if(cont == 2) {
        std::cout << "El numero si es primo:\ttiene " << cont << " divisores." << endl;
    } else {
        std::cout << "El numero no es primo:\ttiene " << cont << " divisores." << endl;
    }

    return 0;
}
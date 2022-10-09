#include <iostream>
using namespace std;

#define URL "https://misfragmentosdecodigo.eu"

int main ()
{
    int acd = 1, numLineas;

    std::cout << "Ingrese el numero de lineas para su arbol: ";
    cin >> numLineas;

    for (int x = numLineas; x != 0; x--){
        std::cout.width(x);
        for (int n = 0; n < acd; n++){
            std::cout << "*";
        }
        acd += 2;
        std::cout << endl;
    }

    for (int x = ((acd - 2) / 2 - 3) / 2; x != 0; x--){
        std::cout.width((acd * 40) / 100);
        for (int n = 0; n < (acd * 20) / 100; n++){
            std::cout << "*";
        }
        std::cout << endl;
    }

    for (int x = 2; x != 0; x--){
        std::cout.width((acd * 30) / 100);
        for (int n = 0; n < (acd * 40) / 100; n++){
            std::cout << "*";
        }
        std::cout << endl;
    }

    std::cout << "\nFeliz navidad les desea " << endl;
    std::cout << URL << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main() {
    string texto;
    int aux = 0, igual = 0;
    
    std::cout << "Ingrese la palabra a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        std::cout << "La palabra ingresada es palindromo!" << endl;
    } else {
        std::cout << "La palabra ingresada no es palindromo!" << endl;
    }
    
    return 0;
}
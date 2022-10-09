#include <iostream>
#include <list>
using namespace std;

int item;

bool son_iguales(const int &valor) {
    return valor == item;
}

int main() {
    int enteros[] = {2, 90, 89, 2, 5, 101, 90, 35, 2, 43, 89, 101, 5, 89, 90, 5};
    list<int> lista(enteros, enteros + 16);

    std::cout << "Lista actual: ";
    for(list<int>::iterator iter = lista.begin(); iter != lista.end(); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << "\n";

    std::cout << "\nIngrese el elemento que desea eliminar: ";
    cin >> item;

    lista.remove_if(son_iguales);

    std::cout << "Lista modificada: ";
    for(list<int>::iterator iter = lista.begin(); iter != lista.end(); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << "\n";

    return 0;
}
#include <iostream>
using namespace std;

void mayor(int valores[], int cant){
    int aux;
    for(int i = 0; i < cant; i++){
        for(int x = 0; x < cant; x++){
            if(valores[i] > valores[x]){
                aux = valores[i];
                valores[i] = valores[x];
                valores[x] = aux;
            }
        }
    }
    std::cout << "\nArray dinamico ordenado: ";
    for(int i = 0; i < cant; i++){
        std::cout << "{" << valores[i] << "} ";
    }
    std::cout << "Fin!" << endl;
}

void menor(int valores[], int cant){
    int aux;
    for(int i = 0; i < cant; i++){
        for(int x = 0; x < cant; x++){
            if(valores[i] < valores[x]){
                aux = valores[x];
                valores[x] = valores[i];
                valores[i] = aux;
            }
        }
    }
    std::cout << "\nArray dinamico ordenado: ";
    for(int i = 0; i < cant; i++){
        std::cout << "{" << valores[i] << "} ";
    }
    std::cout << "Fin!" << endl;
}

int main() {
    int *valores, cant, num, resp;

    std::cout << "Cuantos valores desea ingresar?: ";
    cin >> cant;

    valores = new int[cant];

    for(int i = 0; i < cant; i++){
        std::cout << "Ingrese el valor No. " << i << ": ";
        cin >> num;
        valores[i] = num;
    }

    std::cout << "\nSelecciones una de las siguientes opciones" << endl;
    std::cout << "------------------------------------------" << endl;
    std::cout << "1) Ordenar de mayor a menor" << endl;
    std::cout << "2) Ordenar de menor a mayor" << endl;
    std::cout << "------------------------------------------" << endl;
    std::cout << "Opcion: ";
    cin >> resp;

    switch(resp) {
    case 1:
        mayor(valores, cant);
        break;
    case 2:
        menor(valores, cant);
        break;
    default:
        std::cout << "Opcion invalida!" << endl;
    }

    return 0;
}
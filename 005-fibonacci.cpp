#include <iostream>
using namespace std;

const string INFO = "Este programa imprime la sucesion de fibonacci desde \
1 hasta N, \nsiendo este ultimo un numero ingresado por el usuario\n";

int main() {
  unsigned long long aux = 1, fib = 0, lim, init;

  std::cout << INFO << endl;
  std::cout << "Ingrese un numero para la sucesion de fibonacci: ";
  cin >> lim;

  if(lim > 0) {
    for(init = 1; init <= lim; init++) {
      std::cout << "[" << fib << "] ";
      aux += fib; /* lo mismo que aux = aux + fib; */
      fib = aux - fib;
    }
  } else {
    std::cout << "El numero debe ser mayor a cero!!" << endl;
  }
  std::cout << "\n";

  return 0;
}
#include <iostream>

int adicion(int, int);

int main(int argc, char **argv)
{
    std::cout<<"El resultado de la suma de 1 y 2 es "<<adicion(1,2)<<std::endl;
    return 0;
}

int adicion(int a, int b)
{
    return a+b;
}
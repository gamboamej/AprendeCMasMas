#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
int a, b;
char oper;
std::cout << "Introduzca la operacion a realizar usando espacios:\n\n";
cin >> a >> oper >> b;
switch(oper)
{
case '+': std::cout << a << oper << b << " = " << a + b << endl;
break;
case '-': std::cout << a << oper << b << " = " << a - b << endl;
break;
case '*': std::cout << a << oper << b << " = " << a * b << endl;
break;
case '/': std::cout << a << oper << b << " = " << a / b << endl;
break;
case '%': std::cout << a << oper << b << " = " << a % b << endl;
break;
default: break;
}
return 0;
}
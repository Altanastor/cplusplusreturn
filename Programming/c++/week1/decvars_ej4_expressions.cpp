#include <iostream>
using namespace std;

int main(){

int a(2);
int b(9);
double c((a+b)/2);
double d(a+b); // c = a+b

/*
El operador division /, nos da el cociente entre b/a
EL operador % es el resto de la operacion entera de b/a
*/

cout<<"El valor de la division de 9/2"<<" es (cociente) "<<b/a<<endl;
cout<<"El valor de 9%2 usando el operador modulo"<<" es (residuo) "<<b%a<<endl;

/*
La division entera cuando los inputs son del tipo entero, nunca saldran decimales: c = 9/2 es igual a 4 (deberia ser 4.5)
Como solucion, se se reusa la variable c y esta se divide por 2 : c = c/2
*/

cout<<"Si b y a son enteros entonces, seguira dando de resultado es un entero "<<c<<endl;

d/=2;
cout<<"Si dividimos la variable d = d/2, se soluciona el problema "<<d<<endl;


return 0;
}

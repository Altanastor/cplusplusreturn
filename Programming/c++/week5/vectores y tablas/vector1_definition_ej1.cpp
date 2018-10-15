//#Vectors: es una estructura de datos dinamica que pueda ser inizilidad y puede cambiar en la ejecucion. Los
//#elementos del vector tiene que ser del mismo tipo (entero, double, etc)
//# Definicion 1: vector<type> identifier;
//# Definicion 2: vector<type> identifier(tamano, valor); tamana : el valor de tamano inicial
//# Definicion 3: vector<type> identifier(reference); donde reference: tabla del mismo `type`
//# Los valores de los vectores inician en 0, es decir sea V[i], i esta entre 0:n-1

#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<double> v(3);

cout<<v[0]; //se inician en 0
cout<<v[1]; //se inician en 0
cout<<v[2]; //se inician en 0
return 0;
}


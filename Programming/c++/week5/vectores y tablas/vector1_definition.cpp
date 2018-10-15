//#Vectors: es una estructura de datos dinamica que pueda ser inizilidad y puede cambiar en la ejecucion. Los
//#elementos del vector tiene que ser del mismo tipo (entero, double, etc)
//# Definicion 1: vector<type> identifier;
//# Definicion 2: vector<type> identifier(tamano, valor); tamana : el valor de tamano inicial
//# Definicion 3: vector<type> identifier(reference); donde reference: tabla del mismo `type`
//# Los valores de los vectores inician en 0, y el indice de los vectores(i) varia entre 0 y n-1 v]

#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> ages(5);
ages[2] = 12;

cout<< ages[0]<<endl;
cout<< ages[2]<<endl;

return 0;
}

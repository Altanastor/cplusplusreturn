#include<iostream>
using namespace std;

//Las funcione se declaran fuera del int main();
// tipo of funcion function(type argument1, type argument 2, ...)

//Una funcion sé define en 3 partes:
//prototipo: resumen
//definicion: creacion y/o contruccion
//utilizacion: utilizacion (appeal)
//

//prototipo
double calculo(double nota_first, double nota_second);

//utilizacion
int main(){

double nota1(0.0), nota2(0.0);

cout<<"Escriba las notas 1 y 2"<<endl;
cin>>nota1>>nota2;

cout<<"El promedio de notas es "<<calculo(nota1,nota2)<<endl;

return 0;
}

//Definicion
double calculo(double x, double y)
{
    return (x+y)/2.0;
}


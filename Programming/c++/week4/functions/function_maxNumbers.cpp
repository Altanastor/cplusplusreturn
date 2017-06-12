//Recordar que si definimos una funcion como double, esta debe retornar
// usando el comando 'return variable', una valor del tipo double.

//Recordar que despues de usar el return en la funcion, si escribimos mas instrucciones
// estas no seran ejecutadas.

#include<iostream>
using namespace std;

double max2n(double n1, double n2);

int main(){

double m,a,b;

cout<<"Ingrese el valor de a"<<endl;
cin>>a;
cout<<"Ingrese el valor de b"<<endl;
cin>>b;

if(a==b){

    cout<<"Los numeros son iguales"<<endl;

} else {

    m = max2n(a,b);
    cout<<"El valor maximo de "<<a<<" y "<<b<<" es :"<<m;

}

return 0;
}

double max2n(double x, double y){

    if(x>y){
       return x;
    } else {
       return y;
    }

}



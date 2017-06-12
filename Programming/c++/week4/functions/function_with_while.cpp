#include<iostream>
using namespace std;

double lire();

int main(){

double m;

cout<<"Comienza el juego"<<endl;

m = lire();

cout<<"el valor de m "<<m;

return 0;
}

double lire(){

double n(0.0);

 do{
   cout<<"Ingrese un numero "<<endl;
   cin>>n;
   } while(n<=0.0);

return n;
}

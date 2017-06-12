// La variable global pesa mas.

#include<iostream>
using namespace std;

int main(){

double m(10.23);

if(m!=10){
    double m(15.23);
    cout<<"final m"<<m<<endl;
}

cout<<m<<endl; //Prevalece el valor de la variable global.

cout<<"-----Global j version local j----"<<endl;

int j(120);

for(int j(0); j<5; j++){
    cout<<j<<endl;
}
cout<<j<<endl;
cout<<"Imprimira 1,2,3,4 del bucle for y imprime 120 por el 'cout<<j', ya que el valor global de j=120"<<endl;

return 0;
}

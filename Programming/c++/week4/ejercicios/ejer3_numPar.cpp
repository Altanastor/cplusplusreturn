#include<iostream>
using namespace std;

int espar(int a);

int main(){

int valor;
int valor2;

cout<<"Ingrese un valor ";
cin>>valor;

valor2 = espar(valor);

if(valor2 == 0){
    cout<<"El numero "<<valor<<"es impar"<<endl;
} else {
    cout<<"El numero "<<valor<<" es par"<<endl;
}

return 0;
}


int espar(int x){
    int valor;

    if(x%2==0){
        valor = 1;
    } else {
        valor =0;
    }

    return valor;
}

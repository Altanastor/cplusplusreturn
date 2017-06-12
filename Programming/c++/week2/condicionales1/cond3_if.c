#include <iostream>
using namespace std;

int main(){

int n,m;

cout<<"Ingrese los valores"<<endl;
cin>>m>>n;

if( (m>=0) or (n>=0) ){
    cout<<"Algun valores positivo es ingresado"<<endl;
} else {
    cout<< "ambos son negativos"<<endl;
}
return 0;

}

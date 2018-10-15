/// Array Data Structure
///Def: Es una estructura estatica de dimension fija. ES todo lo contrario a una tabla dinamica, por lo tanto no cambia de dimension.
/// De antemano debemos saber cual es la dimension (m,m) al inicializar el vector.
/// Uso: #include <array>
///      array<tipo, tamaño>  identifcador
/// Ejemplo: array<int, 3> array_3v
///

#include<iostream>
#include<array>

using namespace std;

int main(){

//Estructura Array
const size_t length(6);
array<int, length> vhabitantes;

cout<<"============Forma 1: usando classic loop'==================== "<<endl;;
cout<<"Numero de habitantes " << vhabitantes.size();
for(int i(0); i < vhabitantes.size() ; ++i){
    cout<<"Ingrese el valor de la posicion [" << i <<"]"<<endl;
    cin>>vhabitantes[i];
}

cout<<"============Forma 2: usando 'auto'=========================== "<<endl;;
for(auto i : vhabitantes){
    cout<<"Ingrese el valor de la posicion [" <<i <<"]"<<endl;
    cin>>i;
}


return 0;
}


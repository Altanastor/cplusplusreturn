#include<iostream>
#include<vector>
#include<string>
#include<type_traits>

using namespace std;

struct persona {
    string nombre;
    int edad;
    double peso;
    char sexo;
};

int main(){

vector<persona>  unapersona = {
    {"omar benites", 11,1243.34,'M'},
    {"cesar benites", 21,134.34,'M'},
    {"nancy alfaro", 34,134.34,'F'}
};

cout<< "Tamano de una persona " <<unapersona.size()<<endl;

cout<< "Imprimir el vector de edades del struct persona "<<endl;
for(size_t i=0; i< 3; ++i ){
      cout<<unapersona[i].edad<<endl;
}
cout<< "Imprimir el vector de nombres del struct persona "<<endl;
for(size_t i=0; i< unapersona.size() ; ++i ){
      cout<<unapersona[i].nombre<<endl;
}

return 0;
}

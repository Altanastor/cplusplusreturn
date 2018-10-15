#include<iostream>
#include<string>

using namespace std;

///Define struct
struct persona {
    string nombre;
    int edad;
    double peso;
    char sexo;
};

//header
double indice(int b, double a);

int main(){

persona omar;

omar.nombre = "Omar benites alfaro";
omar.edad = 12;
omar.peso= 12.45;
omar.sexo = 'F';

cout<< omar.nombre<<endl;
cout<<omar.edad<<endl;
cout<< indice(omar.peso, omar.edad)<<endl;

return 0;

}
//Define function
double indice(int edad, double peso){
    double ind;
    ind = (peso*125/edad)+1;
    return(ind);
}



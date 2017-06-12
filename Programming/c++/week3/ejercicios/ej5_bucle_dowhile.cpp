#include<iostream>
using namespace std;

int main(){

int nota;
bool invalidar; //usar un bool para controlar y no repetir variables.

do {


    cout<<"Ingrese la nota "<<endl;
    cin>> nota;
    invalidar = (nota>=0);
    //create a condition to invalide do-while loop

    if(invalidar){
        cout<<"Tiene que presionar un numero menor a cero para salir del bucle"<<endl;
    }

} while (invalidar);

cout<<"elvalor final de nota es"<<nota;

return 0;
}


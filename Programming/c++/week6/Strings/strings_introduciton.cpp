/// ----- STRINGS in C++ ---------------- ////
/// Uso: include<strings>
/// Declaracion 1: string identificador;
/// Declaracion 2: strings identificador("escribir mensaje") //double quotes

/// El tipo CHAR      -----////
/// Uso: include<strings>
/// Declaracion 1: char identificador;
/// Declaracion 2: char identificador('a') or char idenfiticador("abcdef")

/// NOTA IMPORATANTE: Una variable CHAR solo almacena 1 caracter ---> usamos single quotes ('')
///                   Si de tipo STRING, i.e varios caracteres ---> usamos double quotes ("")


#include<iostream>
#include<string>
using namespace std;

int main(){
///Ejemplo de String
string caracter1;
string caracter2("Hola a todos, estoy retomando c++ (muy rapido)");

cout<< "Vamos a ingresar un caracter largo por consola"<<endl;
cin>> caracter1;
cout<< "Vamos a imprimr unos cadena de carateres: "<<caracter2<<endl;

/// Ejemplo de char
char caracter3;
char caracter4('a');
/// char caracter5("caracter"); NO!. porque char solo puede recibir 1 solo caracter
cout<< "String o Char de 1 solo caracter" << caracter4<<endl;
/// cout<< "String o Char de mas 1 solo caracter" << caracter5; // Error: char solo debe contener 1 caracter.


return 0;

}

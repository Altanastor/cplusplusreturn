/// Specific functions for manipulating strings
/// cadena.size()
/// cadena.insert(position, string); position: one position before
/// cadena.replace(i, j , string): Replace a character between ith and jth positions onto `cadena`.
/// cadena.find(subcadena): find a substring or character onto `cadena`. Return the number of concurrences.
/// cadena.rfind(subcadena): find a substring or character onto `cadena` starting from right to left. -->
/// --> It return the number of concurrences.
/// Function string::npos : Check if the caracter was found in the string
/// Funcion subtrings: cadena.substr(i,lenght), i: Get sub strings from whole strings, where
    ///                i: initial position to catch characters, and lenght: how many characteres would subextract
#include<iostream>
#include<string>

using namespace std;

int main(){

/// Funcion size()
string example("abcdabab");
cout<< "El tamano de la cadena de caracteres es: "<< example<<endl;

/// Funcion insert()
example.insert(1,"AB");
cout<<"Se inserto la cadena AB: "<<example << endl;

/// Funcion replace()
example.replace(2,3, "JK");
cout<< example<< endl;

/// Funcion Find
int nfind;
nfind = example.find("ab");
cout<<"Number of times that find 'ab': "<< nfind<<endl;

///Function Reverse find
int nrfind;
nrfind = example.rfind("ab");
cout<< "Number of times reverse find 'ab': "<< nrfind<<endl;

/// Function string::npos : Check if the caracter was found in the string
if(example.find("ab")!= string::npos){
    cout<< "ab fue encontrado"<<endl;
}

/// Function for Sub Strings (substr)
string cadena2 = "Ejemplo de sub cadena";
int pos_i = 5;
int length = 5;
cout<< "Extraer de "<<  cadena2 <<" la subcadena con "<< length <<" caracateres empezando desde "<<pos_i << " (" <<cadena2[pos_i] << "): " <<cadena2.substr(pos_i, length);


return 0;
}

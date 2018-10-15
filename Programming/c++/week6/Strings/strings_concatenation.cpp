/// CONCATENATION ///
/// Uso: para concatenar tenemos que usar el signo de '+'
/// Ejemplo: caden1 + cadena2 + "otra cadena escrita directamente"

#include<iostream>
#include<string>

using namespace std;

int main(){

string cad1("La cadena 1");
string cad2;
string concatenar, concatenar2;
cad2 = "cadena 2";

concatenar = cad1 + cad2 + "otra cadena";
concatenar2 = cad1 + " " + cad2 + " " + "otra cadena";
cout<< "La concatenacion resultante es: "<< concatenar<< endl; /// esta cadena esta unida, pero sin espcaios entre strings
cout<< "La concatenacion usando espacios sera: "<< concatenar2 << endl;

return 0;
}

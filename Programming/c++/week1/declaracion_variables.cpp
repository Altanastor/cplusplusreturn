#include <iostream>
using namespace std; /*standard library namespace */
int main(){

int i(0);

double k(2.3);
const int r(12); /* declaracion de una constante entera*/

/*Declaracion de la variable n y n_carre*/
int n(4);
int n_carre;

i = i +1;
n_carre = n*n;

/*
La libreria std, nos provee de 2 funcinoes: cout y endl
Tambien podemos acceder de la siguiente forma: std::cout y std:endl
 */

cout<< "La variable n contiene" <<n << "."<< endl;
cout<< "Para el valor de "<<n<<" el valor de n_carre es"<<n_carre<<"."<<endl;
cout<<"El doble de n es "<<2*n<<"."<<endl;

return 0;

}



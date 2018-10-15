//#En c++ 11, podemos iterar los valores del vector usando el rango del vector
//
//# Forma 1: iteracion usango el rango de la tabla/vector. No modifica los valores de la tabla
//    # for ( auto nombre_de_variable : tabla/vector){
//
//    #      }
//
//# Forma 2: iteracion usango la referencia(&) y rango de la tabla/vector. Modifica los valores de la table a traves de la referencia
//    # for(auto& nombre_de_variable : tabla/vector) {
//
//      }


#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<double> v(3);

//Fomar 1: Sin usar la referencia y rango

for(auto x : v ){


    cout <<v[0]<<endl;
    cout <<v[1]<<endl;
    cout <<v[2]<<endl;
    x = x + 1.1;

   cout<< "valor de x con referencia "<<x <<endl;

    cout <<v[0]<<endl;
    cout <<v[1]<<endl;
    cout <<v[2]<<endl;

    //#Al final se observa que el valor de `x` y de `v` no cambian. Son v=(0,0,0) y x = (0,0,0)
}

//Fomar 2: Usando la referencia(&) y rango

for(auto& x : v ){


    cout <<v[0]<<endl;
    cout <<v[1]<<endl;
    cout <<v[2]<<endl;
    x = x + 1.1;

   cout<< "valor de x con referencia "<<x <<endl;

    cout <<v[0]<<endl;
    cout <<v[1]<<endl;
    cout <<v[2]<<endl;

    //#Al final se observa que el valor de `v` va tomando los valores de `x` en cada iteracion: v=(1.1, 1.1, 1.1)
}

return 0;
}

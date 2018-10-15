//Imprimir indices de tablas dinamicas

#include<iostream>
#include<vector>

using namespace std;

int main(){

// declaramos al vector
vector<double> tab(10);
// 1: veamos el contenido de la tabla
cout<<"la tabla contiene: ";
for( auto element : tab){
    cout << element << " ";
}
// 2: veamos los indicies de la tabla------------------------------------
// 2.1: size_t : declaramos una variable entera
// 2.2: tab.size : tabla.tamano , es decir 'i' va iterar hasta el tamano-1,
// 2.3: ++i: i va ir incrementadose
for (size_t i(0); i< tab.size(); ++i){
    cout<<"Los valores del indice "<<i<< "son" <<tab[i]<<endl;
}

return 0;

}

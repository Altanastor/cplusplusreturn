/// Declaracion de una tabla multidmensional
/// Definicion: vector <vector<int>> tabla (i, vecto<int>(j))
/// donde n: numero de filas, y m:numero de columnas
/// recordar que i y j, empiezan desde 0. i= 0...n, y j=0...m

#include<iostream>
#include<vector>

using namespace std;

int main(){

//Primera definicion
vector<vector<int>> tabla({ { 0,1,2,3,42 },
                            { 4,5,6 },
                            {7,8},
                            {9,0,1}
                          });

for (auto fila : tabla){
       cout<< "Imprimir primera columna "<< fila.size() <<endl;
    for(auto element: fila){
         cout<<element<<" ";
        //cout<< "Imprimir primera columna "<< fila[0] <<endl;
    }
    cout<<endl;
}

// Veamos la dimension de cada fila

for(size_t i(0); i< tabla.size() ; ++i){
    cout<< "la dimension de la fila "<< i <<" o tab[" << i << "] es ";
    cout<< tabla[i].size()<<endl;
}



// Segunda definicion
vector<vector<int>> v({{1,2,3}, {4,5}});
cout<< "El elemento v[1][1] (segunda fila, segunda columna): " << v[1][1] << " y el tamano "<<v.size()<<endl;
cout<< "La dimension de la fila primera fila v[0] es: " << v[0].size() <<" Y de la segunda fila: " << v[1].size()<<endl;;



return 0;
}




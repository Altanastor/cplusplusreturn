/// Array multidimensionales
/// Uso: array<array<int,n>,m>
///      n: number of rows
///      m: number of columns

#include<iostream>
#include<array>

using namespace std;

int main(){

array<array<int,3>, 4> matrices ={
                                  0,1,2,
                                  3,4,5,
                                  9,0,1
                                 };

for(auto rows : matrices ){ /// itera sobre las filas enteras de la matriz
    for (auto elementos : rows){ /// itera sobre los valores de las filas
        cout<<"Elementos de la estructura array "<< elementos << endl;
    }
}

for(int i(0); i< matrices.size(); ++i){
    cout<<"La dimension del array i-esimo o array["<<i<<"] es: "<< matrices[i].size() << endl;
    //cout<< matrices[i] << endl;
}

return 0;
}

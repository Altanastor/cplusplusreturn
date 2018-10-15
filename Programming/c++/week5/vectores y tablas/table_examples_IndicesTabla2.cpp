#include<iostream>
#include<vector>

using namespace std;

int main(){

vector<double> tabla(3);
vector<double> tab2(tabla.size(), 1.2);

for( size_t i(0); i< tabla.size(); ++i ){
   cout<< "Ingrese los valores de la posicion"<<i<< endl;
   cin>> tabla[i];
}

for( size_t i(0); i< tab2.size(); ++i ){
   cout<< "Ingrese los valores de la posicion"<<i<< endl;
   cin>> tab2[i];
}


return 0;
}

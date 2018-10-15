//* Uso de la funcion `size``
//declaracion: variable.size() : ejemplo tabla.size()

#include<iostream>
#include<vector>
using namespace std;

int main(){

//declaramos el vector
vector <int> ages(5);

for(size_t i(0); i < ages.size(); ++i){
    cout << "Edad del empleado"<<i+1 <<"?";
    cin>> ages[i];
}

return 0;
}


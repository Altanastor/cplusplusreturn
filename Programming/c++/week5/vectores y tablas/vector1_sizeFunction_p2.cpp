//* Uso de la funcion `size``
//declaracion: variable.size() : ejemplo tabla.size()

#include<iostream>
#include<vector>
using namespace std;

int main(){

//declaramos el vector
vector <int> ages(5);

for(int i(1); i <= ages.size(); ++i){
    cout << "Edad del empleado"<<i <<"?";
    cin>> ages[i];
}

return 0;
}


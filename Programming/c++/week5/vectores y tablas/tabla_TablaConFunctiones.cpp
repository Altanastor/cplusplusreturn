#include<iostream>
#include<vector>
using namespace std;

//Primero colocamos el prototypo de la funcion secuencia
void secuencia(vector<int>& vect, size_t longitud );

int main(){
vector<int> tab(12);
secuencia(tab, tab.size()); //uso de la funcion secuencia
return 0;
}

//Inicilizacion de la funcion secuencia

void secuencia(vector<int>& vect, size_t longitud = 4 ){
 vect.clear();
 cout << "La longitud inicial de la tabla es de: " << longitud << " elementos "<<endl;

    while (vect.size()< longitud ){
       cout<< "Ingrese el valor del elemento " << vect.size() <<" : ";
       int val;
       cin >> val;
       if((val < 0) and (not vect.empty())){
            vect.pop_back(); //remueve el ultimo elemento
       } else if(val == 0){
            vect.clear(); // vacia los elementos y lo de tamano '0'.
       } else if(val>0){ // agrega un elemento
           vect.push_back(val);
       }

    }
}


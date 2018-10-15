// FUNCIONES NATIVAS APLICADAS A UNA TABLA DE DATOS
#include<iostream>
#include<vector>
using namespace std;

int main(){

//F1: Funcion size --------------------------------
vector<double> tabla(4, 3.5);
//int p;
int p = tabla.size();
cout<< "El valo de p (tamano de v) "<<p << endl;

//F2: Funcion front -------------------------------
// Esta funcion nos muestra el primer elemento de la tabla. Equivalente a tabla[0]

cout<<"Imprimir el primero elementos de la tabla "<< tabla.front()<<endl;

//F3: Funcion back
//Esta funcion nos muestra el ultimo elemento de la tabla. Equivalente a tabla[n-1]
cout<<"Imprimir el ultimo elemento de la tabla " << tabla.back()<<endl;

//F4: Funcion empty
//Esta funcion determina si la tabla esta vacia(1) o no(0) (logico).
cout<< "Empty: La tabla esta vacia? "<< tabla.empty() << endl;

//F5: funcion `clear`
//Esta funcion vuelve vacia la tabla especificada.
tabla.clear();

cout<<"Clear: el tamano del vector tabla es : " <<tabla.size() <<endl;
cout<<"el primero valor de la tabla vacia es: " << tabla.front() <<endl; //DUDA, todavia imprime valores

//F6: funcion pop_back. Uso : tabla.pop_back()
//Esta funcion suprime el ultimo elemento de la tabla o vector. No tiene retorno.
vector <double> tabla2 = {1,2,3,4};
tabla2.pop_back();
cout<<"El numero tamanao de la tabla debe dismunir en n-1: "<< tabla2.size() <<endl;

//F7: funcion push_back
//Mediante push_back agregamos un elemento al final la tabla o vector. Uso : push_back(new element)
vector <double> tabla3 = {1.1,2.87,0.3,1.4};
tabla3.push_back(3.2);
cout<<"La tabla usando push_back, debe haber incrementado en n+1: "<< tabla3.size() << endl;


return 0 ;
}

#include<iostream>
using namespace std;

int menor(int a, int b, int c);

int main(){

int k1, k2, k3, valor;

cout<<"Ingrese el primer numero: ";
cin>>k1;

cout<<"Ingrese el segundo numero: ";
cin>>k2;

cout<<"Ingrese el tercer numero: ";
cin>>k3;

valor = menor(k1, k2, k3);
cout<<"El menor numero es: "<<menor(k1, k2, k3);

return 0;
}


int menor (int x, int y, int z){

    int minimo = x;

    if(minimo>=y){
        minimo = y;
    } else {
        minimo = minimo;
    }

    if(minimo>=z){
        minimo = z;
    } else {
        minimo = minimo;
    }

    return minimo;

//comenzamos a segementar

//    if(x=y && y==z){
//        return x;
//    }
//
//
//   if(x>y && x>z){
//
//     cout<<"paso aqui1";
//     if(y>z){
//        return z;
//     }
//     if(z>y){
//        return y;
//     }
//
//   }
//
//   if(y>x && y>z){
//
//     cout<<"paso aqui2";
//      if(x>z){
//        return z;
//      }
//      if(z>x){
//        return x;
//      }
//   }
//
//   if(z>y && z>x){
//
//      //cout<<"paso aqui3";
//      if(x>y){
//        return y;
//      }
//      if(y>x){
//        return x;
//      }
//   }


}

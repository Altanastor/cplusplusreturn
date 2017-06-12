#include<iostream>
using namespace std;

//protptype
void imprimir(char a, int b = 5);

int main(){


  imprimir('*');
  return 0;
}

//definicion
//Be careful with the funciton's parameters. They should coincide with prototype's variables.
void imprimir(char x, int y){

  for(int i(0); i<y; i++ ){
    cout<< x;
  }
  cout<<endl;
}

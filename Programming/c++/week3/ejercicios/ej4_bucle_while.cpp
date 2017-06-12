#include<iostream>
using namespace std;


int main(){

int a(3);
int b(5);

while(b<=a*4){

cout<<b<<" "<<endl;
b *=2;

}

cout<<b<<endl; //En este caso imprime los valores dentro del while (5,10) y luego imprime el ultimo valor tomado por b=20
               //para imprimirlo fuera.
return 0;
}

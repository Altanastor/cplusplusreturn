#include <iostream>
using namespace std;

int main(){

int i,j;

for(i=0; i <3; i++){

    for(j=0; j<i; j++){
        cout<<j<<i<<"donde j<i"<<endl;
    }

  cout<<endl; //Si no cumple la condicion de j<i

}



return 0;
}

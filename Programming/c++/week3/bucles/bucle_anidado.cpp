#include<iostream>
using namespace std;

int main(){

for (int j(2); j<=10; ++j){

    cout<<"La tabla de multiplicacion para" <<j<<":"<<endl;

    for( int i(0); i<=10; ++i){
        cout<<j<< "multiplicado por "<<i<< "es "<< i*j<<endl;
    }
}
return 0;
}

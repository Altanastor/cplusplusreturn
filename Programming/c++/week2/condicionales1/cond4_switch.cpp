#include <iostream>
using namespace std;

int main(){

/* Uso del Switch */
int p;

cout<<"Ingrese el valor de p "<<endl;
cin>>p;

    switch(p){
        case 1:
           cout<< "El primer caso" <<endl;
           break;
        case 2:
            cout<< "El segundo caso" <<endl;
            break;
        case 3:
            cout<<"El tercer caso" <<endl;
            break;
        case 0:
            cout<<"EL cuarto caso produce un break"<<endl;
            break;
        default:
            cout<<"The default case: neither cases were found"<<endl;

        }


return 0;
}

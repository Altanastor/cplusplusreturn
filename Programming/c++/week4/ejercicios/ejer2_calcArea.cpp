#include<iostream>
#include<math.h>
using namespace std;

float circu_area(float radio);
float circu_long(float radio, float L);
//we can declare as a const float outside the main to avoid repeating the same value in each function.
const float pi=3.14159265358979323846 ;


int main(){

float r, l;

cout<<"Ingrese el radio :";
cin>>r;
cout<<"Ingrese la longitud :";
cin>>l;

cout<<"El area es "<< circu_area(r)<<endl;
cout<<"El area es "<< circu_long(r,l)<<endl;


return 0;
}


float circu_area(float radio){
  //  const float pi=3.14159265358979323846 ;
    return(pi*2*radio);
}

float circu_long(float radio, float L ){
   // const float pi=3.14159265358979323846 ;
    return (2*pi*L*radio);
}

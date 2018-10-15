/// Aritmetic of pointers ///

#include<iostream>

int main(){

int a;
int *p;
p = &a;

// How long is the size of an interger variable (int )
cout<<"The size of an integer is: "<<sizeof(a)<<std::endl;
//Pointer arithmetic
cout<< "El valor del puntero p: "<<p <<std::endl;
cout<< "Sumamos p +1"<<p+1<<std::endl;

return 0;
}

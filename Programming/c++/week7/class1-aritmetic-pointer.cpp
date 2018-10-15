/// Aritmetic of pointers ///

#include<iostream>
#include<cstdio>

int main(){

int a;
int *p;
a= 10;
p = &a;

// How long is the size of an interger variable (int )
std::cout<<"The size of an integer is: "<<sizeof(a)<<std::endl;

//Pointer arithmetic
/// Hexadcimal representation
std::cout<< "The pointer value 'p': "<< p <<std::endl;
std::cout<< "The address value of 'p': "<< p <<std::endl;
//std::cout<< "Sumamos p + 1: "<< p+1 <<std::endl;

/// Change from hexadecimal to Decimal using printf
printf("Value at value 'a' is p = &a: %d\n", p ); ///Result: 6946552
printf("Value at address (p+1) is %d\n", p+1 ); /// 6946556 = 6946552 + 1x(4bytes)
printf("Value at address (p+1) is: %d\n", *(p+1));

return 0;
}

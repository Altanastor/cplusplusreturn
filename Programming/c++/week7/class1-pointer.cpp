#include <iostream>

int main() {

	int a;
	int *p;
	p = &a;
	a = 5;

	std::cout << "Print out value of a " << a <<std::endl;
	std::cout<< "Print out the pointer variable p or direcction of a " << p <<std::endl;
    std::cout<< "Print &a give the address of a: "<<&a<<std::endl;
    std::cout<< "Print *p is called DEFERENCING, i.e, give the value of the address p (value of a) : "<<*p<<std::endl;;
    //std::cout<< ""
    std::cout<<"-----Modifying variable values using pointers------"<<std::endl;

    *p = 8;
     std::cout<<"Print the new value of 'a' after modfiying '*p' "<< a;

    int b;
    int *q;
    q = &b;
    b = 16;
    std::cout<<"El valor de b es: "<< b<<std::endl;
    *q = 19;
    std::cout<<"After modyfing the variable's address, the value of b is: "<< b<<std::endl;

	return 0;

}

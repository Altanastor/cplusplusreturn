/* Avoid difussing declaration and assigantion
 Use of temporal variables type temp(variable)

*/
#include <iostream>
using namespace std;

int main(){

/* Sin variable temporal */
int a(1);
int b(2);
a=b;
b=a;
cout<<"El valor de a es "<<a<<"el valor de b es "<<b<<endl;

/* con variable temporal */
int p(5);
int k(6);
int temp(p);
p=k;
k=temp;

cout<<"EL valor de p es "<<p<<"el valor de k = temp es igual a "<< temp<<endl;

return 0;
}

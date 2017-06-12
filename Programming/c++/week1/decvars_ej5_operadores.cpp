#include <iostream>
using namespace std;

int main(){

int val1(1);
int val2(2);
int val3(3);
/* Caso 1: val1 +=val2 es equivalente a val1 = val1+val2 */
val1 += val2;

/* Caso 1: ++val2 es equivalente a val2 = val2 +1 */
++val2;
--val3;

cout<<"val1 es "<< "val += val2 es equivalente a val1 = val1 + val2 " <<"= "<<val1<<endl;
cout<<"val2 es "<<"++val2 es equivalente a val2 = val2 +1"<<"= "<< val2<<endl;
cout<<"val2 es "<<"--val3 es equivalente a val3 = val3 -1"<<"= "<<val3<<endl;


}

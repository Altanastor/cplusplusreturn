/*
Forma 1:Bucle While-do

do {
 Block
} while{condition}; where the condition must be true. If it is false, the while-loop stop

Forma 2: Bucle While

while(condition){
    block
}



*/

#include<iostream>
using namespace std;

int main(){

int i(100);
int j(100);

//Do-while case: In this case, the do-while code prints the "bonjour" message and then evaluates the condition (i<100)
cout<<"------Do-while Case-----------"<<endl;

do{
    cout<<"bonjour"<<endl;
} while (i<10);

//While case: in this case, the while-code evaluates the condition and print if it is true, or do nothing if it is false.
cout<<"------while Case-----------"<<endl;

while(j<10){
    cout<<"bonjour"<<endl;
}


return 0;
}


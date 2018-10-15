/// For loops using strings

#include <iostream>
#include <string>

using namespace std;

int main(){

string ensayo("essai");
string test;

for(int i(1); i<= 3; ++i ){
    test = test + ensayo[6-2*i];
    test = ensayo[i] + test;

}

cout<< test << endl;

return 0;
}

/// Example of using for loops over strings
#include <iostream>
#include <string>
using namespace std;

int main(){

string cadena("abcdefghijklmn");
int n = cadena.size();
string p="";

for (int i(0); i<n ; ++i){
    if(i%2==0){
        //p = cadena[i];
        p = p + cadena[i];

    }
}
cout<<p;
return 0;

}

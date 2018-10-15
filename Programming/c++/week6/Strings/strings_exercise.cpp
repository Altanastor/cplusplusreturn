#include<iostream>
#include<string>

using namespace std;

int main(){

string s("MOOC");

cout<< s[s.size()-1]<<" ";
cout<<s.find("O")<<" ";
cout<<s.replace(1,2,"E")<<" ";
cout<< s << endl;


return 0;

}

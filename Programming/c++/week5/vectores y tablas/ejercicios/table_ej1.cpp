#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<double> v(3,3.14);

//    for(double valor(v[0]); valor < v[size()]; ++valor ){
//        cout<< valor << ", ";
//    }
//    cout << endl;
//    return 0;   solution: FALSE, this not show the elements of v

//      for(size_t valor(0); valor < v.size(); ++valor ){
//              cout<< v[valor] << endl;
//      }
//       cout << endl;

 //      cout << v <<endl; //FALSE

 for (auto valor : v){
    cout << valor << endl;
 }
cout << endl;

return 0;
}

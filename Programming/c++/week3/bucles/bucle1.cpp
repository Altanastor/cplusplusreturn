#include<iostream>
using namespace std;

int main(){

for (int i(0); i<5 ; ++i )
    cout<<"i = "<<i<<endl;

    /*Dont work, because j++ is the condition and j<5 the incrementation (no make sense)
//for (int j(0);j++; j<5 ){
//    cout<<"j= "<<j<<endl;
//}
*/

for (int j(1); j<=10; ++j){
    cout<<"5 multiplicado por "<< j << "cuyo valor es "<<5*j<<endl;
}

for(int k(10); k>=0; --k){
    cout<<"El valor decreciente k es"<< k<<endl;
}

for(int m(0); m>-1; m++){
    cout<<m<<endl; //PRESS CTRL+C to stop running.

}


return 0;
}

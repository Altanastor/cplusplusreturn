#include <iostream>
using namespace std;

int main(){

int n,m;

/* Condicionales: uso del if y else */
cout<<"Ingrese los valores"<<endl;
cin>>m>>n;

if( (m>=0) or (n>=0) ){
    cout<<"Algun valores positivo es ingresado"<<endl;
} else {
    cout<< "ambos son negativos"<<endl;
}

/*----------------------------- */

/* Uso del not  */
if(not(n>m)){
   cout<<"n no es mayor que m"<<endl;
} else {
   cout<<"n es mayor que m"<<endl;
}
/* --------------------------- */

/*uso del ! */

if (!(n<m)){
    cout<< "kike gano el te apuesto";
} else {
    cout<<"a la proxima gana";
}



return 0;





}

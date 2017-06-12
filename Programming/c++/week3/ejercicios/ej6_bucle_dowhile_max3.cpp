// Ingresar tres notas a lo maximo y de forma adecuada (i.e mayores que cero)
// teniendo en cuenta que la primera nota no debe coincidir con la segunda

#include <iostream>
using namespace std;

int main(){

int nota;
int nota2(20);
bool validator;
int cont=0;

do {

    cout<<"Ingrese una nota: "<<endl;
    cin>>nota;
    ++cont;
    validator = (nota<nota2);

} while (cont<3 && validator);

if( cont==3){
    cout<<"You exceed the number of marks"<<endl;
}


return 0;
}

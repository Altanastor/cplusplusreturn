#include <iostream>
/* Incluir una nueva libreria */
#include <math.h>
using namespace std;



int main(){

double angle_en_degres;

cout<< "Ingres el angulo en grados" <<endl;
cin>>angle_en_degres;

double angle_en_radians( angle_en_degres / 180);
/*cin>> angle_en_radians;*/


cout<<"El angulo  en radianes es "<< angle_en_radians<<endl;
cout<<"El coseno del angulo en grados es "<< cos(angle_en_degres)<<endl;

return 0;

}


#include <iostream>
using namespace std;

int main (){

int nb_estudiantes = 300;
int nb_places = 600;
bool flag, flag3;
bool flag2;

flag = nb_estudiantes*2 <= nb_places;
flag2 = nb_places > nb_estudiantes * 2;
flag3 = nb_estudiantes * 2 <  nb_places;

cout<< "pregunta4: "<< flag<<endl;
cout<< "pregunta3: "<< flag2<<endl;
cout<< "pregunta2: "<< flag3<<endl;





return 0;

}




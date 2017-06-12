#include<iostream>
using namespace std;

int main(){

double nota, somme(0.0);

for(int i(1); i<=4 ; i++ ){

    cout<<"Entre el valor de la nota "<< i<<endl;
    cin>>nota;
    somme = somme + nota;
}
cout<<"Moyenne = "<<somme/4<<endl;

cout<<"---------------------------------------------------------------"<<endl;
int note;
int nombre_de_notes;
cout << "Entrez le nombre de notes" << endl;
cin >> nombre_de_notes;
for(int i(1); i <= nombre_de_notes; ++i) {
  cout << "Entrez la note numero " << i << endl;
  cin >> note;
  somme = somme + note;
}
cout << "Moyenne = " << somme / nombre_de_notes << endl;



return 0;
}

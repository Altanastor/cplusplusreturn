#include <iostream>
using namespace std;

int main()
{
  cout << "Donnez l'heure de début de la location (un entier) : ";
  int debut;
  cin >> debut;

  cout << "Donnez l'heure de fin de la location (un entier) : ";
  int fin;
  cin >> fin;

  /*****************************************************
   * Compléter le code à partir d'ici
   *****************************************************/

    if(debut<0 || fin>24){
        cout << "Les heures doivent être comprises entre 0 et 24 !" << endl;
    }
    if(debut == fin) {
       cout << "Bizarre, vous n'avez pas loué votre vélo bien longtemps !" << endl;
    }
    if(fin<debut){
        cout << "Bizarre, le début de la location est après la fin ..." << endl;
    }
    else {
    //int h(fin-debut);


    if((fin>=0 && fin<= 24) && (debut>=0 && debut<=24) && (debut!=fin) ) {//begin of final else

    int r1;
    int r2;
    int x1(debut);
    int x2(fin);

    if((x1<=7) && (x2<=7) && (x1!=x2)){

        r1 = x2 - x1;
        r2 = 0; //2
    }

    if((x1<=7) && (7<x2 && x2<=17) && (x1!=x2)){

        r1 =  7- x1 ;
        r2 =  x2-7; //2
    }

    if((x1<=7) && (17<=x2 && x2<=24) && (x1!=x2)){

        r1 = x2-10-x1;
        r2 = 10; //2

    }

    if((7<=x1 && x1<=17) && (17<=x2 && x2<=24) && (x1!=x2)){


        r1 = x2 - 17;
        r2 = 17 - x1;//2

    }

    if( (7<=x1 && x1<=17) && (7<=x2 && x2<= 17) && (x1!=x2)){

        r1 = 0;
        r2 = x2-x1; //2

    }

    if ((17<=x1 && x1<=24) && (17<=x2 && x2<=24) && (x1!=x2)){

        r1 = x2-x1;
        r2 = 0; //2
    }

        cout << "Vous avez loué votre vélo pendant" << endl;


         if (r1 > 0 ){
          //cout << r2 <<" heure(s) au tarif horaire de "<< "2" << " franc(s)" << endl;
          cout << r1 <<" heure(s) au tarif horaire de 1"<< " franc(s)" << endl;
         }
         if (r2 > 0){
          cout << r2 <<" heure(s) au tarif horaire de 2" << " franc(s)" << endl;
         }
         cout << "Le montant total à payer est de "<< (r1*1 + r2*2) << " franc(s)." << endl;

    }

   }
  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

  return 0;
}

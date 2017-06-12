#include <iostream>
using namespace std;

int lml(0);
int frd(0);
int gal(0);
int rad(0);

int main()
{
  cout << "Pensez à un champignon : amanite tue-mouches, pied bleu, girolle," << endl
       << "cèpe de Bordeaux, coprin chevelu ou agaric jaunissant." << endl << endl;

  cout << "Est-ce que votre champignon vit en forêt (1 : oui, 0 : non) ? ";
  cin >> rad;
  if(rad == 0){
      cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
      cin >> gal;
      if(gal != 0){
            cout << "==> Le champignon auquel vous pensez est l'agaric jaunissant." << endl;
      } else {
            cout << "==> Le champignon auquel vous pensez est le coprin chevelu." << endl;
      }
   } else {
          cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
          cin >> gal;
          if(gal == 0){
             cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? ";
             cin >> lml;
             if(lml != 0) {
                    cout << "==> Le champignon auquel vous pensez est le cèpe de Bordeaux" << endl;
             }
             else {
                 cout << "==> Le champignon auquel vous pensez est la girolle." << endl;
                           }
          } else {
              cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? ";
              cin >> frd;
              if(frd != 0) {
                    cout << "==> Le champignon auquel vous pensez est le cèpe de Bordeaux" << endl;
              } else {
                  cout << "==> Le champignon auquel vous pensez est le pied bleu." << endl;
                  }
          }
    }

return 0;

}



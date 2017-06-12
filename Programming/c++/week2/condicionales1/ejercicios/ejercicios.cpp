#include <iostream>
using namespace std;

int main(){

/*  Ejercicio 1 */

/* First exercise
int a(3);
int b(6);
bool test1(b%a==1);
bool test2(false);
bool test(test1 or (a < b) or (test1 and test2));
cout<<"Ej.1: "<<test<<endl;

*/

int i(10);

if (i < 14) {
  int i(20);
  int j(4);
  int k(10);

  if (i > 10) {
    int i(30);

    k += 10;
    j *= 2;

    if (k > 0) {
      int i(5);
      int k(10);

      j = k;
      cout << i << endl;
    }
  }
}

/* Ejercio 5*/

int x(10);
int y(4);
int z(5);

x += z;

if (x + y > 20) {
  cout << "1" << " ";
} else {
 cout << "2" << " ";
}

if (z / 2 > 2) {
  if (y == z) {
    cout << "3" << " ";
  } else {
    cout << "4" << " ";
  }
} else {
  cout << "5" << " ";
}
/* */

/* Talleres  */
bool test1(true);
bool test2(false);
bool test3(true);

if (test1 or test2) {
  cout << "La" << " ";
} else {
  cout << "Si" << " ";
}

test1 = not test3;

if ((not test1 and test2) or test3) {
  if (test1 and test3) {
    cout << "La" << " ";
  } else {
    cout << "Si" << " ";
  }

  if (test3) {
    cout << "Si" << " ";
  } else {
    cout << "La" << " ";
  }
}





return 0;

}

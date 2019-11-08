//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Friday, November 08, 2019  */
/* Description: Scoping Rules in C++  */

int x=10;
int main() {
  
  /*Code here*/
  int x=20; // by declaring this, we just made the global variable inaccessable
  {
      int x=30;
      cout<<x<<endl; // nearest scope is 'int x =30;', so it will print 30
  }
  cout<<x<<endl; // nearest scope is 'int x=20;' so it will print 20

  // Oh! God!, What if a want to access the global variable ?
  cout<<::x<<endl; // now accesing the global variable
  // :: is read as scope resolution
  // we'll read it as "c-out scope resolution x, endl"

  /* o/p
    30
    20
    20 // after adding 'cout<<::x<<endl;'
  */
  
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
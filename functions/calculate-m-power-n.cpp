//***************************************************************---C76-->|
#include <iostream>
//#include <math.h>
using namespace std;

/* Created by Manoj Soni on Monday, November 04, 2019  */
/* Description: Calculate m power nusing C++  */
int pow(int m, int n){
  int p =1;
  // practice a tracing on paper, both shortcut way
  // and table tracing way
  for (int i=0; i<n; i++) { // i=0 only initialized once
   p=p*m;
  }
  return p;
}

int main() {
  
  /*Code here*/
  cout<<pow(2,5);  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
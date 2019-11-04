//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Monday, November 04, 2019  */
/* Description: Function Overloading in CPP  */
int add(int x, int y){
    return x+y;
}
int add(int x, int y, int z){ // possible in c++ // function overloading
    return x+y+z;
}

int main() {
  
  /*Code here*/
  // Return Types are never considered in function overloading 
  int a=10,b=5,c,d;
  c=add(a,b); // in C, a multiple functions can't have the same name
  d=add(a,b,c);

  cout<<c<<endl; // must be 15
  cout<<d<<endl; // must be 30 i.e 10+5+15
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
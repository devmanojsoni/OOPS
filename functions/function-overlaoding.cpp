//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Monday, November 04, 2019  */
/* Description: Function Overloading in CPP  */

// Functions overloading: for the purpose of not taking different
// function names for performing same operations
int add(int x, int y){
    return x+y;
}
int add(int x, int y, int z){ // possible in c++ // function overloading
    return x+y+z;
}
float add(float x, float y){
    return x+y;
}
// In C++ two functions are said to be different, if they have same name
// but different PARAMETER LIST
// and how the parameter list differs ?
// Either the DATA TYPE of the paramter or the NUMBER of parameters

int main() {
  
  /*Code here*/
  // Return Types are never considered in function overloading 
  int a=10,b=5,c,d;  // functions overloaded
  c=add(a,b); // in C, a multiple functions can't have the same name
  d=add(a,b,c);
  cout<<c<<endl; // must be 15
  cout<<d<<endl; // must be 30 i.e 10+5+15

  float f=2.5f, g=3.5f, h; // x.mf this is how you initialize floats in c++
  h=add(f,g);
  cout<<h<<endl;
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Monday, November 04, 2019  */
/* Description: Function Template Example in C++  */

// Whats this T?
// This is a definition of T
template <class T, class S> 
//  which is defined as a class of type template
T Max (T x, S y){ // returnType will be same as datatype of x
    if (x>y){
        return x;
    } else {
        return y;
    }
}
// we just reduced the below lines of codes !!
// and we now pass any data types, and even the objects of our class
/*
int max(int x, float y){
    if (x>y){
        return x;
    } else {
        return y;
    }
}
*/
int main() {
  
  /*Code here*/
  // "max" is inbuilt function in c++ so use diffrent function name
  int c=Max(10,6.9f);
  float d=Max(6.1f,1);
  int e=Max(6.9f,10); // but the returnType will be a float
  float f=Max(1,6.9f); // but the returnType will be an integer
  
  cout<<c<<endl;
  cout<<d<<endl;
  cout<<e<<endl;
  cout<<f<<endl;
  
  
  getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
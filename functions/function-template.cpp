//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Monday, November 04, 2019  */
/* Description: Function Template in C++  */

// Whats this T?
// This is a definition of T
template <class T> // no semicolon
//  which is defined as a class of type template
T Max (T x, T y){
    if (x>y){
        return x;
    } else {
        return y;
    }
}
// we just reduced the below lines of codes !!
// and we now pass any data types, and even the objects of our class
/*
int max(int x, int y){
    if (x>y){
        return x;
    } else {
        return y;
    }
}
float max(float x, float y){
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
  int c=Max(10,5);
  float d=Max(10.5f,6.9f);
  
  cout<<c<<endl;
  cout<<d<<endl;
  
  
  getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
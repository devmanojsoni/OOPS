//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Monday, November 04, 2019  */
/* Description: Find maximum of three nums in c++  */
int Max(int a, int b, int c){
  if (a>b && a>c){
      //cout<<a<<endl; // but we know we should NOT include cout or cin inside a function
      return a;
  } else if (b>c){
      //cout<<b<<endl;
      return b;
  } else {
      //cout<<c<<endl;
      return c;
  }
}

int main() {
  
  /*Code here*/
  cout<<Max(70,10,5);
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
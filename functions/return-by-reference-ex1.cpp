//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Thursday, November 07, 2019  */
/* Description: Return by Reference Ex1  */
int & fun(int &a){
    cout<<"Print a: "<<&a<<endl;
    return a;
}
int main() {
  
  /*Code here*/
  int x=10, r;
  
  //test
  cout<<"Print x: "<<&x<<endl;
  
  //normal
  r=fun(x);
  cout<<"Print r: "<<r<<endl;
  cout<<"Print x after fun call : "<<x<<endl;

  // abnormal
  fun(x)=25; // Amazing feature of C++, 
  // you can't do that in C
  cout<<"Print x after fun call (L-Value) : "<<x<<endl;
  
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
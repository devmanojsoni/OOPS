//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Friday, November 08, 2019  */
/* Description: Demo Local and Global Variables  */

int g=5;

void fun(){
    int g=10;
    g++; // NOT  it should increment the above variable, not the global one
}

int main() {
  
  /*Code here*/
  cout<<g<<endl;
  fun();
  cout<<g<<endl;
  // o/p 
  /*
    5
    5 // b'coz the global variable was never incremented
  */
  
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
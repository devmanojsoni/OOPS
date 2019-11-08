//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Friday, November 08, 2019  */
/* Description: Global Variables - Block Level Scope Example */

int g=5;

void fun(){
    int g=10;
    { // Possible in C++ -A block-level scope eaxmple
        int g=0;
        g++;
        cout<<g<<endl;
    }
    cout<<g<<endl;
}

int main() {
  
  /*Code here*/
  cout<<g<<endl;
  fun();
  cout<<g<<endl;
  // o/p 
  /*
    5
    1
    10
    5
  */
  
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
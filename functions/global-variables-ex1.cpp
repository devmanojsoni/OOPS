//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Friday, November 08, 2019  */
/* Description: Demo Local and Global Variables  */

int g=5;

void fun(){
    int a=10;
    a++;
    g++;
    cout<<a<<" "<<g<<endl;
}

int main() {
  
  /*Code here*/
  cout<<g<<endl;
  fun();
  cout<<g<<endl;
  // o/p 
  /*
    5
    11 6
    6
  */
  
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
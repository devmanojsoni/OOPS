//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Sunday, November 03, 2019  */
/* Description: Function to add two numbers  */

int add(int x, int y){
  int z;
  z=x+y;
  return z;
}

int main() {
  
  /*Code here*/
  int a = 5, b =10, sum;
  sum=add(a,b);
  cout<<sum;
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Monday, November 04, 2019  */
/* Description: Default Arguments in C++/ Overloaded Functions  */

// subtract - template class example, with default arguments
// so simple
template <class T>
T Sub(T x=0, T y=0){
    return x-y;
}
template <class F>
F Sub(F x, F y, F z){
    return x-y-z;
}


// Overloading, among case 2,3 and 4, 4th is the best case function
// CASE 4: YOU SHOULD ALWAYS START GIVING ZEROS FROM THE RIGHT, RIGHT TO LEFT
int add(int x=0, int y=0, int z=0/*default*/){
    return x+y+z;// in case of addition z is 0
}


int multiply(int x=1, int y=1, int z=1){ // ones b'coz its a case of multiplication
    return x*y*z;
}


/*
CASE 3: YOU SHOULD ALWAYS START GIVING ZEROS FROM THE RIGHT, RIGHT TO LEFT
int add(int x, int y=0, int z=0){
    return x+y+z;// in case of addition z is 0
}

CASE 2: YOU SHOULD ALWAYS START GIVING ZEROS FROM THE RIGHT, RIGHT TO LEFT
int add(int x, int y, int z=0){
    return x+y+z;// in case of addition z is 0
}
*/


/* CASE 1
//v1
int add(int x, int y){
    return x+y;
}
//v2
int add(int x, int y, int z){
    return x+y+z;
}
*/

int main() {
  
  /*Code here*/
  /* FOR CASE 1
  int c=add(2,5); // will call v1
  int d=add(2,5,8); // will call v2
  int e=add(2,5,0); // will call v2, but result same as v1
  */
  int c=add(2,5); // will call v1
  int d=add(2,5,8); // will call v2
  int e=add(2,5,0); // will call v2, but result same as v1
  int f=add();

  int p=multiply(1,2); // will call v1
  int q=multiply(1,2,3); // will call v2
  int r=multiply(1,2,0); // will call v2, but result same as v1
  int s=multiply();
  
  

  cout<<c<<endl;
  cout<<d<<endl;
  cout<<e<<endl;
  cout<<f<<endl;

  cout<<p<<endl;
  cout<<q<<endl;
  cout<<r<<endl;
  cout<<s<<endl;
  
  cout<<Sub(7,6);
  
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
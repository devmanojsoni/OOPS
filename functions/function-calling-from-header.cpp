//***************************************************************---C76-->|
#include <iostream>
#include <addsub.h>
// C:\MinGW\include\addsub.h
// C:\MinGW\lib\gcc\mingw32\8.2.0\include\c++\addsub
// C:\MinGW\lib\gcc\mingw32\8.2.0\include\c++\addsub.h
// C:\MinGW\lib\gcc\mingw32\8.2.0\include\ssp\addsub.h
// C:\MinGW\lib\gcc\mingw32\8.2.0\include\c++\tr1

//using namespace std;
using std::cout; // use can also specify like this
using std::endl; // you need to do this too

/* Created by Manoj Soni on Tuesday, November 05, 2019  */
/* Description: Function Calling Case 3: Function is being called from a header file  */
// check the header file "addsub.h"

int main() {
  
  /*Code here*/
  cout<<add(1000,2000)<<endl; // should return 3000
  cout<<sub(1000,2000); // should return 0
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}



//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
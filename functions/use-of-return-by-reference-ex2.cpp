//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Thursday, November 07, 2019  */
/* Description: Use/Adavantage and Example of Return by Reference  */

char & fun(char *s){ // s is the pointer to array of charaters
    return s[0];  // return type is character
}

int main() {
  
  /*Code here*/
  char str[10] = "SanojSoni";
  cout<<"Previously the str array was: "<<str<<endl;
  
  //char ch;
  char ch = 'M'; //changed
  
  // ch = fun(str); // should return 's' character
  // in the above case fun(str) when there was NO '&', it was returning
  // a value, value at the zeroth index of the string "sanojsoni", which was an
  // 's' character, keep in mind that it was NOT returning any reference to the zeroth index

  // but after we added and '&' before the return type, it started returning
  // a reference to the zeroth index, now since it is returning reference to the zeroth
  // index, we can manipulate the data at the zeroth index

  // fun(str) will now return reference to the zeroth index


  fun(str)=ch; // added '&' in front of the returntype in 'fun' function
  // looks wiered but possible in C++
  
  // check out the status of the str array now
  cout<<"Now the str array is: "<<str<<endl;
  
  // getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
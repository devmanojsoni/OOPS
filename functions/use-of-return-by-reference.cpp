//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Thursday, November 07, 2019  */
/* Description: Use/Adavantage and Example of Return by Reference  */

char fun(char *s){ // s is the pointer to array of charaters
    return s[0];  // return type is character
}

int main() {
  
  /*Code here*/
  char str[10] = "sanojsoni";
  char ch;
  ch = fun(str); // should return 's' character
  cout<<ch<<endl;
  // getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
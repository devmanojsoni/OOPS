//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Tuesday, November 05, 2019  */
/* Description: Function Calling Case 2: When definition defined below  */


int main() {
  
  /*Code here*/
  int add(int,int); // declared to avoid error, coz func is defined below the main()
  cout<<add(1,2);
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

// Function is defined below the main() function
int add(int x, int y){
    return x+y;
}



//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
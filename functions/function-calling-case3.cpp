//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Tuesday, November 05, 2019  */
/* Description: Function Calling Case 3: when function is declared globally  */

int add(int,int); // declared globally so other functions as well as 
// main function can use it

int sub(int x, int y){
    return add(x,y)-(x+y); 
    // calling the add function from another func
    // to demonstrate the use of globally declared function
}

int main() {
  
  /*Code here*/
  cout<<add(1000,2000)<<endl; // should return 3000
  cout<<sub(1000,2000); // should return 0
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

// Function is defined below the main() function
int add(int x, int y){
    return x+y;
}



//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Wednesday, November 06, 2019  */
/* Description: Pass by Reference Example in C++  */ 

// When to use call  by reference?
// whenever you want the actual parameters to be modified

// WARNING: You should NOT write any complex logic inside the function
// if you are using call by reference, as we know it pastes the code
// inside the main function and makes the m/c code monolithic
// however the source code still looks procedural/modular to us

void swap(int &a, int &b){ // Inline Function: Code will  be pasted inside the main
    // Check the addresses to ensure that a and b are same as x and y
    cout<<"Hello from swap(): Addresses of a and b are: "<<&a<<" "<<&b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main() {
  
  /*Code here*/
  int x=1, y=2;
  // Whenever we write a separate function a separate piece of m/c code
  // will be generated but in C++ that code of m/c code will be replaced at the place
  // of function call
  cout<<"before swapping, x and y are: "<<x<<" "<<y<<endl;
  swap(x,y); // send like pass by value
  cout<<"After swapping, x and y are: "<<x<<" "<<y<<endl;
  
  // Check the addresses to ensure that x and y are same as a and b
  cout<<"Hello from main(): Addresses of x and y are: "<<&x<<" "<<&y<<endl;
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
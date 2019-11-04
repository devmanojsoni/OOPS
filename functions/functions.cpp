//***************************************************************---C76-->|
#include <iostream> // no "dot h" in cpp
using namespace std; // all the functions from std library will be invoked if used here

/* Created by Manoj Soni on Saturday, November 02, 2019  */
/* Description: Debug and Test  */

// integers are NOT saved IN THE FORM 
// OF MANTISSA AND EXPONENTS in the memory, ONLY FLOATS ARE
int maxim(int a, int b, int c){
  if ((a>b) && (a>c)){
    //tab to make changes
   return 0;
  } else if (b>c) {
   return b;
  } else {
   return c;
  }
}

float add(float x, float y){ // signature of a function
  float z;
  z=x+y;
  return z;
  // This functions has three variables
  // scope of x, y, and z are within this function
  // this function is returning float, which is z
  // a function can have atmost 1 o/p and 0 or 1 or many inputs
  // separate stack frame/ activation record will be created
  // for the variables of this function in the stack section(memory)
}

void display(){
  cout<<"Hello";
}
int main() {
  
  /*Code here*/
  display();
  cout<<endl;
  // x,y and z in the function "add" is noht same as the x,y,z inside 
  // the original function
  // scope of x,y and z is within the main function

  // add a breakpoint in the line below, and observe
  float x=1.15625, y=7.9, z;
  // watch the variables
  // you will find that value of x,y and z are NOT as same as what
  // we have declared, it is b'coz floats are saved as IN THE FORM 
  // OF MANTISSA AND EXPONENTS in the memory
  cout<<x<<endl;
  cout<<y<<endl;
  cout<<z<<endl; // will have some garbage value
  z=add(x,y);
  cout<<z;

  int a=10, b=15, c=5, r;
  r=maxim(a,b,c);
  cout<<r<<endl;
  //getchar(); // use getch(); for C
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
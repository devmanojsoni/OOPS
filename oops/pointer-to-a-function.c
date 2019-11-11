//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, November 09, 2019  */
/* Description: Function to Function  */
void display(){
    printf("Hello");
}
int main() {
  
  // declaration of pointer to function
  void (*p2f) (); // signature/prototype must be same, only replace function name with
  // pointer-name, example (*fp), (*p2f),..., etc. If there are parameters
  // include their signature

  p2f = display; // init, set the pointer to point to the function

  (*p2f)(); // make the pointer to call the function
  // if there are parameters pass them
  
  // getchar(); // or use getch(); if using MingGW's gcc
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
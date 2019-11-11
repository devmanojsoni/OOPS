//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, November 09, 2019  */
/* Description: Pointer to a function Examples  */
int Max(int x, int y){
    return x>y ? x:y;
}
int Min(int x, int y){
    return x<y ? x:y;
}

int main() {
  
  int (*p2f)(int, int);
  
  p2f = Max; // pointer p2f is all set to point at Max function
  (*p2f)(10,5); // Max function is being called

  p2f = Min; // pointer p2f is all set to point at Min function
  (*p2f)(10,5); // Min function is being called

  // Same name, diffrent operations, this is just like polymorphism
  // In function overriding, internally, function pointers are used
  // for achieving runtime polymorphism
  
  // This means that one function pointer can point on any
  // function which is having the same signature/prototype

  // getchar(); // or use getch(); if using MingGW's gcc
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
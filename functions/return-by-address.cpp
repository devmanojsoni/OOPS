//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Wednesday, November 06, 2019  */
/* Description: Return By Address in C++  */

// Remember you cannot return the addresses of local variables
// int x=10; // and then 
// return &x; // Invalid
// as you might know, once the control exits the function, its activation record gets
// destroyed, and hence, its variables no more exists, 
// so if you create anything inside the heap memory with the help of any function
// then it stays inside the heap memory till you explicitly free() it, 
// and since it stays inside the heap memory you can return its address, 
// or in other words:
// "you can return the address of the heap memory created by a function"

int * returnAddress(int size){
    // FOR C, it would have like this
    // int *p = (int *)malloc(size*sizeof(int)) 
    
    // create an array in heap in c++, not in c
    int *p = new int[size];
    // fill the elements through 1 to 5
    for (int i=0; i<size; ++i){ // ++i is faster as we know from geeksforgeeks
        p[i]=i+1;
    }
    // Loop out and say:
    cout<<p<<endl;
    return p;
    
}
int main() {
  
  /*Code here*/
  
  int *ptr = returnAddress(5);
  cout<<ptr<<endl;
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Thursday, November 07, 2019  */
/* Description: Return by Address Example 1/ Return a pointer to an array  */

int * fun(int size){
    int *p=new int[size];
    for(int i=0;i<size;i++){
        p[i]=size*i;
    }
    //check the address in p
    cout<<"Address of p: "<<p<<endl;
    return p;
}

int main() {
  
  /*Code here*/
  int *q = fun(5);
  // check the address in q
  cout<<"Address of q: "<<q<<endl;
  for(int i=0; i<5;i++){
      cout<<q[i]<<endl;
  }
  
  
  getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
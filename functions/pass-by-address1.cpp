//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Wednesday, November 06, 2019  */
/* Description: Pass by Address Example in C++  */

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
  
  /*Code here*/
  int x=1, y=2;
  swap(&x,&y);
  cout<<x<<" "<<y<<endl;
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
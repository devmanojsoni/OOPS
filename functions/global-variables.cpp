//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Friday, November 08, 2019  */
/* Description: Global and Local Variables  */
// Global variables are stored inside the code section,
// and can be accessed from any function

// TASK: Analyse the memory creation and deletion inside the 
// memory (cs/stack/heap)

int g=0; // global variable

void fun(){
    int a=5; // local to fun()
    g=g+a;
    cout<<g; // should print 5
}
int main() {
  
  /*Code here*/
  int x=10; // local to main()
  g=15; // g assign 15, not local to main()
  fun();
  g++;
  cout<<g;
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;

  // o/p 
  /*
  2021
  */
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
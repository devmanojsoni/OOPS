//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Friday, November 08, 2019  */
/* Description: Static Variables in C++  */

// int v=0; // imagine it moved inside fun()
void fun(){
    // Remember Static and Global Variables are created only one time
    static int v=0; // moved inside along with the keyword 'static'
    
    // now variable 'v' will remain always inside the code section of the memory
    // the only difference would be, 'it's scope is only within this function'

    int a=5; // local to this fun()
    v++;
    cout<<a<<" "<<v<<endl; // should print 5 and 1
    
}
int main() {
  
  /*Code here*/
    fun(); // 5 1
    fun(); // 5 2
    fun(); // 5 3
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Friday, November 08, 2019  */
/* Description: Demonstrating Static Variables  */

// Static variables are more useful in modular programming
// or procedural programming / function based programming

// These static variables inside the functions are available in C/C++ 
// but NOT is Java
void fun(){
    static int s=10; //created only once
    s++; // once incremented/decremented, stays incremented/decremented
    // inside the code section
    cout<<s<<endl;
}
int main() {
  
    /*Code here*/
    fun(); // prints 11,
    fun(); // prints 12, b'coz previously it was 11
    //fun();
    // getchar(); // use getch(); in C if not using MingGW Compiler
    return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
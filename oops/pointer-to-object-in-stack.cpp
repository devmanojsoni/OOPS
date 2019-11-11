//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Saturday, November 09, 2019  */
/* Description: Pointer to an Object in Stack  */
class Rectangle {
    public:
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main() {
  
  /*Code here*/
  Rectangle r; // object of type Rectangle is created
  /* This would have also true
  Rectangle *ptr;
  ptr = &r;
  */
  // Demonstrating how we can access an object in the stack using pointers
  Rectangle *ptr = &r; // In One line
  ptr->length=10;
  ptr->breadth=10;
  cout<<ptr->area<<endl;
  cout<<ptr->perimeter<<endl;
  
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
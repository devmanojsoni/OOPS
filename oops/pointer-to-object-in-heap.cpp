//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Saturday, November 09, 2019  */
/* Description: Pointer to an Object in Heap  */
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
  
  // Demonstrating how we can access a NEWLY CREATED object in HEAP using pointers
  // dynamic object created in a HEAP
  Rectangle *ptr = new Rectangle(); // In One line
  ptr->length=10;
  ptr->breadth=5;
  cout<<ptr->area<<endl;
  cout<<ptr->perimeter<<endl;
  
  // Rectangle *ptr = new Rectangle; // without paranthesis would have also true
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
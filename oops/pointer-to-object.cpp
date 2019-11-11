//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Saturday, November 09, 2019  */
/* Description: Pointer to object on heap/ How to have a pointer on objects */

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
    /* 
    // Method 1:
    Rectangle r; // NOT created in heap
    Rectangle *p;

    p=&r; // since pointer holds address
    r.length=10; // for directly accessing, use dot operator with variable name

    (*p).length=11;// This is also valid
    p->length=12; // for accessing using pointer, use arrow

    */
    // Method 2:
    // Case 1: Separate declaration and initialization
    Rectangle *p; // dec of a pointer of type rectangle
    p = new Rectangle(); // create a new rectangle object in HEAP
    // and make the pointer point to it

    p->length=15;
    p->breadth=10;
    cout<<p->area()<<endl;

    // Case 2: declaration and initialization in same line
    Rectangle *m = new Rectangle; // use can avoid paranthesis in 'new Rectangle'
    Rectangle *q = new Rectangle(); // create a new rectangle object in HEAP
    // and make the pointer point to it

    q->length=15;
    q->breadth=10;
    cout<<q->area()<<endl;

    // Important
    // Create an object in heap: Rectangle *p = new Rectangle();
    // Create an object in stack: Rectangle r;

    // In Java, YOU CANNOT CREATE AN OBJECT IN STACK
    // OBJECTS ARE ALWAYS CREATED IN HEAP ONLY USING NEW
    // BUT C++ GIVES YOU AN OPTION WHETHER YOU WANT IT IN STACK
    // OR YOU WANT IT IN HEAP, BASED ON YOUR REQUIREMENTS

    // getchar(); // use getch(); in C if not using MingGW Compiler
    return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
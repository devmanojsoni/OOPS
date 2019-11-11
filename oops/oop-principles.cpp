#include <iostream>
using namespace std;

/* Description: Principles of OOP in C++ */

class MyClass{ // Class gives us both abstraction and encapsulation
    private: // to avoid mishandling not for security
    // 1.data members/properties
    int datamember1;
    float datamember2;
    char datamember3[10];
    
    // 2.functions/methods
    void function1(){}
    int function2(){}
    float function3(int param1, int *A){ // lesser params are better
        // complex functions
    }
};
// In a class, data members and functions are bind together,
// you should not allow any external functions to manipulate the data
// members of a class, write the neccassary functions within the class
// e.g getters and setters functions, constructors/destructors, facillitators etc


// we've used structures like this in Proceduarl Programming in C
struct Rectangle { // BUT IN A CLASS DATA MEMBERS AND FUNCTIONS ARE INSIDE TOGETHER
    int length;
    int breadth;
};
// and then we later accessed/ manipulated the data via EXTERNAL FUNCTIONS
// like area() etc
int area_byPassingStruct(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
    return r->length*r->breadth;
}
void violate_Area(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
    //return r->length*r->breadth;
}


int main() {
  
    struct Rectangle r1; // instance of the structure rectangle
    int area = area_byPassingStruct(&r1, 1000, 1000);
    printf("area : %d\n", area);
    violate_Area(&r1, 10, 1);
    // In Structures, data of the instance r1 can be manipulated by other functions too
    printf("Area Violated with Other External Function! : %d\n", r1.length*r1.breadth);

    // Whereas, in C++ Programming, in Classes,
    // We use getter and setter functions and to access them we use the dot operator
    // e.g
    // employee.setName = "Arvind";
    // employee.getName
    // and we don't want to give authority to external functions in classes
    // each instances of classes in c++ are binded with properties and methods together,
    // wherein their functions should only access or manipulate them
    
    // getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

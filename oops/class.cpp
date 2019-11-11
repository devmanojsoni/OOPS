#include <iostream>
using namespace std;

/* Description: How to write a class in c++, SEE THE NOTEBOOK FOR MEMORY
DISTRIBUTION in cs/stack/heap  */

// Classes or blueprints doesn't occupy any memory
// but their objects or instances memory
class Rectangle{
    
    public:
    int length; // by default it was private --2byte
    int breadth;//                           --2byte
    //                                     ---------
    //                              Total =    4 bytes
    // Only the data members are allocated memory, 
    // NOT the functions   
    // functions: functions are embeded inside the code section,
    // whether it is the main() function or any other function
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
/* How it looks inside the memory
    ----------------------
    |
    | Heap
    |
    |---------------------
    | Stack/ Stack frames
    | NO SEPARATE STACK FRAME FOR Class Rectangle
    | 
    | _____r1_____        _____r2_______
    | |                   |
    | | L: 10             | L: 15
    | |___________        |_____________
    | |                   |
    | | B:  5             | B: 10
    | |___________        |_____________
    | Functions from the code-setion are available
    | for both the objects
    |
    |----------------------
    | Code section:
    | 
    | area() --only 1 time
    |   _______
    |   _______
    |   _______
    | perimeter() --only 1 time
    |   _______
    |   _______
    |   _______
    | main()
    |   _______
    |   _______
    |   _______
    |
    |
    |----------------------
*/
int main() {
    // objects
    Rectangle r1, r2; // r1 and r2 are of data-type rectangle
    r1.length = 10; // was 'private: ' before (default)
    r1.breadth = 5; // accessible after putting 'public: ' before data members
    cout<<r1.area()<<endl;
    // area() function will be called over the data members of the object r1

    r2.length = 15; // dot operator is used for accessing the data members
    r2.breadth = 10;
    cout<<r2.area()<<endl; // dot opeartor is also used for member functions
    // area() function will be called over the data members of the object r2
    // this time

    /*
    // only objects are created inside the stack not the class itself, 
    // and the objects created are of type class which they belongs to, 
    // or extends/inherits
    | _____r1_____        _____r2_______
    | |                   |
    | | length: 10        | length: 15
    | |___________        |_____________
    | |                   |
    | | breadth: 5        | breadth: 10
    | |___________        |_____________
    | | No separate       | No separate
    | | memory but        | memory but
    | | functions         | functions 
    | | available         | available
    | |
    | | 1. area()         | 1. area()
    | | 2. perimeter()    | 2. perimeter()
    | |                   |
    | |___________        |_____________
    */
    
    // getchar(); // use getch(); in C if not using MingGW Compiler
    return 0;
}
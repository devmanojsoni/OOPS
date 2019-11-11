/*
Four Pillars:
1. Abstraction, 2. Encapsulation --> Data Hiding
3. Inheritance, 4. Polymorphism

*/
#include <iostream>
using namespace std;
// Encapsulation:
// =================
// And we can group the set of functions together with the help of a class,
// thats what encapsulation means
class Car { // You should start class name with capital letter (in C++)
    
    // Data Members
    // What is hiding inside? Data.
    public: // private: // by default
    char make[20]; // properties
    int modelno; // properties

    // Functions, {Encapsulation: Group the functions together}
    // What is visible outside ? Functions.
    bool isMoving(){} // methods
    bool drive(){} //methods
};
// Abstraction: Class help us achieving abstraction
// ================
// Who is the user of a class ? -Programmer Only, NOT the end user
// Programmer should bother about calling the function and making use of it.
// He should NOT bother about 'how those functions are working'
// SUPPOSE I WROTE THE FUNCTION TODAY, TOMORROW I NEED NOT LOOK
// INTO THAT DETAILS OF HOW THE FUNCTION IS WORKING (e.g printf, from stdio.h)
// You don't need to know the internal details, just the function
// name shoud be sufficient, that is the meaning of abstraction

// In Object Oriented Programming, we group the related variables and functions
// that operate on them into objects and this is what we call 'Encapsulation'
int main(){
    Car bmw = new Car();
    return 0;
}
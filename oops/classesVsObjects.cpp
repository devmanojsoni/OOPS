#include <iostream>
using namespace std;

// Class is basically a blueprint for an object
// if human is a class, you are an oject of human class
// if car is a class, then bmw, toyota, maruti are it objects

// data & functions: data is called as property, 
// functions are called as behaviour or methods

// you can either write the class in the same program or
// even you can write it somewhere else
// defining a class is different and create an object of that class
// and using it is different
class Rectangle{
    float length;
    float breadth;

    float area(){}
    float perimeter(){}
    float diagonal(){}
};


int main() {
  // Objects / Instances
  Rectangle r1;
  Rectangle r2;
  Rectangle r3;
  
  
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

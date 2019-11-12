//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Monday, November 11, 2019  */
/* Description: Operator Overloading  */
/*
    int, float -->  +, -, /, *, >, <, >=, <=, ==, !=
                    &, &=, |, |=, >>, <<
                    delete, delete []
                    ^, ^=, 
*/
/*
    Complex numbers, as we know, a+ib
    where, a--> real part, ib--> imaginary part
    c1--> 5+7i
    c2--> 2+9i
        _______
        7 + 16i
*/

class Complex{
  //private:
  public:
    int real;
    int img;
  // public:
    // default argument contructor
    Complex(int r=0, int i=0){ // works as parameterised as well as non-parameterised constructor
      real=r;
      img=i;
    }
    // object as return type, getting object as parameter
    Complex operator+(Complex x){
      Complex temp; // creating an object
      temp.real = real /*c1's real*/ + x.real /*c2's real*/;
      temp.img = img /*c1's img*/ + x.img /*c2's img*/;
      return temp; // returing a summed object
    }
    Complex operator-(Complex x){
      Complex temp; // creating an object
      temp.real = real /*c1's real*/ - x.real /*c2's real*/;
      temp.img = img /*c1's img*/ - x.img /*c2's img*/;
      return temp; // returing a summed object
    }
    Complex operator/(Complex x){
      Complex temp; // creating an object
      temp.real = real /*c1's real*/ / x.real /*c2's real*/;
      temp.img = img /*c1's img*/ / x.img /*c2's img*/;
      return temp; // returing a summed object
    }
    Complex operator*(Complex x){
      Complex temp; // creating an object
      temp.real = real /*c1's real*/ * x.real /*c2's real*/;
      temp.img = img /*c1's img*/ * x.img /*c2's img*/;
      return temp; // returing a summed object
    }

};

int main() {
  
  /*Code here*/
  Complex c1(3,7);
  Complex c2(5,11);
  Complex x1(10, 20);
  Complex x2(5, 10);
  Complex c3, c4, c5, c6, c7;
  //          passing object as parameter
  c3 = c1+c2; // + is called upon c1 by passing c2 object as params
  c4 = c1-c2;
  c5 = c1/c2;
  c7 = x1/x2;
  c6 = c1*c2;
  cout<<c3.real<<"+i"<<"("<<c3.img<<")"<<endl;
  cout<<c4.real<<"+i"<<"("<<c4.img<<")"<<endl;
  cout<<c5.real<<"+i"<<"("<<c5.img<<")"<<endl;
  cout<<c7.real<<"+i"<<"("<<c7.img<<")"<<endl;
  cout<<c6.real<<"+i"<<"("<<c6.img<<")"<<endl;
  
  
  // getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
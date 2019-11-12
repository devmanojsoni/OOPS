//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Monday, November 11, 2019  */
/* Description: Operator Overloading  */
/*
    Complex numbers, as we know, a+ib
    where, a--> real part, ib--> imaginary part
    c1--> 5+7i
    c2--> 2+9i
        _______
        7 + 16i
*/

class Complex{
  private:
    int real;
    int img;
  public:
    // default argument contructor
    Complex(int r=0, int i=0){ // works as parameterised as well as non-parameterised constructor
      real=r;
      img=i;
    }
    void display(){
        cout<<real<<"+i"<<"("<<img<<")"<<endl;
    }
    // freiend function, object as return type, getting objects as parameter
    // prototype declared here inside the class
    friend Complex operator+(Complex x, Complex y);
};

// independent function / outside function
// doesn't belong to the class, but a friend of that Complex Class
// so we don't use any scope resolution operator
Complex operator+(Complex x, Complex y){
    Complex temp; // creating an object
    temp.real = x.real + y.real ;
    temp.img = x.img + y.img ;
    return temp; // returing a summed object
}
int main() {
  
  /*Code here*/
  Complex c1(3,7);
  Complex c2(5,4);
  Complex c3;
  //          passing object as parameter
  c3 = c1+c2; // add is called upon c1 by passing c2 object as params
  
  // now you ca't access real and img, coz they are private members
  // cout<<c3.real<<"+i"<<"("<<c3.img<<")"<<endl;

  c3.display();
  
  // getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
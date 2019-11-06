//***************************************************************---C76-->|
#include <iostream>
#include <typeinfo> // type of data type in C++
using namespace std;
// or
// using std::cout; // explicitly saying using only this cout function
// std::cout<<"helloworld"<<endl;
// using std::cin; // cin is an instance of of i stream, 
// cout is an instance of o stream
// std::cin>>InputVariable;

/* Created by Manoj Soni on Monday, November 04, 2019  */
/* Description: Function Template Example in C++  */

// Whats this T?
// This is a definition of T

// //  which is defined as a class of type template

template <class T> // MUST BE DECLARED ABOVE THE CLASS TEMPLATE
T Sum (T x, T y){ // returnType will be same as datatype of x
    T z=x+y; // T can also be inside in scenarios like this
    return z;
}

template <class F, class T> // MUST BE DECLARED ABOVE THE CLASS TEMPLATE
F Sum (F x, T y){ // returnType will be same as datatype of x
    F z=x+y; // T can also be inside in scenarios like this
    return z;
}

template <class P> // MUST BE DECLARED ABOVE THE CLASS TEMPLATE
P Sum (P x, P y, P z){ // returnType will be same as datatype of x
    P r=x+y+z; // T can also be inside in scenarios like this
    return r;
}

template <class P, class Q, class R> // MUST BE DECLARED ABOVE THE CLASS TEMPLATE
P Sum (P x, Q y, R z){ // returnType will be same as datatype of x
    P r=x+y+z; // T can also be inside in scenarios like this
    return r;
}

template <class P, class Q> // MUST BE DECLARED ABOVE THE CLASS TEMPLATE
P Sum (P x, P y, Q z){ // returnType will be same as datatype of x
    P r=x+y+z; // T can also be inside in scenarios like this
    return r;
}

template <class P, class Q> // MUST BE DECLARED ABOVE THE CLASS TEMPLATE
Q Sum (Q x, P y, P z){ // returnType will be same as datatype of x
    Q r=x+y+z; // T can also be inside in scenarios like this
    return r;
}

template <class P, class Q> // MUST BE DECLARED ABOVE THE CLASS TEMPLATE
P Sum (P x, Q y, P z){ // returnType will be same as datatype of x
    P r=x+y+z; // T can also be inside in scenarios like this
    return r;
}


// we just reduced the below lines of codes !!
// and we now pass any data types, and even the objects of our class
/*
float Sum(float x, int y){
    float z=x+y;
    return z;
    
}
*/

int main() {
  
  /*Code here*/
  
  // #include <typeinfo>
  //cout << typeid(variable).name() << endl;

  cout<<typeid(Sum(4,5)).name()<<endl;
  cout<<typeid(Sum(4.1f,5)).name()<<endl;
  cout<<typeid(Sum(4,5.1f)).name()<<endl;
  cout<<typeid(Sum(4.1f,5.1f)).name()<<endl;
  cout<<typeid(Sum(4,5,6)).name()<<endl;
  cout<<typeid(Sum(4.1f,5,6)).name()<<endl;
  cout<<typeid(Sum(4,5.1f,6)).name()<<endl;
  cout<<typeid(Sum(4,5,6.1f)).name()<<endl;
  cout<<typeid(Sum(4,5.1f,6.1f)).name()<<endl;
  cout<<typeid(Sum(4.1f,5,6.1f)).name()<<endl;
  cout<<typeid(Sum(4.1f,5.1f,6.1)).name()<<endl;
  cout<<typeid(Sum(4.1f,5.1f,6.1f)).name()<<endl;
  cout<<typeid(Sum(4.1,5.1,6.1)).name()<<endl;
  
  //getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}
/*Output
i
f
i
f
i
f
i
i
i
f
f
f
d
*/

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
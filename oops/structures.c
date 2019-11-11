//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, November 09, 2019  */
/* Description: Structures  */

struct Rectangle{ // starting letter = CAPITAL, just like you name a class
    int length; // 2 bytes lets say
    int breadth; // 2 bytes lets say
                // total 4 bytes
};
int area_byPassingValue(int l, int b){
    struct Rectangle r;
    r.length=l;
    r.breadth=b;
    return r.length*r.breadth;
}
int area_byPassingStruct(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
    return r->length*r->breadth;
}
int main() {
  
    /*Code here*/
    // instance of the rectangle
    // declaration
    // struct Rectangle r; // declaration only
    struct Rectangle r = {5,10}; // dec + init
    // object/instance created inside the stack frame of main, no separate stack frame
    r.length=15;
    r.breadth=10;
    printf("Area of the rectangle is : %d\n", r.length*r.breadth);
    
    int area1 = area_byPassingValue(10,10);
    printf("area1 : %d\n", area1);

    struct Rectangle r1;
    int area2 = area_byPassingStruct(&r1, 1000, 1000);
    printf("area2 : %d\n", area2);
  
    // getchar(); // or use getch(); if using MingGW's gcc
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
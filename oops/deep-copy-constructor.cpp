//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Sunday, November 10, 2019  */
/* Description: Deep Copy Constructor  */
class Test{
    private:
    int a;
    int *p;
    
    public:
    Test(int x){
        a=x; // sets a
        p=new int[a]; // creates a memory of size 'a' in heap
        /*
        
        _____t______
        |
        | a = 5
        |___________
        |   ____
        | p|____|---->|__|__|__|__|__| // pointing to array of 5 ints in heap
        |___________
        */
    }
    Test(Test &t){
        a=t.a; // upto this everything is ok
        // p=t.p; 
        // above commented out code make it pointing on the same array, 
        // VIOLA, thats a terrible MISTAKE
        
        /*
                                                            _____t2_____
                                                            |
                                                            | a = 5
                                                            |___________
        // pointing to the same exact array                 |   _____
                        |__|__|__|__|__|<-------------------| p|____|  
                                                            |___________
        */
        
        // So the problem with COPY CONSTRUCTOR is,
        // if there is any dynamic memory allocation done by an object,
        // then the copy constructor may not create a new memory for it
        // it may be pointing on the same memory
        // Solution:
        p=new int[a]; // mistake rectified now
        /*
        _____t2_____
        |
        | a = 5
        |___________
        |   ____
        | p|____|---->|__|__|__|__|__| // pointing to ANOTHER ARRAY of 5 ints
        |___________

        */


    }
};
int main() {
  
  /*Code here*/
  Test t(5);
  Test t2(t); 
  
  // getchar(); // use getch(); in C if not using MingGW Compiler
  return 0;
}

// output:
  /*
        _____t______
        |
        | a = 5
        |___________
        |   ____
        | p|____|---->|__|__|__|__|__| // pointing to array of 5 ints in heap
        |___________

        _____t2_____
        |
        | a = 5
        |___________
        |   ____
        | p|____|---->|__|__|__|__|__| // pointing to ANOTHER ARRAY of 5 ints
        |___________

        */

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
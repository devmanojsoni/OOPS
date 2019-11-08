//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Friday, November 08, 2019  */
/* Description: Linear Search Using Functions  */

int search(int A[], int n, int key){
    bool exists = false;
    for(int i=0; i<n; ++i){ // ++i is faster a/c to gfg
        if (A[i]==key) {
            bool exists = true;
            return i;
        }
    }
    if (exists == false) { 
        return -1;
    }
    return 0; // If you won't add this it will through a warning
    // warning: control reaches end of non-void function
}
int main() {
  
  /*Code here*/
  //int index;
  int A[] = {1,2,3,9,5,7,6,8,4};
  int key;
  cout<<"Enter the element to be searched: ";
  cin>>key;
  
  int index = search(A, 9, key);
  
  if(index>=0){
    cout<<"Found at index: "<<index<<endl;
  } else {
    cout<<"not found"<<endl;
  }
  
  
  system("pause"); // use getch(); or system("pause"); in C if not using MingGW Compiler
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
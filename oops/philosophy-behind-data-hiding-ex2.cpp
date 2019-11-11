//***************************************************************---C76-->|
#include <iostream>
#include <string>
using namespace std; // bad practice though
// using std::string;
// using std::cout;
// using std::cin;
// using std::endl;

/* Created by Manoj Soni on Saturday, November 09, 2019  */
/* Description: Philosophy Behind Data Hiding Example 2  */

class Rectangle {
    // or don't mention private or public
    // by default it is private
    private: 
    int length;
    int breadth;
    // std::string str1("Hello World!"); // Can't be initialized during declaration
    // That can only be done with static const primitive types
    string errmsg[2];

    public: // make functions public
        // Getter and Setter functions
        // setter functions
        void setLength(int l){
            if(l>=0) { // A LITTLE BIT OF VALIDATION
                length=l;
            } else {
                length=-(l); 
                // show error msg
                errmsg[0].clear();
                errmsg[0].assign("Considering Positive Value of Length");
                // cout<<errmsg[0].data()<<endl; // bad practice
                
            }
        }
        void setBreadth(int b){ 
            if(b>=0) {
                breadth=b;
            } else {
                breadth=-(b); // VALIDATE AND SET
                
                errmsg[1].clear();
                errmsg[1].assign("Considering Positive Value of Breadth");
                // cout<<errmsg[1].data()<<endl; // bad practice
            }
        }
        
        string msg(){
            
            int no = 2;
            string err[no], errlist[no];
            // below code converted into for loop
            for (int i = 0; i<no ; ++i){
                err[i]=errmsg[i].data();
            }
            for (int i = 0; i<no ; ++i){
                if (err[i] != ""){
                    errlist[i] = err[i] + "\n";
                }
            } 
            
            /*  //For Easy Understanding
                string l_error = errmsg[0].data();
                string b_error = errmsg[1].data();
                string errlist[4];
                if (l_error != ""){
                    errlist[0] = l_error + "\n";
                } 
                if (b_error != ""){
                    errlist[1] = b_error + "\n";
                }
            */
            
            return errlist[0] + errlist[1];
            
        }
        // getter functions
        int getLength(){ return length; }
        int getBreadth(){ return breadth; }

        // Important Points:
        // Together Getter and Setter Functions are called as Property Functions
        // Accessors : Getter Functions // Read
        // Mutators : Setter Functions // Write
        
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    
};

/* Making data members public is not recommended
class Rectangle {
    public:
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
b'coz the data members are made public, we are able to access them
from the main function
*/

int main() {
    Rectangle r;
    // not able to perform the below now
    // r.length = 10; // this is not passible now
    // r.breadth = 5; // this is not possible now
    // cout<<r.area()<<endl; // and this will have now some garbage value

    // call the setter functions and set the values
    r.setLength(-10); // length = 10
    r.setBreadth(-5); // breadth = 5
    //
    cout<<r.msg()<<"Area after using setLength and setBreadth: "<<r.area()<<endl;
    
    // int currentLength = r.getLength();
    // cout<<currentLength<<endl;


    // getchar(); // use getch(); in C if not using MingGW Compiler
    return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
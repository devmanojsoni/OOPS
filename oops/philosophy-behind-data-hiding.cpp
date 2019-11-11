//***************************************************************---C76-->|
#include <iostream>
using namespace std;

/* Created by Manoj Soni on Saturday, November 09, 2019  */
/* Description: Philosophy Behind Data Hiding  */

class Rectangle {
    
    // or don't mention private or public
    // by default it is private
    private: 
    int length;
    int breadth;

    public: // make functions public
    
        // Getter and Setter functions
        // setter functions
        void setLength(int l){
            if(l>=0) { // A LITTLE BIT OF VALIDATION
                length=l;
            } else {
                length=-(l); 
                // void errmsg_l();
                errmsg_l();
            }
        }
        void setBreadth(int b){ 
            if(b>=0) {
                breadth=b;
            } else {
                breadth=-(b); // VALIDATE AND SET
                // void errmsg_b();
                errmsg_b();
            }
        } 
        // getter functions
        int getLength(){ return length; }
        int getBreadth(){ return breadth; }

        // Important Points:
        // Together Getter and Setter Functions are called as Property Functions
        // Accessors : Getter Functions // Read
        // Mutators : Setter Functions // Write
        
        // used to display err msgs during validations
        // private: // don't know what to do, but these
        // err displaying functions must not be accessible outside
        void errmsg_l(){
            cout<<"Considering Positive Value of Length"<<endl;
        }
        void errmsg_b(){
            cout<<"Considering Positive Value of Breadth"<<endl;
        }
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
    
    cout<<"Area after using setLength and setBreadth: "<<r.area()<<endl;
    int currentLength = r.getLength();
    cout<<currentLength<<endl;


    // getchar(); // use getch(); in C if not using MingGW Compiler
    return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
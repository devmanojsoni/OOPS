// CPP code for assign (const string& str) 
   
#include <iostream> 
#include <string> 
using namespace std; 
   
// Function to demonstrate assign 
void assignDemo(string str1, string str2) 
{ 
    // Assigns str2 to str1 
    str1.assign(str2); 
    cout << "After assign() : "; 
    cout << str1; 
  
} 
          
// Driver code 
int main() 
{ 
    string str1("Hello World!"); 
    string str2("GeeksforGeeks"); 
  
    cout << "Original String : " << str1 << endl; 
    assignDemo(str1, str2); 
   
    return 0; 
} 
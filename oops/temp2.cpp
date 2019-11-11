#include <iostream>
#include <string>
using namespace std;
class test
{
public:
    test(const std::string& s):str(s){};
private:
    std::string str;
};
 
class test1
{
public:
    test1() : tst_("Hi") {}
    test tst_;
};
 
int main()
{
    test1 t1;
    //cout<<t1.("Hi")<<endl;
    return 0;
}
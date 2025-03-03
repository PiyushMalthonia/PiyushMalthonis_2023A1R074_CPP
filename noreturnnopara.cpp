//Function with no return type and no parameter
#include<iostream>
using namespace std;
class program  //Structure creation
{
    public:
    void display() //no parameters passed
    {                  // this function is not depend on other for excution, belong to category 1
        cout<<"Hello World";
    }
    public: 
    void fun()
    {
        cout<<"Hi";
    }
}; 
int main()
{
    program obj;
    obj.fun();
    obj.display();  // calling function
    return 0;
}
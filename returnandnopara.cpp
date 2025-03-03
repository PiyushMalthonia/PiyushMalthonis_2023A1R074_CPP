//Function with return type and no parameter
#include<iostream>
using namespace std;
class Program
{
    private: int pin;
    public: int validate() //we can also use string //return type and no parameter
    {
        cout<<"Enter your pin : ";
        cin>>pin;
        if(pin==1234)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    public: void fun()
    {
        cout<<"Hi";
    }
};
int main()
{
    Program obj;   //Structure
    int result;
    result = obj.validate();
    if(result == 1)
    {
        cout<<"Authentication Successful";
    }
    else
    {
        cout<<"Authentication Failed";
    }
}
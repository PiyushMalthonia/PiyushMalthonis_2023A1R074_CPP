// Function with no return type and with parameters
#include<iostream>
using namespace std;
class program //defining structure in C++ using "class" for declaring functions instead of "struct" used for definiting values.
{
    private : int pin;
    public : int Validate() // Function with return type and no parameters
    {
        cout<<"Enter your pin : ";
        cin>>pin;
        if(pin == 1234)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    public : int Display_Balance(int Amount) // Function with no return type and with parameters
    {
        cout<<"\n Your Balance is : "<<Amount; //Amount is formal parameter (defined at function declaration or definition)
    }
    public : void Fun()
    {
        cout<<"Hi"<<endl;
    }
}; //Terminator or end statement 
int main()
{
    program obj; //declaring a variable to access the structure/class.
    int result;
    int amt = 10000; //call by value
    obj.Fun();
    result = obj.Validate();
    if(result == 1)
    {
        cout<<"Authentication Successful";
        obj.Display_Balance(amt); //amt is actual parameter (defined at function calling)
    }
    else
    {
        cout<<"Authentication Failed";
    }
    return 0;
}
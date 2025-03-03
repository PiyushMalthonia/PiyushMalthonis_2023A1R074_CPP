//Function with no return type and parameter
#include<iostream>
using namespace std;
class Program
{
    private: int pin;
    public: int validate() //we can also use string //return tupe and no parameter
    {
        cout<<"Enter your pin : ";//Function with turn type and no parameter
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
    public: void Display_Balance(int Amount) //Formal Parameter (Parameter defined at function definition)
    {                                        //Function with no return type and parameter
        cout<<"\nYour Balance is "<<Amount;
    }
    public: void fun()//Function with no return type and no parameter
    {
        cout<<"Hi\n";
    }
};
int main()
{
    Program obj;   //Structure
    int result;
    int amt = 10000; //call by value 
    obj.fun();
    result = obj.validate();
    if(result == 1)
    {
        cout<<"Authentication Successful";
        obj.Display_Balance(amt);  //amt is Actual Parameter(defined at funvgtion calling)
    }
    else
    {
        cout<<"Authentication Failed";
    }
}
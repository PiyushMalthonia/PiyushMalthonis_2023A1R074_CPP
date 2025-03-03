/*Program to demonstrate workinng of Array Initilization using Accept Method*/
#include<iostream>
using namespace std;
class Program
{
    private : int i,a[10]; //Declaration of Array
    public : void Accept()
    {
        //Inilization of array using accepty method(Using any type of loop ; for,while,do while)
        for(i=0;i<=9;i++)
        {
            cout<<"\nEnter Array Elements ";
            cin>>a[i];
        }
    }
    public : void Display()
    {
        //Inilization of array using accepty method(Using any type of loop ; for,while,do while)
        cout<<"\nArray Elements entered by the user is ";
        for(i=0;i<=9;i++)
        {
            cout<<"\t"<<a[i];
        }
    }
};
int main()
{
    Program obj;
    obj.Accept();
    obj.Display();
}
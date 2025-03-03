/*Program to demonstrate the working and execution sequence of constructor, destructor and other functions*/

#include<iostream>
using namespace std;
class Program         //class
{
    private : int a;
    public : void Fun1()      //Random Function 1
    {
        cout<<"\n Function 1";
    }
    public : void Fun2()      //Random Function 2
    {
        cout<<"\n Function 2";
    }
    public : Program()       //contructor
    {
        a = 5;
        cout<<"\n a = "<<a;
    }
    public : ~Program()         //destructor   (No need to call it by own, it will print automatically.)
    {
        cout<<"\n Destructor called";
    }       
};
int main()
{
    Program obj;          //in all the program constructor will be called and printed at first.
    obj.Fun2();          //Function decalred in any sequence in class doesn't matter but their calling matter, they will print acc to that
    obj.Fun1();
}
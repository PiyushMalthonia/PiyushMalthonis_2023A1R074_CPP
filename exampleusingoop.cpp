#include<iostream> //header file
using namespace std;  //OOP Basic
class Program  //class name  (Class is basically a structure in which function can be declared, whereas strcut is fpr Datatype)
{
public : void Message1() //public,private,protected-> Access Specifier
{
    cout<<"Hi";
}
public : void Message2() //public,private,protected-> Access Specifier
{
    cout<<"Hi";
}
};
int main()
{
    Program obj;  //class name and on=bject name(random)
    obj.Message1();  // using object name and function means OOP programming
    obj.Message2();
    return 0;
}
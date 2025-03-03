//Program to create a class with name Student_Data with function name'
//welcome_Message(), this function on execution will display message Welcome to MIET Jammu
#include<iostream> //header file
using namespace std;  //OOP Basic
class Student_Data  //class name  (Class is basically a structure in which function can be declared, whereas strcut is fpr Datatype)
{
public : void welcome_Message(char college) //public,private,protected-> Access Specifier
{
    cout<<"Welcome To MIET Jammu";
}

};
int main()
{
    char col;
    Student_Data obj;  //class name and on=bject name(random)
    obj.welcome_Message(col);  // using object name and function means OOP programming
    return 0;
}
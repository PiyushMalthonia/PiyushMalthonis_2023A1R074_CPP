/*Program to create a class with name Student_Data with function name'
welcome_Message(), this function on execution will display message Welcome to MIET Jammu
Now we will add 1 more function with name validate_region(), this function will accept stuent name and
regestration number from stuent and validate it.
(valid Reg.no are from 61 to 120)*/

#include<iostream> //header file
using namespace std;  //OOP Basic
class Student_Data  //class name  (Class is basically a structure in which function can be declared, whereas strcut is fpr Datatype)
{
public : void welcome_Message() //public,private,protected-> Access Specifier
{
    cout<<"Welcome To MIET Jammu "<<endl;
} 
private : string Name;
int RegNo;
public : string validate_RegNo()
{
    cout<<"Enter your Name "<<endl;
    cin>>Name;
    cout<<"Enter your Registration Number : "<<endl;
    cin>>RegNo;
    if(RegNo>=61 && RegNo<=120)
    {
        return "True";
    }
    else
    {
        return"False";
    }
    //OR
    //cout<<"Enter your Name "<<endlendl<<cin>>Name;
}
};
int main()
{
    Student_Data obj;  //class name and on=bject name(random)
    obj.welcome_Message();  // using object name and function means OOP programming
    string res;
    res = obj.validate_RegNo();
    if(res=="True")
    {
        cout<<"\nLogin Successful ";
    }
    else
    {
        cout<<"\nLogin Unsuccessful ";
    }
    return 0;
}
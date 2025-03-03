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
    cout<<"Welcome To MIET Jammu "<<endl<<"Enter Your Registration Number : ";
} 
int valid_Reg_no(int n)
{
    if(n>60 && n<121)
    {
        cout<<"Registration Number is valid "<<endl;
    }
    else
    {
        cout<<"Registration Number is Invalid "<<endl;
    }
}
};
int main()
{
    int number;
    Student_Data obj;  //class name and on=bject name(random)
    obj.welcome_Message();  // using object name and function means OOP programming
    cin>>number;
    obj.valid_Reg_no(number);
    return 0;
}
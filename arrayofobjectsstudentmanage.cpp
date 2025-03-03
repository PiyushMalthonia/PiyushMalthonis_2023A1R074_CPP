/*Write a Program, create a class with name Student_Management_System
Store Student Data from RollNo 1 to 10
Data includes(Name, RollNo, Percentage)
Display all data in reverse order using array of object*/
#include<iostream>
using namespace std;
class Student_Management_System
{
    private : int RollNo; string Name; float Percentage;
    public : Student_Management_System(int r,string n, float p)
    {
        RollNo = r;
        Name = n;
        Percentage = p;
    }
    public : void Display()
    {
        cout<<"\nRollNo = "<<RollNo<<"\t"<<"Name = "<<Name<<"\t"<<"Percentage = "<<Percentage;
    }
};
int main()
{
    Student_Management_System obj[10] = {{10,"P",90},{11,"R",91},{12,"Q",92},{13,"S",95},{17,"B",97},{19,"L",81},{21,"J",89},
    {22,"N",88},{25,"A",86},{27,"H",80}};
    int i;
    for(i=9;i>=0;i--)
    {
        obj[i].Display();   //Calling of Display Function woith array of objects
    }
}
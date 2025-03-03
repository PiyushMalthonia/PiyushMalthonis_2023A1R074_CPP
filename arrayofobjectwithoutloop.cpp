/*Program to demonstrate working of array of objects(Method1)*/
/*Best suited in the case of munimum number of on=bjects or values, but if there are 10 or 20 things same type then it is
not preferred as this is a disadvantage*/
#include<iostream>
using namespace std;
class Program  //Class Declaration
{
    private : int Regno; float Marks;  //Private member of class
    public : Program(int R , float M)  //Parameterized Constructor of class
    {
      Regno = R;
      Marks = M;
    }
    public : void Display()   //function of Class 
    {
        cout<<"\n RegNumber = "<<Regno<<"\t"<<"Marks = "<<Marks;
    }
};
int main()
{
    Program obj[3] = {{101,450},{102,430},{103,440}};  //Array of objects with manual initilization
        obj[2].Display();   //Calling of Display Function woith array of objects
}
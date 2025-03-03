/*Program in CPP to create a class with name Area, default constructor of class which takes radius from the user,
this function will calculate Area of Circle(3.14*Radius*Radius), finally create destructor to free
memory of used variables*/
#include<iostream>
using namespace std;
class Area
{
    private : float radius ,area;
    public : Area(float radius)
    {
      area = 3.14*radius*radius;
      cout<<area;
    }
    public : ~Area()
    {
        cout<<"\nMemory Freed";
    }
};
int main()
{
    int rad;
    cout<<"Enter the number : "; 
    cin>>rad;
    Area obj(rad);
}
/*Program to demonstrate the concept of Function Overloading.
Create a class with name Shapes, create a function with name Area(),
with Area function calculate Area of circle, Area of rectangle, Area of triangle, using function overloading.
*/

#include<iostream>
using namespace std;
class Shapes
{
    private : float res=0; float l1; float b;
    public : void Area(float radius)     //function 1
    {
        res = 3.14 * radius * radius;
        cout<<"\n Area of Circle is : "<<res;
    }
    public : void Area(float l, float h)   //function 2
    {
        res = 0.5 * l * h;
        cout<<"\n Area of Triangle is : "<<res;
    }
    public : void Area()     //function 3
    {
        l1=6, b=9;
        res = l1 * b;
        cout<<"\n Area of Rectangle is : "<<res;
    }
};
int main()
{
    Shapes obj;
    obj.Area();
    obj.Area(6);
    obj.Area(4,5);
    return 0;
}

/*Program to demonstrate Array Declaration and Array Initilization using Direct Method*/

#include<iostream>
using namespace std;
class ArrayProgram
{
    private : int a[5];  //Array Declaration
    public : void Display()
    {
      a[0]=10;  //Initilization of array elements at index 0 using Direct Method
      a[1]=5;   //Initilization of array elements at index 1 using Direct Method
      cout<<"Array elements at index 0 is "<<a[0];
      cout<<"\nArray elements at index 1 is "<<a[1]<<endl;
      cin>>a[2];
      cout<<"Array elements at index 2 is "<<a[2];  //we will get a garbage value as a[2] is not initilized
    }
};
int main()
{
    ArrayProgram obj;
    obj.Display();
    return 0;
}
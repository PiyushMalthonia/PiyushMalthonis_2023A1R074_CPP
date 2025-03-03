/*Write a program to store 10 roll no. of weak learners of yuour class
and 10 roll no. of advance learners of your class, according to you.
Store roll no. in two different array and display the record*/
#include<iostream>
using namespace std;
class RollNo
{
    private : int a[10] = {45,34,8,22,13,16,5,106,7,9};
    int i,j,b[10] = {1,2,4,10,11,14,19,23,28,30};
    public : Display()
    {
       cout<<"Weak Learners \n";
       for(i=0;i<10;i++)
       {
        cout<<" "<<a[i];
       }
       cout<<"\nAdvance Learners \n";
       for(j=0;j<10;j++)
       {
        cout<<" "<<b[j];
       }
    }
};
int main()
{
    RollNo obj;
    obj.Display();
}
#include<iostream>
using namespace std;
class Payapp
{
    
    private : float amount,dis;
    public : void Accept()
    {
         cout<<"Enter the amount : ";
         cin>>amount;
    }
    public : void Validate()
    {
        if(amount>0)
        {
            cout<<"Valid Amount "<<endl;
        }
        else
        {
            cout<<"Enter a valid Amount ";
        }
    }
    public :void Discount()
    {
        dis = amount/100*10;
    }
    public : void Display()
    {
        cout<<"The Final Amount : "<<amount-dis;
        
    } 
};
int main()
{
    Payapp obj;
    int dis;
    obj.Accept();
    obj.Validate();
    obj.Discount();
    obj.Display();
    return 0;
}
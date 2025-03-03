#include<iostream>
using namespace std;
class collage
{
    private:int n,i,fact=1;
    public:void factorial()
    {
        cout<<"Enter the number for which you want to find the factorial : ";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"Factorial of number "<<n <<" is "<<fact;
    }
};
int main()
{
    collage obj;
    obj.factorial();
    return 0;
}
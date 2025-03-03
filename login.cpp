/*Write a program to create two c;asses , 
1. Class Login_Details , with functions as:-
a. Validate() accept Login Password(default 1234) from user
b. Display() display message on screen "Welcome to MyApp"
2. Class User_Profile
with functions as:
a. Accept() accept username, email id, and name from user 
b. Display() will display information entered by the user on screen*/

#include<iostream>
using namespace std;
class Login_Details
{
    private : int password;
    public : void display()
    {
        cout<<endl<<"Welcome to MyApp "<<endl;
    }
    public : int Validate()
    {
        cout<<"Enter you Loggin Password : ";
        cin>>password;
    if(password==1234)
    {
        display();
        return 1;
    }
    else
    {
        cout<<"Wrong Password ";
        return 0;
    }
}
};
class User_Profile
{
    private : string name , email , username;
    public : void Accept()
    {
    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<"Enter Your Username : ";
    cin>>username;
    cout<<"Enter Your Email : ";
    cin>>email;
    Dis();
    }
    public : void Dis()
    {
        cout<<endl<<"Name : "<<name<<endl;
        cout<<"Username : "<<username<<endl;
        cout<<"Email : "<<email<<endl;
    }
    public : void update()
    {
        string a,b,c;
        cout<<"Update Your Name : ";
        cin>>a;
        name=a;
        cout<<"Update Your UserName : ";
        cin>>c;
        username=c;
        cout<<"Update Your Email : ";
        cin>>b;
        email=b;
        cout<<"Updated Details :-"<<endl;
        Dis();
    }
};
int main()
{
    int a;
    Login_Details obj1;
    User_Profile obj2;
    a=obj1.Validate();
    if(a==1)
    {
        obj2.Accept();
        cout<<endl<<"Do you want to Update Information ?"<<endl;
        cout<<"Choose Your Option "<<endl<<"1. Yes"<<endl<<"2. No"<<endl;
        int opt;
        cin>>opt;
        if(opt==1)
        {
            obj2.update();
        }
        else
        {
            cout<<"Exit";
        }
    }
    return 0;
}
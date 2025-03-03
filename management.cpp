// #include<iostream>
// using namespace std;
// class Welcome
// {
//     public : void Display1()
//     {
//       cout<<"Welcome To MIET\n";
//     }
// };
// class Course
// {
//     private : string courses;
//     public : Course()
//     {
//         cout<<"Select the Courses\n1. Math\n2. C Programing\n3. Physics\n4. Chemistry\n5. English\n";
//         cin>>courses;
//     }
//     // string getcourse()
//     // {
//     //     return courses;
//     // }
// };
// class Details
// {
//     private : int RegNo,RollNo; string Name, Email; Course selectedcourses;
//     public : Details()
//     {
//         cout<<"Enter your Name : ";
//         cin>>Name;
//         cout<<"Enter Registration Number : ";
//         cin>>RegNo;
//         cout<<"Enter you RollNo : ";
//         cin>>RollNo;
//         cout<<"Enter you Email : ";
//         cin>>Email;
//         Course();
//         cout<<"\nStudent Details :\n";
//         cout<<"\nName : "<<Name;
//         cout<<"\nRegistration Number : "<<RegNo;
//         cout<<"\nRoll Number : "<<RollNo;
//         cout<<"\nEmail : "<<Email;
//         // cout<<"\nCourse Selected : "<<selectedcourses.getcourse();
//     }
// };
// class DisplayDetails
// {
// public : void Display()
// {
//    Details();
// }
// };
// class updatedetails
// {
//     private : int a,b,RegNo,RollNo; string Name, Email;
//     public : void update()
// {
//   cout<<"\nSelected 1 if you want to update details ";
//   cin>>a;
//   if(a==1)
// {
//    cout<<"\nEnter new Registration Number : ";
//    cin>>RegNo;
//    b=RegNo;
// }
// }
// };
// int main()
// {
//    Welcome obj1;
//    DisplayDetails obj2;
//    updatedetails obj3;
//    obj1.Display1();
//    obj2.Display();
//    obj3.update();
// }

#include <iostream>
using namespace std;

class Welcome {
public:
    void Display1() {
        cout << "Welcome To MIET\n";
    }
};

class Course {
private:
    string course;
public:
    void selectCourse() {
        int choice;
        cout << "Select the Courses\n1. Math\n2. C Programming\n3. Physics\n4. Chemistry\n5. English\n";
        cin >> choice;
        switch (choice) {
            case 1: course = "Math"; break;
            case 2: course = "C Programming"; break;
            case 3: course = "Physics"; break;
            case 4: course = "Chemistry"; break;
            case 5: course = "English"; break;
            default: course = "Invalid Selection"; break;
        }
    }

    string getCourse() {
        return course;
    }
};

class Details {
private:
    int RegNo, RollNo;
    string Name, Email;
    Course selectedCourse;
public:
    Details() {
        cout << "Enter your Name: ";
        cin >> Name;
        cout << "Enter Registration Number: ";
        cin >> RegNo;
        cout << "Enter your Roll No: ";
        cin >> RollNo;
        cout << "Enter your Email: ";
        cin >> Email;

        // Now ask for course selection
        selectedCourse.selectCourse();

        displayDetails();
    }

    void updateDetails() {
        int choice;
        cout << "\nSelect 1 if you want to update details: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter new Registration Number: ";
            cin >> RegNo;
            cout << "Updated Registration Number: " << RegNo << endl;
            displayDetails();  // Show updated details
        }
    }

    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << Name << endl;
        cout << "Registration Number: " << RegNo << endl;
        cout << "Roll Number: " << RollNo << endl;
        cout << "Email: " << Email << endl;
        cout << "Course Selected: " << selectedCourse.getCourse() << endl;
    }
};

int main() {
    Welcome obj1;
    obj1.Display1(); // Displays "Welcome To MIET"

    Details student; // Create only one student object
    student.updateDetails(); // Modify existing student details

    return 0;
}

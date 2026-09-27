#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int rollno;
    float marks;

public:
    void getdata()
    {
       cout << "Enter a name:";
        cin >> name;
        
        cout << "Enter Roll Number: ";
        cin >> rollno;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    { 
        cout << "\nname: " << name;
        cout << "\nRoll Number: " << rollno;
        cout << "\nMarks: " << marks;

        if (marks >= 40)
            cout << "\nResult: Pass";
        else
            cout << "\nResult: Fail";
    }
};

int main()
{
    Student s;

    s.getdata();
    s.display();

    return 0;
}

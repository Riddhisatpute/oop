#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
int EmployeeID;
string name;
float basicSalary;
float bonus;
float totalSalary;

public:

//default constructor
Employee() {
EmployeeID = 0;
name = "Unknown";
basicSalary = 0;
bonus = 0;
totalSalary = 0;
}

//Parameterized constuctor
Employee(int id, string n,float salary, float b) {
EmployeeID = id;
name = n;
basicSalary = salary;
bonus = b;
calculatetotalSalary();
}

void calculatetotalSalary() {
totalSalary = basicSalary + bonus;
}

void display() {
cout<<"EmployeeID:" << EmployeeID<<endl;
cout<<"Name: " << name<< endl;
cout<<"basicSalary:"<< basicSalary <<endl;
cout<<"bonus:"<< bonus<<endl;
cout<<"totalSalary:"<< totalSalary<<endl;
}
};

int main() {

//using default constructor
Employee Emp1;

cout<<"Default constructor - Employee 1:" <<endl;
Emp1.display();

cout<<"\n----------------------"<<endl;

//using parameterized constructor
Employee Emp2(101,"samiksha",70000, 10000);

cout<<"parameterized constructor- Employee 2:"<<endl;
Emp2.display();

cout<<"\n----------------------"<<endl;

return 0;
}

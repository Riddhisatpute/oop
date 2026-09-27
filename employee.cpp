#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;

public:
    // Default constructor
    Employee() : employeeID(0), name("Unknown"), basicSalary(0), bonus(0), totalSalary(0) {}

    // Parameterized constructor
    Employee(int id, const string& n, float salary, float b)
        : employeeID(id), name(n), basicSalary(salary), bonus(b) {
        calculateTotalSalary();
    }

    void calculateTotalSalary() {
        totalSalary = basicSalary + bonus;
    }

    void display() const {
        cout << "EmployeeID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "basicSalary: " << basicSalary << endl;
        cout << "bonus: " << bonus << endl;
        cout << "totalSalary: " << totalSalary << endl;
    }
};

int main() {
    // Using default constructor
    Employee emp1;

    cout << "Default constructor - Employee 1:" << endl;
    emp1.display();

    cout << "\n----------------------" << endl;

    // Using parameterized constructor
    Employee emp2(101, "samiksha", 70000, 10000);

    cout << "Parameterized constructor - Employee 2:" << endl;
    emp2.display();

    cout << "\n----------------------" << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int id;
    double salary;
public:
    void input() {
        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter employee ID: ";
        cin >> id;

        cout << "Enter employee salary: ";
        cin >> salary;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << " IQD" << endl;
    }

    bool isHighSalary() { return salary >= 1000000;   }
    double getSalary()  {return salary;  }
};
int main() {
    // change for 5 emp.
    Employee employees[2];
    // Enter information for five employees
    cout << "=== Enter Employee Information ===" << endl;

    for (int i = 0; i < 2; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        employees[i].input();
    }
    // Display all employees and salary status
    cout << "\n=== Employee Information ===" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        employees[i].display();

        if (employees[i].isHighSalary()) {
            cout << "High Salary: Yes" << endl;
        } else {
            cout << "High Salary: No" << endl;
        }
    }
    // Find the employee with the highest salary
    int highestIndex = 0;

    for (int i = 1; i < 2; i++) {
        if (employees[i].getSalary() >
            employees[highestIndex].getSalary()) {
            highestIndex = i;
        }
    }
    cout << "\n=== Employee with Highest Salary ===" << endl;
    employees[highestIndex].display();
    return 0;
}
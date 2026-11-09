// Example: Student Grade
// First, show students the procedural version.
// 1. Structured / Procedural Programming
/*#include <iostream>
using namespace std;
void printStudent(string name, int age, double grade)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
}
bool isPassed(double grade)
{   return grade >= 50;}
int main()
{   string name = "Ali";
    int age = 20;
    double grade = 75;
    printStudent(name, age, grade);
    if (isPassed(grade))
        cout << "Result: Passed" << endl;
    else
        cout << "Result: Failed" << endl;
    return 0;
}
*/
// Here, students have:
// Data: name, age, grade
// Functions: printStudent(), isPassed()
// But the data and functions are separate.

// 2. Basic OOP Version
// "What if we put the student's data and the functions that 
// work on that data together?"

#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    double grade;
    void printStudent()
    {   cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;      }
    bool isPassed()
    {       return grade >= 50;   }
};
int main()
{   Student s1;
    s1.name = "Ali";
    s1.age = 20;
    s1.grade = 75;
    s1.printStudent();
    if (s1.isPassed())
        cout << "Result: Passed" << endl;
    else
        cout << "Result: Failed" << endl;
    Student s2;
    s2.name = "Alitt";
    s2.age = 23;
    s2.grade = 85;
    s2.printStudent();
    if (s2.isPassed())
        cout << "Result: Passed" << endl;
    else
        cout << "Result: Failed" << endl;
    return 0;
}


// To do Then create multiple objects
    //          Student Class
    //       ┌─────────────────┐
    //       │ name            │
    //       │ age             │
    //       │ grade           │
    //       │                 │
    //       │ printStudent()  │
    //       │ isPassed()      │
    //       └─────────────────┘
    //               │
    //       ┌───────┴───────┐
    //       ↓               ↓
    //    Object s1       Object s2
    //     Ali             Sara
    //     20              21
    //     75              45
// Example: Student Grade
// First, show students the procedural version.
// 1. Structured / Procedural Programming
#include <iostream>
using namespace std;
void printStudents(string names[], int ages[], double grades[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << names[i] << endl;
        cout << "Age: " << ages[i] << endl;
        cout << "Grade: " << grades[i] << endl;
        cout << "----------------" << endl;
    }
}
int main()
{
    const int SIZE = 3;
    string names[SIZE] = {"Ali", "Sara", "Omar"};
    int ages[SIZE] = {20, 21, 19};
    double grades[SIZE] = {75, 45, 82};
    printStudents(names, ages, grades, SIZE);
    return 0;
}

// Here, students have:
// Data: name, age, grade
// Functions: printStudent(), 
// But the data and functions are separate.
// To Do add isPassed() function 

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
        cout << "Grade: " << grade << endl;
    }
    bool isPassed()
    {     return grade >= 50; }
};

int main()
{   const int SIZE = 3;
    Student students[SIZE];

    students[0].name = "Ali";
    students[0].age = 20;
    students[0].grade = 75;

    students[1].name = "Sara";
    students[1].age = 21;
    students[1].grade = 45;

    students[2].name = "Omar";
    students[2].age = 19;
    students[2].grade = 82;
    for (int i = 0; i < SIZE; i++)
    {   students[i].printStudent();
        if (students[i].isPassed())
            cout << "Passed" << endl;
        else
            cout << "Failed" << endl;
        cout << "----------------" << endl;
    }
    return 0;
}


// Each element is a complete Student object:
        // students[0]
        // ┌─────────────────┐
        // │ - name = "Ali"   │
        // │ - age = 20      │
        // │ - grade = 75    │
        // │-----------------│
        // │ + printStudent()│
        // │ + isPassed()    │
        // └─────────────────┘

        // students[1]
        // ┌─────────────────┐
        // │ - name = "Sara" │
        // │ - age = 21      │
        // │ - grade = 45    │
        // │  ---------------│
        // │ + printStudent()│
        // │ + isPassed()    │
        // └─────────────────┘

// -------------------------------------------------
        // STRUCTURED PROGRAMMING

        // names[] ──────┐
        // ages[] ───────┼──→ functions
        // grades[] ─────┘

        //             ↓ OOP
        // OOP

        // Student
        // ├── name
        // ├── age
        // ├── grade
        // ├── printStudent()
        // └── isPassed()

        //         ↓

        // Student students[3]
        //         ↓
        // Array of Objects
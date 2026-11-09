// Member function definitions
#include <iostream>
#include "Student.h"
using namespace std;
// Constructor definition
Student::Student(int i, int g)
{
    id    = i;
    grade = g;
}
// Display function definition
void Student::display()
{
    cout << "Student ID: " << id << endl;
    cout << "Grade: " << grade << endl;
}
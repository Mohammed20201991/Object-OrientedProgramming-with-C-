// A default constructor is a constructor that can be called without providing any arguments.
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int age;

public:
    // Default constructor
    Student()
    {
        name = "Unknown";
        age  = 18;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1; // Default constructor runs automatically
    s1.display();
    return 0;
}
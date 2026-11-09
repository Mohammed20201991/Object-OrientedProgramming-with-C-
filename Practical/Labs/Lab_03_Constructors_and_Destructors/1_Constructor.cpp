/* 
A constructor is a special member function that is called automatically when an object is created. 
It is commonly used to initialize the object's data members.
*/ 
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int age;
public:
    // Constructor
    Student(string n, int a)
    {   name = n;
        age  = a;
    }
    void display()
    {
        cout << name << ", " << age << endl;
    }
};
int main()
{
    Student s1("Omar", 20); // Constructor called automatically
    s1.display();
    return 0;
}
/*
Important rules
- The constructor has the same name as the class.
- It has no return type, not even void.
- It is called automatically when an object is created.
- It can receive parameters.
- A class can have multiple constructors; this is called constructor overloading.
*/

// Defining Functions Outside the Class
// Declare member functions inside the class and implement them outside using the scope resolution operator ::.
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;

public:
    void setName(string n); // Declaration
    void display();         // Declaration
};
// Definition outside the class
void Student::setName(string n)
{  name = n;}

void Student::display()
{    cout << "Name: " << name << endl;  }

int main()
{
    Student s1;
    s1.setName("Sara");
    s1.display();
    return 0;
}
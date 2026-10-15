#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name; // Private data
    int age;
public:
    void setName(string n)
    {     name = n;  }

    void setAge(int a)
    {
        if (a > 0)
            age = a;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;
    s1.setName("Ahmed");
    s1.setAge(21);
    s1.display();

    return 0;
}

// Important: s1.name = "Ahmed"; is not allowed because name is private.
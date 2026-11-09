// The this pointer refers to the current object. It is useful when parameter names match data member names.
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int age;

public:
    void setData(string name, int age)
    {
        this->name = name; // Current object's name
        this->age = age;   // Current object's age
    }

    void display()
    {    cout << name << ", " << age << endl;    }
};

int main()
{
    Student s1;
    s1.setData("Omar", 20);
    s1.display();
    return 0;
}

/*
6. Comparing Access Modifiers
Modifier	Inside class	Derived class	 Outside class
public	        Yes	            Yes          	Yes
private	        Yes	       No direct access	     No
protected	    Yes	            Yes	             No
Note: The table describes ordinary member access, with derived-class access subject to the inheritance mode and other C++ rules.
*/
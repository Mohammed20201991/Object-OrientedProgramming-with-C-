/*
Aggregation is a relationship between two classes where one class uses an object of another class, but both objects can exist independently.
A Department has Teachers.
-
*/
#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    string name;

public:
    Teacher(string name) {
        this->name = name;
    }

    void display() {
        cout << "Teacher: " << name << endl;
    }
};


class Department {
private:
    string departmentName;
    Teacher* teacher;  // Aggregation

public:
    Department(string name, Teacher* teacher) {
        departmentName = name;
        this->teacher = teacher;
    }

    void display() {
        cout << "Department: " << departmentName << endl;
        teacher->display();
    }
};


int main() {

    // Teacher exists independently
    Teacher t1("Ahmed");

    // Department uses the existing Teacher
    Department d1("Artificial Intelligence", &t1);

    d1.display();

    return 0;
}

/*
Aggregation vs. Composition
---------------------------------------------------------------------
|    Composition	              |        Aggregation              |
---------------------------------------------------------------------
|Strong Has-A relationship   	  |   Weak Has-A relationship       |
|Owns the contained object	      |   Uses an external object       |
|Object lifetime is tied to owner |	 Object lifetime is independent |
|Engine engine;	                  |   Teacher* teacher;             |
---------------------------------------------------------------------
*/
#include <iostream> 
int main() { 
    int x = 10; 
    int& ref = x; 
    ref = 50; 
    std::cout << x << " " << ref << '\n'; 
    int y = 80; 
    ref = y; 
    std::cout << x << " " << y << '\n'; 
    y = 90; 
    std::cout << x << " " << ref << " " << y << '\n'; 
} 
// int& unbound; // Error: a reference needs initialization.
/*
#include <iostream>
using namespace std;

class Student {
    int& grade;  // Reference to an external variable

public:
    // Initialize the reference with the given variable
    Student(int& g) : grade(g) {}

    // Add marks to the original variable
    void addMarks(int marks) {
        grade += marks;
    }

    // Display the grade
    void display() const {
        cout << "Grade: " << grade << '\n';
    }
};

int main() {
    int studentGrade = 70;  // Original grade

    Student s1(studentGrade);  // Link grade to studentGrade

    s1.display();       // Display 70

    s1.addMarks(10);    // Increase grade by 10

    s1.display();       // Display 80

    // The original variable also changes
    cout << "Original Grade: " << studentGrade << '\n';

    return 0;
}
    // Important: A reference must be initialized when the object is created 
    // and cannot later be redirected to another variable.
*/
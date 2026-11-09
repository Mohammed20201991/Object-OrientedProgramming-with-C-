/* 
University Student Grade 
Scenario: A student's grade must remain between 0 and 100.
- Private member: grade
- Class invariant: 0 <= grade <= 100
- Methods: setGrade(), display()
*/
#include <iostream>
using namespace std;
class Student {
private:
    int grade;
public:
    Student() : grade(0) {}
    void setGrade(int g) {
        if (g >= 0 && g <= 100)
            grade = g;
        else
            cout << "Invalid grade!" << endl;
    }

    void display() const {
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s1;

    s1.setGrade(85);
    s1.display();

    s1.setGrade(150);  // Invalid
    s1.display();
    return 0;
}

// Two classes in the same namespace
#include <iostream>
using namespace std;
namespace University {
    class Student {
    public:
        void display() {
            cout << "University Student" << endl;
        }
    };
    class Teacher {
    public:
        void display() {
            cout << "University Teacher" << endl;
        }
    };

}
int main() {

    University::Student s;
    University::Teacher t;

    s.display();
    t.display();

    return 0;
}
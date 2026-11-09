#include <iostream>
using namespace std;

namespace University {
    class Student {
    public:
        void display() {
            cout << "University Student" << endl;
        }
    };
}

int main() {
    University::Student s;
    s.display();

    return 0;
}
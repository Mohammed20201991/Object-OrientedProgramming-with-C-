// at() performs bounds checking and throws an exception for an invalid index
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> students = {"Ali", "Sara", "Omar"};
    cout << "First student: " << students.at(0) << endl;
    students[1] = "Mona";
    cout << "Updated list:" << endl;
    for (const string& student : students) {
        cout << student << endl;
    }
    return 0;
}


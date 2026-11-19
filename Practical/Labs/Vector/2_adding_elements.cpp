#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks;

    marks.push_back(75);
    marks.push_back(88);
    marks.push_back(92);

    for (int mark : marks) {
        cout << mark << endl;
    }
    return 0;
}
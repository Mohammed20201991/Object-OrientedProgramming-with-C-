#include <iostream>
using namespace std;

int x = 100;  // Global variable

namespace First {
    int x = 200;
}

int main() {

    int x = 300;  // Local variable

    cout << x << endl;
    cout << First::x << endl;
    cout << ::x << endl;

    return 0;
}
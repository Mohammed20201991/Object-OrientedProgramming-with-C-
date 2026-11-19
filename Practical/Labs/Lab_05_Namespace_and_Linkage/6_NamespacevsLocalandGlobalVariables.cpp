#include <iostream>
using namespace std;
int x = 100;  // Global variable
namespace First {
    int x = 200;
}

int main() {

    int x = 300;  // Local variable

    cout << x << endl;
    // 300
    cout << First::x << endl;
    // 200
    cout << ::x << endl;
    // 100
    return 0;
}
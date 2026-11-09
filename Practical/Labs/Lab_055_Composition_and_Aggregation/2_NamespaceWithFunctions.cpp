#include <iostream>
using namespace std;

namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
}

int main() {
    cout << Math::add(5, 3) << endl;
    cout << Math::multiply(5, 3) << endl;

    return 0;
}
// Instead of writing the namespace name every time, we can use using namespace.
#include <iostream>
using namespace std;

namespace first {
    int x = 100;
}

int main() {
    using namespace first;

    cout << x << endl;

    return 0;
}
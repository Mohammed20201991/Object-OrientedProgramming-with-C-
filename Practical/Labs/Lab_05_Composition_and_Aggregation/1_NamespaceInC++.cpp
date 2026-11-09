/* 
Namespace in C++
A namespace in C++ is used to organize code and avoid naming conflicts when two or more variables, functions,
or classes have the same name.
We use the namespace keyword to define a namespace.
*/
#include <iostream>
using namespace std;
namespace first {
    int x = 10;
}
namespace second {
    int x = 20;
}
int main() {
    int x =5;
    cout << x << endl;
    cout << first::x << endl;
    cout << second::x << endl;

    return 0;
}

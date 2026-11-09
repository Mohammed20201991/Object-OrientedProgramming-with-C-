#include <iostream>
using namespace std;
class Counter
{
private:
    int value;
public:
    Counter() : value(0) {} // Initialize value to 0

    int getValue()
    {     return value;    }
};
int main()
{
Counter c;
cout << c.getValue();
    return 0;
}
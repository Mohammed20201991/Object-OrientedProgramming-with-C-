// Create two objects and observe the order of constructor and destructor calls.
#include <iostream>
using namespace std;
class Demo
{
private:
    int id;
public:
    Demo(int n)
    {
        id = n;
        cout << "Constructor: " << id << endl;
    }
    ~Demo()
    {
        cout << "Destructor: " << id << endl;
    }
};
int main()
{
    Demo d1(1);
    {
        Demo d2(2);
        Demo d3(3);
        cout << "Inside block" << endl;
    }
    cout << "Outside block" << endl;
    return 0;
}

/*
Rule: Constructors run in construction order. Destructors run in reverse construction order as objects' lifetimes end. 
The inner objects are destroyed when the block ends.
*/
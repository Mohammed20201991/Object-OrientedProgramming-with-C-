/* A destructor is called automatically when an object's lifetime ends. It has the same name as its class, 
preceded by ~, and has no return type or parameters.
*/
#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {   cout << "Constructor called" << endl;  }

    ~Test()
    {   cout << "Destructor called" << endl;   }
};

int main()
{
    Test t1;
    cout << "Object is being used" << endl;
    return 0;
}
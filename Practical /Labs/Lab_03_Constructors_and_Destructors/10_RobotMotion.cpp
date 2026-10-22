// Observe constructor and destructor order in a robot mission.
#include <iostream>
using namespace std;
class Robot
{
private:
    int id;
public:
    Robot(int n)
    {
        id = n;
        cout << "Robot " << id << " activated." << endl;
    }
    ~Robot()
    {
        cout << "Robot " << id << " deactivated." << endl;
    }
};
int main()
{
    Robot r1(1);
    {
        Robot r2(2);
        Robot r3(3);
        cout << "Mission started." << endl;
    }
    cout << "Inner mission ended." << endl;
    Robot r4(4);
    cout << "Main mission completed." << endl;
    return 0;
}

/*
Rules:
1. Constructors run when objects are created.
2. Destructors run when objects' lifetimes end.
3. Objects in the inner block are destroyed when the block ends.
4. Destructors run in reverse order of construction
   for these objects.
*/
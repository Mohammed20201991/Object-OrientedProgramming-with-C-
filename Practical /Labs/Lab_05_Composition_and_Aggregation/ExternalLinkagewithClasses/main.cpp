#include <iostream>
#include "Student.h"
using namespace std;
int main()
{
    Student s1(101, 85);
    Student s2(102, 90);
    s1.display();
    cout << endl;

    s2.display();
    return 0;
}
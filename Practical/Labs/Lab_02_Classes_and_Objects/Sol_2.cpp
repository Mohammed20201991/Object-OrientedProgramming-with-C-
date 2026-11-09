#include <iostream>
using namespace std;
double mySqrt(double n)
{
    double x = n;

    for (int i = 0; i < 20; i++)
        x = (x + n / x) / 2.0;
    return x;
}
class Point
{
public:
    double x, y;
    double distanceTo(Point p)
    {
        double dx = p.x - x; // Difference in x
        double dy = p.y - y; // Difference in y
        return mySqrt(dx * dx + dy * dy);
    }
};

int main()
{
    Point p1, p2;
    p1.x = 3;
    p1.y = 4;

    p2.x = 6;
    p2.y = 8;
    cout << "Distance = " << p1.distanceTo(p2) << endl;
    return 0;
}

/*
Allowing the user to enter the coordinates of both points
#include <iostream>
using namespace std;
double mySqrt(double n)
{
    double x = n;
    for (int i = 0; i < 20; i++)
        x = (x + n / x) / 2.0;
    return x;
}

class Point
{
public:
    double x, y;
    void read()
    {
        cout << "Enter x and y: ";
        cin >> x >> y;
    }

    double distanceTo(Point p)
    {
        double dx = p.x - x; // Difference in x
        double dy = p.y - y; // Difference in y
        return mySqrt(dx * dx + dy * dy);
    }
};

int main()
{
    Point p1, p2;
    cout << "Enter the first point:\n";
    p1.read();

    cout << "Enter the second point:\n";
    p2.read();

    cout << "Distance = " << p1.distanceTo(p2) << endl;
    return 0;
}
*/
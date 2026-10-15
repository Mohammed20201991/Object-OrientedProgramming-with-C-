// 2D Points using Classes and Objects
#include <iostream>
using namespace std;
class Point {
public:
    int x, y;
    void setPoint(int a, int b) {
        x = a;
        y = b;    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
    double distanceFromOrigin() {
        return mySqrt(x * x + y * y);
    }
};
// Calculate square root without <cmath>
double mySqrt(double n) {
    if (n <= 0)
        return 0;
    double x = n;
    for (int i = 0; i < 100; i++)
        x = (x + n / x) / 2;
    return x;
}
int main() {
    Point p1, p2;

    p1.setPoint(3, 4);
    p2.setPoint(6, 8);

    cout << "Point 1: ";
    p1.display();

    cout << "Point 2: ";
    p2.display();

    cout << "Distance of Point 1 from origin = "
         << p1.distanceFromOrigin() << endl;
    return 0;
}

// Point 1: (3, 4)
// Point 2: (6, 8)
// Distance of Point 1 from origin = 5
// To do distance from Point 2
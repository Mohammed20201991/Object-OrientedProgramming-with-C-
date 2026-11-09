
#include <iostream>
using namespace std;

// Square root function outside the class
double mySqrt(double n) {
    if (n <= 0)
        return 0;

    double x = n;

    for (int i = 0; i < 100; i++)
        x = (x + n / x) / 2;
    return x;
}

class Triangle {
public:
    double a, b, c;

    double perimeter() {
        return a + b + c;
    }

    double area() {
        double s = perimeter() / 2;
        return mySqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    Triangle t1;
    t1.a = 4;
    t1.b = 5;
    t1.c = 6;
    cout << "Perimeter = " << t1.perimeter() << endl;
    cout << "Area = " << t1.area() << endl;

    return 0;
}

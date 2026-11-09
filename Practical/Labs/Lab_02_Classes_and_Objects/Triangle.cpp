
#include <iostream>
using namespace std;

class Triangle {
public:
    double base;
    double height;

    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    Triangle t1;
    t1.base = 4;
    t1.height = 3;

    Triangle t2;
    t2.base = 10;
    t2.height = 2;

    cout << "Triangle 1 Area = " << t1.area() << endl;
    cout << "Triangle 2 Area = " << t2.area() << endl;

    // Calculate the total area of both triangles
    double totalArea = t1.area() + t2.area();

    cout << "Total Area = " << totalArea << endl;

    return 0;
}

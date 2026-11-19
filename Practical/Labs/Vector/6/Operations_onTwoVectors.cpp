/*
2. Mathematical operations
A. Vector Addition (+)      ==> A+B =(2+4,3+5)
B. Vector Subtraction (-)   ==> A-B =(2-4,3-5)
C. Scalar Multiplication    ==> 3*A =(3*2, 3*3)
D. Dot Product              ==> 
Multiply corresponding components and add the results:
A dot B=(2*4)+(3*5)
E. Magnitude (Length)   |A|= Sqrt(X^2,Y2)
*/
#include <iostream>
#include <cmath>
using namespace std;
class Vector2D {
private:
    double x, y;

public:
    Vector2D(double x, double y) {
        this->x = x;
        this->y = y;
    }
    // Vector addition
    Vector2D add(Vector2D v) {
        return Vector2D(x + v.x, y + v.y);
    }
    // Vector subtraction
    Vector2D subtract(Vector2D v) {
        return Vector2D(x - v.x, y - v.y);
    }
    // Dot product
    double dot(Vector2D v) {
        return (x * v.x) + (y * v.y);
    }
    // Magnitude
    double magnitude() {
        return sqrt(x * x + y * y);
    }
    // Display vector
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Vector2D A(2, 3);
    Vector2D B(4, 5);

    cout << "Vector A: ";
    A.display();

    cout << "Vector B: ";
    B.display();

    cout << "\nAddition: ";
    A.add(B).display();

    cout << "Subtraction: ";
    A.subtract(B).display();

    cout << "Dot Product: " << A.dot(B) << endl;

    cout << "Magnitude of A: "
         << A.magnitude() << endl;

    cout << "Magnitude of B: "
         << B.magnitude() << endl;

    return 0;
}

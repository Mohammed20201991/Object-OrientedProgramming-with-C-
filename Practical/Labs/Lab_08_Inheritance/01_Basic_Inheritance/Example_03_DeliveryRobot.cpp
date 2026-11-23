#include <iostream>
using namespace std;

class Robot {
protected:
    int battery = 100;

public:
    void move() {
        battery -= 10;
        cout << "Robot is moving..." << endl;
    }
};

class DeliveryRobot : public Robot {
public:
    void deliverPackage() {
        cout << "Package delivered!" << endl;
        cout << "Remaining battery: " << battery << "%" << endl;
    }
};

int main() {
    DeliveryRobot robot;

    robot.move();
    robot.deliverPackage();

    return 0;
}

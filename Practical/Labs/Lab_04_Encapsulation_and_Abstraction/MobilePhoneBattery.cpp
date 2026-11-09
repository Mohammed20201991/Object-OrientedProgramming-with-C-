/* Scenario: A phone battery starts at 50%. The user can charge or use the battery, 
but cannot directly set its percentage to an invalid value such as 150%.
*/

#include <iostream>
using namespace std;

class Battery {
private:
    int percentage;  // Protected data

public:
    Battery() : percentage(50) {}

    void charge(int amount) {
        if (amount > 0) {
            percentage += amount;

            if (percentage > 100)
                percentage = 100;
        }
    }

    void use(int amount) {
        if (amount > 0 && amount <= percentage)
            percentage -= amount;
        else
            cout << "Invalid battery usage!\n";
    }

    void display() const {
        cout << "Battery: " << percentage << "%\n";
    }
};

int main() {
    Battery phone;

    phone.display();  // 50%

    phone.charge(30);
    phone.display();  // 80%

    phone.use(20);
    phone.display();  // 60%

    phone.charge(100);
    phone.display();  // 100%

    phone.use(150);   // Invalid operation
    phone.display();  // Still 100%

    return 0;
}
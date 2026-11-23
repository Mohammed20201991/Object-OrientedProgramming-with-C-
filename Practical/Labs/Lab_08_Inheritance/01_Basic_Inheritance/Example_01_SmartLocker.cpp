#include <iostream>
using namespace std;

class Locker {
public:
    void open() {
        cout << "Locker is open." << endl;
    }

    void close() {
        cout << "Locker is closed." << endl;
    }
};

class SmartLocker : public Locker {
public:
    void enterPIN() {
        cout << "PIN accepted!" << endl;
    }
};

int main() {
    SmartLocker locker;

    locker.enterPIN();
    locker.open();
    locker.close();

    return 0;
}

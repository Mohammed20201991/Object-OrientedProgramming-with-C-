#include <iostream>
#include <string>
using namespace std;
class Ship {
private:
    string shipName;
public:
    Ship(string name) {
        shipName = name;
        cout << "Ship " << shipName << " created" << endl;
    }
    void display() {
        cout << "Ship name: " << shipName << endl;
    }
    ~Ship() {
        cout << "Ship " << shipName << " destroyed" << endl;
    }
};
int main() {
    Ship s1("Basra");
    {
        Ship s2("Al-Faw");
        Ship s3("Zubair");
        s2.display();
    }
    Ship s4("Umm Qasr");
    {
        Ship s5("Shatt Al-Arab");
    }
    return 0;
}
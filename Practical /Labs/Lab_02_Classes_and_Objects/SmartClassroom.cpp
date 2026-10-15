
#include <iostream>
#include <string>
using namespace std;

class SmartLight {
public:
    int id, brightness;
    string room;
    bool on;

    void setter(int i, string r) {
        id = i;
        room = r;
        brightness = 50;
        on = false;
    }

    void turnOn() { on = true; }
    void turnOff() { on = false; }

    void setBrightness(int value) {
        if (value >= 0 && value <= 100)
            brightness = value;
    }
    // In C++, boolalpha is a manipulator that tells cout to display Boolean values 
    // as true or false instead of 1 or 0.
    void display() {
        cout << "Light " << id << " On=" << boolalpha << on
             << ", Brightness=" << brightness << "%\n";
    }
};

class TemperatureSensor {
public:
    int id;
    string location;
    double temperature;

    void setter(int i, string loc) {
        id = i;
        location = loc;
        temperature = 25;
    }

    void updateReading(double value) {
        temperature = value;
    }

    bool isHot() {
        return temperature > 35;
    }

    void display() {
        cout << "Sensor " << id << " (" << location << ")"
             << " Temperature=" << temperature
             << ", Hot=" << boolalpha << isHot() << '\n';
    }
};

class Projector {
public:
    string model, source;
    bool on;

    void setter(string m) {
        model = m;
        source = "None";
        on = false;
    }

    void turnOn() { on = true; }
    void turnOff() { on = false; }
    void setSource(string s) { source = s; }

    void display() {
        cout << "Projector " << model
             << " On=" << boolalpha << on
             << ", Source=" << source << '\n';
    }
};

int main() {
    // Create objects and initialize them
    SmartLight light1, light2;
    light1.setter(1, "AI Lab");
    light2.setter(2, "AI Lab");

    TemperatureSensor sensor1, sensor2;
    sensor1.setter(101, "Front");
    sensor2.setter(102, "Back");

    Projector projector;
    projector.setter("Epson");

    // Operate the lights
    light1.turnOn();
    light1.setBrightness(80);

    light2.turnOn();
    light2.setBrightness(40);

    // Update temperature readings
    sensor1.updateReading(33);
    sensor2.updateReading(38);

    // Operate the projector
    projector.turnOn();
    projector.setSource("HDMI");

    // Display the final status
    cout << "=== Smart Classroom Status ===\n";
    light1.display();
    light2.display();
    sensor1.display();
    sensor2.display();
    projector.display();

    return 0;
}

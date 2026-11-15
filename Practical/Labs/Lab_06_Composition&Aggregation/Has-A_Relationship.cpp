/* Composition is an important Object-Oriented Programming (OOP) concept in C++. It describes a relationship where one class contains an object of another class as a data member.
A Car has an Engine. */

#include <iostream>
#include <string>
using namespace std;

class Engine {
private:
    string engineType;

public:
    Engine(string engineType) {
        this->engineType = engineType;
    }

    string getEngineType() {
        return engineType;
    }
};

class Car {
private:
    string carName;
    int releaseDate;
    Engine engine;  // Composition

public:
    Car(string carName, int releaseDate, string engineType)
        : engine(engineType) {

        this->carName = carName;
        this->releaseDate = releaseDate;
    }

    void getCarInfo() {
        cout << "Car Name: " << carName << endl;
        cout << "Release Date: " << releaseDate << endl;
        cout << "Engine Type: "
             << engine.getEngineType() << endl;
    }
};

int main() {

    Car car1("Toyota", 2024, "V6");

    car1.getCarInfo();

    return 0;
}

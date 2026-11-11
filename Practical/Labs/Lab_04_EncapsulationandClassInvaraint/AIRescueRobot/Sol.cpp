
#include <iostream>
using namespace std;

// Sensor class
class Sensor {
public:
    double readDistance(string direction) {
        double distance;

        cout << "Enter obstacle distance on the "
             << direction << " (meters): ";
        cin >> distance;

        if (distance < 0) {
            cout << "Invalid distance. Using 0 meters.\n";
            distance = 0;
        }

        return distance;
    }
};
// NavigationSystem class
class NavigationSystem {
private:
    double safeDistance;
public:
    NavigationSystem() {
        safeDistance = 1.0;
    }
    bool isSafe(double distance) {
        return distance > safeDistance;
    }

    void chooseDirection(double left,
                         double front,
                         double right) {
        // Stop if an obstacle is too close in front.
        if (!isSafe(front)) {
            cout << "Obstacle too close! STOPPING.\n";

            // Choose a safe direction with the most space.
            if (isSafe(left) && left >= right) {
                cout << "Turn LEFT to avoid the obstacle.\n";
            } else if (isSafe(right)) {
                cout << "Turn RIGHT to avoid the obstacle.\n";
            } else if (isSafe(left)) {
                cout << "Turn LEFT to avoid the obstacle.\n";
            } else {
                cout << "No safe direction found. "
                     << "Remain stopped.\n";
                return;
            }

            cout << "Continue cautiously in the chosen direction.\n";
        } else {
            cout << "Path ahead is clear.\n";
            cout << "Move FORWARD toward the target.\n";
        }
    }
};

// Robot class
class Robot {
private:
    int steps;

public:
    Robot() {
        steps = 0;
        cout << "Disaster rescue robot initialized.\n";
    }

    void search() {
        // Create local objects instead of member objects.
        Sensor sensor;
        NavigationSystem navigation;

        double left, front, right;

        steps++;

        cout << "\n--- Search Step " << steps << " ---\n";

        left = sensor.readDistance("LEFT");
        front = sensor.readDistance("FRONT");
        right = sensor.readDistance("RIGHT");

        cout << "\nEvaluating surroundings...\n";

        navigation.chooseDirection(left, front, right);
    }
};

// Main program
int main() {
    Robot robot;
    int choice;

    do {
        cout << "\n===== DISASTER RESCUE ROBOT =====\n";
        cout << "1. Scan surroundings and navigate\n";
        cout << "0. Stop searching\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            robot.search();
        } else if (choice != 0) {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    cout << "\nRescue robot stopped safely.\n";

    return 0;
}

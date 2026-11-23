#include <iostream>
#include <string>
using namespace std;

class Character {
public:
    string name;
    int health;

    void showStatus() {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
    }
};

class Wizard : public Character {
public:
    void castSpell() {
        cout << name << " casts a magic spell!" << endl;
    }
};

int main() {
    Wizard player;

    player.name = "Ahmed";
    player.health = 100;

    player.showStatus();
    player.castSpell();

    return 0;
}

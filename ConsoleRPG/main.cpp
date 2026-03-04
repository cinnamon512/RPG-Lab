#include <iostream>
#include "Player.h"

using namespace std;

int main() {
    Player hero;
    Player wizard("Gandalf", 120, 15);

    cout << endl << "--- Initial Status ---" << endl;
    hero.displayStatus();
    wizard.displayStatus();

    cout << endl << "--- Hero takes damage! ---" << endl;
    hero.takeDamage(25);
    hero.displayStatus();

    cout << endl << "--- Wizard takes damage! ---" << endl;
    wizard.takeDamage(150);
    wizard.displayStatus();

    cout << endl;

    return 0;
}
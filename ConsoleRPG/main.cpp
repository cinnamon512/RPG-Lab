#include <iostream>
#include "Player.h"

using namespace std;

int main() {



    Player hero;


    Item sword("Sword", 50);
    Item bonnet("Bonnet", 150);
    Item boots("Boots", 10);
    Item junk;

    hero.addItem(sword);
    hero.addItem(bonnet);
    hero.addItem(boots);
    hero.addItem(junk);

    cout << "The Total number of items is " << Item::getTotalItems() << endl;


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
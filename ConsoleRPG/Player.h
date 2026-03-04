//
// Created by hawsin on 3/4/26.
//

#ifndef CONSOLERPG_PLAYER_H
#define CONSOLERPG_PLAYER_H
#include <string>

using namespace std;

class Player {

    private:
        string name;
        int health;
        int maxHealth;
        int atttackPower;
    public:

        //constructors
        Player();
        Player(string name, int health, int atttackPower);

        //destructor
        ~Player();

        //func
        void takeDamage(int damage);

        //getters
        string getName() const;
        int getHealth() const;
        int getMaxHealth() const;
        int getAttackPower() const;

        //display fuunc
        void displayStatus() const;
};


#endif //CONSOLERPG_PLAYER_H
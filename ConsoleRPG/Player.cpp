//
// Created by hawsin on 3/4/26.
//

#include "Player.h"

#include <iostream>
using namespace std;

Player::Player() {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    atttackPower = 10;
    cout << "Default constructor called." << endl;
}

Player::Player(string name, int health, int atttackPower) {
    this->name = name;
    this->health = health;
    this->maxHealth = health;
    this->atttackPower = atttackPower;
    cout << "Overloaded Constructor called." << endl;
}

Player::~Player() {
    cout << "The object for Player " + name + " has been destroyed." << endl;
}

void Player::takeDamage(int damage) {
    if (health - damage <= 0) {
        health = 0;
        cout << name + " falls to the ground, defeated." << endl;
    }
    else {
        health -= damage;
    }
}

string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

int Player::getMaxHealth() const {
    return maxHealth;
}

int Player::getAttackPower() const {
    return atttackPower;
}

void Player::displayStatus() const {
    cout << "[" << name << "] - HP: " << health << "/" << maxHealth << endl;
}

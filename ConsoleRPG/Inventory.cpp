//
// Created by hawsin on 3/9/26.
//

#include "Inventory.h"

#include <iostream>
using namespace std;

Inventory::Inventory(int capacity) {
    this->capacity = capacity;
    this->itemCount = 0;
    this->items = new Item[capacity];
}

Inventory::~Inventory() {
    delete items;
}

bool Inventory::addItem(const Item& item) {
    if (itemCount < capacity) {
        items[itemCount] = item;
        Item::incrementTotalItems();
        cout << "An item was added: [" << item.getName() << "]" << endl;
        itemCount++;
        return true;
    }
    return false;
}

void Inventory::display() const { //todo: make this fancier with a listing of items
    cout << "The inventory has " << itemCount << " items." << endl;
    return; //neat
}
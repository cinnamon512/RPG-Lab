//
// Created by hawsin on 3/9/26.
//

#include "Item.h"

int Item::totalItems = 0;

Item::Item(string name, int value) {
    this->name = name;
    this->value = value;
}

int Item::getTotalItems() {
    return totalItems;
}

void Item::incrementTotalItems() {
    totalItems += 1;
}

string Item::getName() const {
    return name;
}
int Item::getValue() const {
    return value;
}
void Item::display() const {
    cout << "[" << getName() << "] (Value: [" << getValue() << "])" << endl;
    return; //?
}
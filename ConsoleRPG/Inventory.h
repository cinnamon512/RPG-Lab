//
// Created by hawsin on 3/9/26.
//

#ifndef CONSOLERPG_INVENTORY_H
#define CONSOLERPG_INVENTORY_H

#include "Item.h"

class Inventory {
    private:
        Item * items; //todo: check back up on correct syntax  FOR A POINTER TO ARRAY
        int capacity;
        int itemCount;
    public:
        Inventory(int capacity);
        ~Inventory();
        bool addItem(const Item& item);
        void display() const;
};


#endif //CONSOLERPG_INVENTORY_H
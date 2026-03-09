//
// Created by hawsin on 3/9/26.
//

#ifndef CONSOLERPG_ITEM_H
#define CONSOLERPG_ITEM_H
#include<iostream>
#include <string>
using namespace std;


class Item {
    private:
        static int totalItems;
        string name;
        int value;
    public:
        Item(string name = "Scrap", int value = 0);
        static int getTotalItems();
        static void incrementTotalItems();
        string getName() const;
        int getValue() const;
        void display() const;
};


#endif //CONSOLERPG_ITEM_H
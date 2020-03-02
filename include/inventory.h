#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>
using std::string;

//Forward declrations

class Item;

class Inventory
{

protected:
    std::vector<Item *> vector_of_items;
    int total_slots;

public:
    Inventory(int total_slots, std::vector<Item *> vector_of_items);

    //Getters

    std::vector<Item *> get_vector_of_items();

    int get_total_slots();

    //Setters

    std::vector<Item *> set_vector_of_items(std::vector<Item *> vector_of_items);

    int set_total_slots(int total_slots);

    //Methods
};

#endif

//Invetory({&sword , &shirt})
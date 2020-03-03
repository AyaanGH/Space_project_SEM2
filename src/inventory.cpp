#include "../include/inventory.h"
#include "../include/item_class_header/item.h"

#include <iostream>

using std::string;

Inventory::Inventory(int total_slots, std::vector<Item *> vector_of_items)
{
    this->total_slots = total_slots;
    this->vector_of_items = set_vector_of_items(vector_of_items);
}

//Getters

std::vector<Item *> Inventory::get_vector_of_items()
{
    return vector_of_items;
}

int Inventory::get_total_slots()
{
    return total_slots;
}

//Setters

std::vector<Item *> Inventory::set_vector_of_items(std::vector<Item *> vector_of_items)
{
    return vector_of_items;
}

void Inventory::set_total_slots(int total_slots)
{

    this -> total_slots = total_slots; 
}


// void Inventory::calculate_total_slots(std::vector<Item*> vector_of_items)
// {

//     int slots


// }


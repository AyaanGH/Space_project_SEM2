#include "../../include/item_class_header/apparel.h"
#include "../../include/menu.h"

#include <iostream>
using std::string;

#include <string>

//Constructor

Apparel::Apparel(string name, string description, string item_type, int item_value, int defense, int durability) : Item(name, description, item_type, item_value)
{
    this->durability = set_durability(durability);
    this->defense = set_defense(defense);
}

//getters
int Apparel::get_durability()
{
    return durability;
}

int Apparel::get_defense()
{
    return defense;
}

//Setters

int Apparel::set_defense(int defense)
{
    return defense;
}

int Apparel::set_durability(int durability)
{
    return durability;
}

void Apparel::display_stats()

{

    Menu::slow_print(get_description(), 55);
    std::cout << "\n\n";
    std::cout << "Defense: " << get_defense() << std::endl;
    std::cout << "Durability: " << get_durability() << std::endl;
}
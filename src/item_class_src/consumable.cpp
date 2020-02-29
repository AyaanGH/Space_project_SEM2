#include "../../include/item_class_header/consumable.h"
#include "../../include/menu.h"

#include <iostream>
using std::string;

#include <string>

//Constructor

Consumable::Consumable(string name, string description, string item_type, int item_value, int num_uses, int duration) : Item(name, description, item_type, item_value)
{
    this->num_uses = set_num_uses(num_uses);
    this->duration = set_duration(duration);
}

//getters
int Consumable::get_num_uses()
{
    return num_uses;
}

int Consumable::get_duration()
{
    return duration;
}

//Setters

int Consumable::set_duration(int duration)
{
    return duration;   
}

int Consumable::set_num_uses(int num_uses)
{
    return num_uses;
}


void Consumable::display_stats()

{

    Menu::slow_print(get_description(),55);
    std::cout  << "\n\n";
    std::cout << "Duration(seconds): " << get_duration() << std::endl;
    std::cout << "Number of uses: " << get_num_uses() << std::endl;

}



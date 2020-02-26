#include "../../include/item_class_header/weapon.h"

#include <iostream>
using std::string;

#include <string>

//Constructor

Weapon::Weapon(string name, string description, string item_type, int item_value, int damage, int range, int durability, int accuracy) : Item(name, description, item_type, item_value)
{
    this->damage = set_damage(damage);
    this->range = set_range(range);
    this->durability = set_durability(durability);
    this->accuracy = set_accuracy(accuracy);
}

//Getters

int Weapon::get_damage()
{
    return damage;
}

int Weapon::get_range()
{
    return range;
}

int Weapon::get_accuracy()
{
    return accuracy;
}

int Weapon::get_durability()
{
    return durability;
}
//Setters

int Weapon::set_damage(int damage)
{

    return damage;
}

int Weapon::set_range(int range)
{

    return range;
}

int Weapon::set_durability(int durability)
{
    return durability;
}

int Weapon::set_accuracy(int accuracy)

{
    return accuracy;
}
//methods




#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"
#include <string>

using std::string;

//forward declration

// class Item;

class Weapon : public Item
{

protected:
    int damage;
    int range;
    int durability;
    int accuracy;

public:
    Weapon(string name, string description, string item_type, int item_value, int damage, int range, int durability, int accuracy);

    int get_damage();
    int get_range();
    int get_durability();
    int get_accuracy();

    int set_damage(int damage);
    int set_range(int range);
    int set_durability(int durability);
    int set_accuracy(int accuracy);


};

#endif
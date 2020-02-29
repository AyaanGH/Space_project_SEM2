#ifndef APPAREL_H
#define APPAREL_H

#include "item.h"
#include <string>

using std::string;

class Apparel : public Item
{

protected:
    int defense;
    int durability;

public:
    Apparel(string name, string description, string item_type, int item_value, int defense, int durability);

    int get_defense();
    int get_durability();
    int set_defense(int defense);
    int set_durability(int durability);

    virtual void display_stats();
};

#endif


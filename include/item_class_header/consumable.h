#ifndef CONSUMABLE_H
#define CONSUMABLE_H

#include "item.h"
#include <string>

using std::string;

//forward declration

// class Item;

class Consumable : public Item
{

protected:
    int num_uses;
    int duration;

public:
    Consumable(string name, string description, string item_type, int item_value, int num_uses, int duration);

    int get_num_uses();
    int get_duration();
    int set_num_uses(int num_uses);
    int set_duration(int duration);

    
    virtual void display_stats();
};

#endif
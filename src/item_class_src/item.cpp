#include "../../include/item_class_header/item.h"

#include <iostream>
using std::string;

#include <string>

//Constructor


Item::Item(string name, string description, string item_type, int item_value)
{
    this->name = set_name(name);
    this->description = set_description(description);
    this->item_type = set_item_type(item_type);
    this->item_value = set_item_value(item_value);
}

//Getters

string Item::get_name()
{
    return name;
    }

string Item::get_description()
{
    return description;
}

string Item::get_item_type()
{
    return item_type;
}

int Item::get_item_value()
{
    return item_value;
}

//Setters

string Item::set_name(string name)
{

    return name;
}

string Item::set_description(string description)
{

    return description;
}

string Item::set_item_type(string item_type)
{
    return item_type;
}

int Item::set_item_value(int item_value)
{

    return item_value;
}
//Methods


#ifndef ITEM_H
#define ITEM_H

#include <string>

using std::string;

class Item
{

protected:
    string name;
    string description;
    string item_type;
    int item_value;

public:
    Item(string name, string description, string item_type, int item_value);

    //Getters

    string get_name();

    string get_description();

    string get_item_type();

    int get_item_value();

    //Setters

    string set_name(string name);

    string set_description(string description);

    string set_item_type(string item_type);

    int set_item_value(int item_value);

    virtual void display_stats();
};

#endif
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using std::string;

class Player
{
protected:
    //Attributes

    string first_name;
    string last_name;
    int hp = 10;

public:
    //constructor

    Player(string first_name, string last_name, int hp);

    //Getters

    string get_first_name();
    string get_last_name();
    int get_hp();

    //Setters

    string set_first_name(string first_name);
    string set_last_name(string set_last_name);
    int set_hp(int hp);

    //Methods

    int increase_hp(int increase_value);
    int decrease_hp(int decrease_value);

    void show_stats();
};

#endif

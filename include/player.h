#ifndef PLAYER_H
#define PLAYER_H


#include "room.h"
#include <iostream>
using std::string;

class Player
{
private:
    //Attributes
    Room *current_room_object;

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

    Room get_current_room_object();

    //Setters

    string set_first_name(string first_name);
    string set_last_name(string set_last_name);
    int set_hp(int hp);
    void set_current_room(Room *room_object);

    //Methods

    int increase_hp(int increase_value);
    int decrease_hp(int decrease_value);

    void show_stats();
};

#endif

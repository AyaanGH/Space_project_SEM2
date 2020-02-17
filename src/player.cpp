#include "../include/player.h"
#include "../include/room.h"

#include <iostream>

using std::string;

//Constructor
Player::Player(string first_name, string last_name, int hp,  Room *current_room_object) 

{
    this->first_name = set_first_name(first_name);
    this->last_name = set_first_name(last_name);
    this->hp = set_hp(hp);
    this->set_current_room(current_room_object);
}


Room *current_room_object;



//Getters

string Player::get_first_name()

{
    return first_name;
}

string Player::get_last_name()

{
    return last_name;
}

int Player::get_hp()
{

    return hp;
}


Room* Player::get_current_room_object()
{
    return Player::current_room_object;
}

//Setters

string Player::set_first_name(string first_name)
{
    return first_name;
}

string Player::set_last_name(string last_name)
{
    return last_name;
}

int Player::set_hp(int hp)

{
    if (hp < 0)
    {
        hp = 0;

        std::cout << "HP cannot be SET lower than zero, current hp --> 0\n";
    }
    return hp;
}


void Player::set_current_room(Room *room_object)

{

     current_room_object = room_object;

}

//Public Methods

int Player::increase_hp(int increase_value)
{

    return hp += increase_value;
}

int Player::decrease_hp(int decrease_value)
{
    //Make sure always negative number
    decrease_value = abs(decrease_value) * -1;
    if (hp - 1 < 0)
    {

        std::cout << "HP cannot be lower than zero, current hp --> 0\n";

        return hp = 0;
    }

    return hp += decrease_value;
}

void Player::show_stats()

{

    std::cout << get_first_name() << std::endl;

    std::cout << get_last_name() << std::endl;

    std::cout << "HP: " << get_hp() << std::endl;



}
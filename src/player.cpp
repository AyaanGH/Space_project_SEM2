#include "../include/player.h"

#include <iostream>

using std::string;

//Constructor
Player::Player(string first_name, string last_name, int hp)

{
    this->first_name = set_first_name(first_name);
    this->last_name = set_first_name(last_name);
    this->hp = set_hp(hp);
}

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
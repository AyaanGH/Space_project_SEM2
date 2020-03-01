#include "../include/player.h"
#include "../include/room.h"
#include "../include/inventory.h"
#include "../include/item_class_header/item.h"
#include "../include/menu.h"

#include <iostream>
#include <windows.h>

using std::string;

//Constructor
Player::Player(string first_name, string last_name, int hp, Room *current_room_object, Inventory *inventory_object)

{
    this->first_name = set_first_name(first_name);
    this->last_name = set_first_name(last_name);
    this->hp = set_hp(hp);
    this->current_room_object = current_room_object;
    this->inventory_object = inventory_object;

    
}

// Room *current_room_object;

//Getters
string Player::get_profile_name()
{
    return profile_name;
}

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

int Player::get_strength()
{
    return strength;
}
int Player::get_endurance()
{
    return endurance;
}
int Player::get_iq()
{
    return iq;
}
int Player::get_reflexes()
{
    return reflexes;
}
int Player::get_awarness()
{
    
    return awarness;
}
int Player::get_influence()
{
    return influence;
}

//Setters
void Player::set_profile_name(string profile_name)
{
    this -> profile_name = profile_name;
}

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

    void Player::set_strength(int strength)
    {
        this -> strength += strength;
        
    }
    void Player::set_endurance(int endurance)
    {
        this -> endurance += endurance; 
    }
    void Player::set_iq(int iq)
    {
        this -> iq += iq;
    }
    void Player::set_reflexes(int reflexes)
    {
        this ->reflexes += reflexes;
    }
    void Player::set_influence(int influence)
    {
        this -> influence += influence;
    }
    void Player::set_awarness(int awarness)
    {
        this -> awarness += awarness;
    }

//Public Methodse

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

        std::cout << "HP cannot be loweer than zero, current hp --> 0\n";

        return hp = 0;
    }

    return hp += decrease_value;
}

void Player::show_stats()
{
    std::cout<<get_profile_name()<<std::endl;
    std::cout << "------------------\n\n";
    
    std::cout << get_first_name() << std::endl;

    std::cout << get_last_name() << std::endl;

    std::cout << "HP: " << get_hp() << std::endl;

    std::cout << "Strength: " << get_strength() << std::endl;
    std::cout << "Endurance: " << get_endurance() << std::endl;
    std::cout << "IQ: " << get_iq() << std::endl;
    std::cout << "Reflexes: " << get_reflexes() << std::endl;
    std::cout << "Influence: " << get_influence() << std::endl;
    std::cout << "Awarness: " << get_awarness() << std::endl;



}

void Player::display_inventory_categories(Player *player_object)

{

    int user_selection = 0;
    char user_input;
    bool user_going_down = true;
    bool user_is_selecting = true;
    int saved_index;

    //TODO: Category overhaul
    std::array<string, 3> categories = {"Apparel", "Consumables", "Weapons"};

    while (user_is_selecting)

    {

        //User selection in the index position which the arrow is rendered on. Making sure that the user doesn't go out of bounds of the array
        while (true)
        {
            if (user_selection < 0)
            {
                user_selection = 2;
            }

            if (user_selection > 2)
            {
                user_selection = 0;
            }

            else
            {
                break;
            }
        }

        Menu::clear_screen();

        std::cout << player_object->get_first_name() << "'s inventory" << std::endl;

        std::cout << "------------------\n\n";

        for (int index_of_array = 0; index_of_array < 3; index_of_array++)
        {

            if (index_of_array == user_selection)
            {

                std::cout << categories[index_of_array] + " <--------- " + " \n";
                saved_index = index_of_array;
            }

            else
            {

                std::cout << categories[index_of_array] << std::endl;
            }
        }

        char user_input = _getch();

        switch (user_input)
        {
        case 'H':

            user_selection--;
            user_going_down = false;
            break;

        case 'P':
            user_selection++;
            user_going_down = true;
            break;

        case '\b':
            /* code */
            std::cout << " \n\n\nReturning back to menu";
            Menu::loading_animation();
            user_is_selecting = false;
            break;

        case '\r':
            /* code */
            std::cout << "\n\n\nOpening";
            Menu::loading_animation();
            user_is_selecting = false;

            display_items_in_inventory(categories[saved_index], player_object);

            //std::cout << "\nMemory adress of current_room after we set the new room the player is in :" << player_object->current_room_object <<std::endl;

            // Sleep(5000);

            break;

        default:

            break;
        }
    }
}

void Player::display_items_in_inventory(string user_category_selection, Player *player_object)
{

    std::vector<Item *> vector_of_filtered_items = {};

    for (int i = 0; i < player_object->inventory_object->get_vector_of_items().size(); i++)
    {

        if (user_category_selection == player_object->inventory_object->get_vector_of_items()[i]->get_item_type())
        {
            vector_of_filtered_items.push_back(player_object->inventory_object->get_vector_of_items()[i]);
        }
    }

    int user_selection = 0;
    char user_input;
    bool user_going_down = true;
    bool user_is_selecting = true;
    int saved_index;

    while (user_is_selecting)
    {

        //User selection in the index position which the arrow is rendered on. Making sure that the user doesn't go out of bounds of the array
        while (true)
        {
            if (user_selection < 0)
            {
                user_selection = vector_of_filtered_items.size() - 1;
            }

            if (user_selection > vector_of_filtered_items.size() - 1)
            {
                user_selection = 0;
            }

            else
            {
                break;
            }
        }

        Menu::clear_screen();

        std::cout << user_category_selection << std::endl;

    ;
        std::cout << "------------------\n\n";

        for (int index_of_array = 0; index_of_array < vector_of_filtered_items.size(); index_of_array++)
        {

            if (index_of_array == user_selection)
            {

                std::cout << vector_of_filtered_items[index_of_array]->get_name() + " <--------- " + " \n";
                saved_index = index_of_array;
            }

            else
            {

                std::cout << vector_of_filtered_items[index_of_array]->get_name() << std::endl;
            }
        }

        char user_input = _getch();

        switch (user_input)
        {
        case 'H':

            user_selection--;
            user_going_down = false;
            break;

        case 'P':
            user_selection++;
            user_going_down = true;
            break;

        case '\b':
            /* code */
            std::cout << " \n\n\nReturning";
            Menu::loading_animation();
            user_is_selecting = false;

            display_inventory_categories(player_object);
            break;

        case '\r':
            /* code */
            std::cout << "\n\n\nOpening";
            Menu::loading_animation();
            user_is_selecting = false;

            Menu::clear_screen();
            std::cout << vector_of_filtered_items[saved_index]->get_name() << std::endl;

            std::cout << "------------------\n\n";


            //Method works on any object of type Item
            vector_of_filtered_items[saved_index]->display_stats();

           

            while (true)
            {
                char user_input = _getch();

                if (user_input = '\b')
                {
                    std::cout << "\n\n\n";
                    std::cout << "Returning";
                    Menu::loading_animation();
                    Menu::clear_screen();
                    display_items_in_inventory(user_category_selection, player_object);
                }
                break;
                /* code */
            }

            break;

        default:

            break;
        }
    }
}

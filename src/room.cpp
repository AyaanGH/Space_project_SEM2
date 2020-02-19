#include "../include/room.h"
#include "../include/menu.h"
#include "../include/player.h"
#include "../include/npc.h"

#include <iostream>
#include <vector>
#include <windows.h>
#include <array>
#include <string>
using std::string;

//Constructor

Room::Room(int roomID, string name, string description, std::array<int, 4> connected_rooms)

{

    this->roomID = set_roomID(roomID);
    this->name = set_name(name);
    this->description = set_description(description);
    this->connected_rooms = connected_rooms;

    Room::list_of_room_objects.push_back({*this});
}

//static members

std::vector<Room> Room::list_of_room_objects = {};

//Getters

int Room::get_room_id()
{
    return roomID;
}

std::array<int, 4> Room::get_connected_rooms()
{
    return connected_rooms;
}

string Room::get_description()
{
    return description;
}

string Room::get_name()
{
    return name;
}

std::vector<NPC> Room::get_list_of_npc_objects()
{

    return list_of_npc_objects;
}

//Setters

int Room::set_roomID(int roomID)
{
    if (roomID < 10)
    {
        std::cout << "Cant set room ID to less than 10. Throwing error";

        throw "Error, cant set room ID to less than 10";
    }

    else
    {
        return roomID;
    }
}

string Room::set_name(string name)
{
    return name;
}
string Room::set_description(string description)
{
    return description;
}

//Methods

void Room::add_npc_to_list(NPC *npc_object)
{

    list_of_npc_objects.push_back({*npc_object});
}

//Static Methods

std::vector<Room> Room::get_list_of_room_objects()
{

    return list_of_room_objects;
}

void Room::display_room_selection(Room *room_object, Player *player_object)
{
    //FIXME: Arrow keys sometimes not working

    int user_selection = 0;
    char user_input;
    bool user_going_down = true;
    bool user_is_selecting = true;

    while (user_is_selecting)

    {

        //User selection in the index position which the arrow is rendered on. Making sure that the user doesn't go out of bounds of the array
        while (true)
        {
            if (user_selection < 0)
            {
                user_selection = 3;
            }

            if (user_selection > 3)
            {
                user_selection = 0;
            }

            if (room_object->get_connected_rooms()[user_selection] == -1)
            {
                if (user_going_down == true)
                {
                    user_selection++;
                }

                else
                {
                    user_selection--;
                }
            }

            else
            {
                break;
            }
        }

        Menu::clear_screen();
        std::cout << room_object->get_name() << std::endl;

        std::cout << "\nMemory address of this room :" << room_object <<std::endl;
        Sleep(5000);
        std::cout << "------------------\n\n";

        for (int index_of_array = 0; index_of_array < 4; index_of_array++)
        {

            if (room_object->get_connected_rooms()[index_of_array] == -1)
            {
                continue;
            }

            if (index_of_array == user_selection)
            {

                std::cout << get_room_object_from_ID(room_object->get_connected_rooms()[index_of_array])->get_name() + " <--------- " + get_room_object_from_ID(room_object->get_connected_rooms()[index_of_array])->get_description() + " \n";
            }

            else
            {

                std::cout << get_room_object_from_ID(room_object->get_connected_rooms()[index_of_array])->get_name() << std::endl;
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
            for (int i = 0; i < 2; i++)
            {
                Sleep(200);
                std::cout << "." << std::flush;
                Sleep(200);
                std::cout << "." << std::flush;
                Sleep(200);
                std::cout << "." << std::flush;
                Sleep(200);
                std::cout << "\b\b\b   \b\b\b" << std::flush;
            }
            user_is_selecting = false;
            break;

        case '\r':
            /* code */
            std::cout << "\n\n\nSelecting room";
            Menu::loading_animation();
            user_is_selecting = false;


            player_object->set_current_room(get_room_object_from_ID(room_object->get_connected_rooms()[user_selection]));
            std::cout << "\nMemory adress of current_room after we set the new room the player is in :" << player_object->get_current_room_object() <<std::endl;
            Sleep(5000);


            break;

        default:

            break;
        }
    }
}

Room *Room::get_room_object_from_ID(int ID)
{

    for (int i = 0; i < list_of_room_objects.size(); i++)
    {
        /* code */

        //TODO: Using direct member variable rather than getter
        if (list_of_room_objects[i].get_room_id() == ID)
        {
            return &list_of_room_objects[i];
        }
    }

    throw "ROOM ID DOES NOT EXIST THAT U ARE TRYING TO FIND";

    //
}

void Room::display_npc_selection(Room *room_object)
{

    // NPC &current_selection = room_object->get_list_of_npc_objects()[0];

    int user_selection = 0;
    char user_input;
    bool user_is_selecting = true;
    int num_npc = room_object->get_list_of_npc_objects().size();

    if (num_npc <= 0)
    {
        Menu::clear_screen();
        std::cout << "NPCs in " << room_object->get_name() << std::endl;
        std::cout << "------------------\n\n";
        std::cout << "Nobody is here..." << std::endl;
        std::cout << "\n\n\nBackspace to return to main menu" << std::endl;
        while (true)
        {
            if (_getch() == '\b')
            {
                std::cout<<"Returning back to menu";
                Menu::loading_animation();
                return;
            }
        }
    }

    int saved_index;

    std::cout << num_npc << std::endl;
    Sleep(2000);

    while (user_is_selecting)
    {

        while (true)
        {
            if (user_selection < 0)
            {
                user_selection = num_npc - 1;
            }

            if (user_selection > num_npc - 1)
            {
                user_selection = 0;
            }

            else
            {
                break;
            }
        }

        Menu::clear_screen();
        std::cout << "NPCs in " << room_object->get_name() << std::endl;
        std::cout << "------------------\n\n";

        for (int index_of_array = 0; index_of_array < num_npc; index_of_array++)
        {

            if (index_of_array == user_selection)
            {
                // current_selection = room_object->get_list_of_npc_objects()[index_of_array];

                // std::cout << current_selection.get_first_name() + "<--------" + " \n";

                std::cout << room_object->get_list_of_npc_objects()[index_of_array].get_first_name() + " <--------- " + " \n";
                saved_index = index_of_array;
            }

            else
            {

                std::cout << room_object->get_list_of_npc_objects()[index_of_array].get_first_name() + " \n";
            }
        }

        char user_input = _getch();

        switch (user_input)
        {
        case 'H':

            user_selection--;
            break;

        case 'P':
            user_selection++;
            break;

        case '\b':
            /* code */
            std::cout << " \n\n\nReturning back to menu";
            Menu::loading_animation();
            user_is_selecting = false;
            break;

        case '\r':
            /* code */
            std::cout << "\n\n\nTalking to " + room_object->get_list_of_npc_objects()[saved_index].get_first_name(); //+ (current_selection.get_first_name())<< std::endl;
            Menu::loading_animation();
            user_is_selecting = false;

            Menu::clear_screen();
            NPC::display_npc_menu(&(room_object->get_list_of_npc_objects()[saved_index]));
            // Sleep(5000);

            break;

        default:

            break;
        }
    }
}

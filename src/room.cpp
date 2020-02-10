#include "../include/room.h"
#include "../include/menu.h"

#include <iostream>
#include <vector>
#include <array>
using std::string;

//Constructor

Room::Room(int roomID, string name, string description, std::array<int, 4> connected_rooms)

{

    this->roomID = set_roomID(roomID);
    this->name = set_name(name);
    this->description = set_description(description);
    this->connected_rooms = connected_rooms;

    // Room::list_of_rooms.push_back({roomID});
    Room::list_of_room_objects.push_back({*this});
}

//static members

// Room *Room::current_room_object;
// std::vector<int> Room::list_of_rooms = {};
std::vector<Room> Room::list_of_room_objects = {};

//Getters

int Room::get_room_id()
{
    return roomID;
}

// std::vector<int> Room::get_list_of_rooms()
// {

//     return Room::list_of_rooms;
// }

// Room Room::get_current_room_object()
// {
//     return *Room::current_room_object;
// }

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
// void Room::set_current_room(Room *room_object)

// {

//      current_room_object = room_object;

//     // for (Room room : Room::get_list_of_room_objects())
//     // {
//     //     if (room.get_room_id() == roomID)
//     //     {
//     //         ;
//     //     }
//     // }

//     // std::cout << "Room ID doesnt exist";
//     // std::cout << 10 / 0;
// }

string Room::set_name(string name)
{
    return name;
}
string Room::set_description(string description)
{
    return description;
}

//Methods

//Static Methods
void Room::show_adjacent_rooms(Room *room_object)

{

    std::array<int, 4> con_rooms = room_object->get_connected_rooms();

    for (int room : con_rooms)
    {

        std::cout << room << std::endl;
    }
}

std::vector<Room> Room::get_list_of_room_objects()
{

    return list_of_room_objects;
}

void Room::display_room_selection(Room *room_object)
{
    
    int user_selection = 0;
    int connected_room_number = 0;
    char user_input;

    while (user_input != 'r')

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

                user_selection++;
            }

            else
            {
                break;
            }
        }

        Menu::clear_screen();
        std::cout << room_object->get_name() << std::endl;

        for (int index_of_array = 0; index_of_array < 4; index_of_array++)
        {
            if (room_object->get_connected_rooms()[index_of_array] == -1)
            {
                continue;
            }

            if (room_object->get_connected_rooms()[index_of_array] == user_selection)
            {

                std::cout << room_object->get_name() + "  <--------\n";
            }

            else
            {
                std::cout << room_object->get_name() << std::endl;
            }
        }

        char user_input = _getch();

        switch (user_input)
        {
        case 'H':
            /* code */
            user_selection--;
            break;

        case 'P':
            /* code */
            user_selection++;
            break;

        
        }
    }
}

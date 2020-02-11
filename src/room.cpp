#include "../include/room.h"
#include "../include/menu.h"

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

    std::cout << "Now in Display room selection \n";
    Sleep(3000);
    int user_selection = 0;
    int connected_room_number = 0;
    char user_input;
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

                user_selection++;
            }

            else
            {
                break;
            }
        }

        // std::cout << " selection" << user_selection << std::endl;
        //  Sleep(3000);

        Menu::clear_screen();
        std::cout << room_object->get_name() << std::endl;
        std::cout << "------------------\n\n";

        for (int index_of_array = 0; index_of_array < 4; index_of_array++)
        {

            // std::cout << index_of_array << ":::Array index\n\n";
            if (room_object->get_connected_rooms()[index_of_array] == -1)
            {
                // std::cout << " If Array Index is -1, continue : (Value of object array) \n" << room_object->get_connected_rooms()[index_of_array];
                // Sleep(3000);
                continue;
            }

            if (index_of_array == user_selection)
            {

                // std::cout << " If Array Index is equal to user selection:"<<user_selection <<"(Value of object array) \n" << room_object->get_connected_rooms()[index_of_array];
                // Sleep(3000);
                // std::cout << room_object->get_connected_rooms()[index_of_array] + "  <--------\n";

                // auto s = std::to_string(room_object->get_connected_rooms()[index_of_array]);
                // std::cout << s + "  <--------\n";


                std::cout << get_room_obect_from_ID(room_object->get_connected_rooms()[index_of_array]).get_name() + "<---------\n";
            }

            else
            {

                // std::cout << " If Array Index is not selected:"<<user_selection <<"(Value of object array) \n" << room_object->get_connected_rooms()[index_of_array];
                // Sleep(3000);
                // std::cout << room_object->get_connected_rooms()[index_of_array] << std::endl;
                std::cout << get_room_obect_from_ID(room_object->get_connected_rooms()[index_of_array]).get_name() <<std::endl;
            }
        }

        std::cout << "\n\n\n\nwaiting for input\n";
        char user_input = _getch();

        switch (user_input)
        {
        case 'H':
            /* code */
            std::cout << " Up arrow:";
            Sleep(100);
            user_selection--;
            break;

        case 'P':
            /* code */
            std::cout << " Down arrow:";
            Sleep(100);
            user_selection++;
            break;
        case 'r':
            /* code */
            std::cout << " return ";
            Sleep(1000);
            user_is_selecting = false;
            break;

        case '\b':
            /* code */
            std::cout << " return ";
            Sleep(1000);
            user_is_selecting = false;
            break;
        
        case '\r':
            /* code */
            std::cout << " Enter key selected ";
            Sleep(1000);
            user_is_selecting = false;
            
            break;

        default:
            std::cout << " No valid keypress:";
            Sleep(100);
            break;
        }
    }

    

    
}


Room Room::get_room_obect_from_ID(int ID)
{
// std::cout << "Getting object from ID" <<ID << std::endl;
// Sleep(1000);


// BIG THINGS TO CORRECT, SHOULD BE  GETTER
for (Room room_object : list_of_room_objects)
{
    // std::cout << room_object.get_room_id() << "ROOM IDs in array";
    // Sleep(1000);
    if (room_object.get_room_id() == ID)
    {
        return room_object;
    }
    
}

throw "ROOM ID DOES NOT EXIST THAT U ARE TRYING TO FIND";


//

}
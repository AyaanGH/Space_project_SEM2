#include "../include/room.h"

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

    Room::list_of_rooms.push_back({roomID});
}

//static members

int Room::current_room;
std::vector<int> Room::list_of_rooms = {};


//Getters

int Room::get_room_id()
{
    return roomID;
}

std::vector<int> Room::get_list_of_rooms()
{

    return Room::list_of_rooms;
}

int Room::get_current_room()
{
    return Room::current_room;
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

//Setters


int Room::set_roomID(int roomID)
{
    if (roomID<10)
    {
        std::cout << "Cant set room ID to less than 10. Throwing error";

        std::cout << 10/0 ;
    }

    else
    {
        return roomID;
    }
    

}
int Room::set_current_room(int roomID)
{
   for(int room : Room::list_of_rooms)
   {
       if(room==roomID)
       {
           return roomID;
       }
   }

   std::cout << "Room ID doesnt exist";
   std::cout << 10/0;
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
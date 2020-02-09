#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include <array>
#include <string>
using std::string;

class Room

{

private:

    static int current_room;


    static std::vector<int> list_of_rooms;

    int roomID;
    std::array<int, 4> connected_rooms; // {north,east,south,west}
    string description;
    string name;

public:
    //constructor
    Room(int roomID, string name, string description, std::array<int, 4> connected_rooms);
    

    //getters

    int get_room_id();

    std::vector<int> get_list_of_rooms();

    int get_current_room();

    std::array<int, 4> get_connected_rooms();

    string get_description();

    string get_name();

    //setters

    int set_roomID(int roomID);
    int set_current_room(int roomID);
    string set_name(string name);
    string set_description(string description);
    // int set_connected_rooms(std::array<int, 4> connected_rooms);

    //methods
};

#endif
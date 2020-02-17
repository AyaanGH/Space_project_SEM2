#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <conio.h>

//#include "player.h"
// #include "player.h"
// #include "npc.h"

using std::string;

//forward declaration

class Player;
class NPC;

class Room
{

private:
    
    static std::vector<Room> list_of_room_objects;
    
    std::vector<NPC> list_of_npc_objects;

    int roomID;
    std::array<int, 4> connected_rooms; // {north,east,south,west}
    string description;
    string name;



public:
    //member

    //constructor
    Room(int roomID, string name, string description, std::array<int, 4> connected_rooms);
    
    //getters

    int get_room_id();

    std::vector<int> get_list_of_rooms();

    // static Room get_current_room_object();

    std::array<int, 4> get_connected_rooms();

    string get_description();

    string get_name();

    static std::vector<Room> get_list_of_room_objects();

    std::vector<NPC> get_list_of_npc_objects();

    //setters

    int set_roomID(int roomID);
    // static void set_current_room(Room *room_object);
    string set_name(string name);
    string set_description(string description);
    // int set_connected_rooms(std::array<int, 4> connected_rooms);

    //methods

    void add_npc_to_list(NPC* npc_object);
    static void display_room_selection(Room *room_object, Player *player_object);
    static Room *get_room_object_from_ID(int ID);
};

#endif
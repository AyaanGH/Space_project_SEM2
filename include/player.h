#ifndef PLAYER_H
#define PLAYER_H


// #include "room.h"
//#include "npc.h"
#include <iostream>
#include <vector>
using std::string;

//forward declarations

class Room;
class Inventory;
class Quest;
// class NPCs

class Player
{
protected:
    //Attributes;
    string profile_name;

    string first_name;
    string last_name;
    int hp = 10;
    
    int strength = 5;
    int endurance = 5;
    int reflexes = 5;
    int iq = 5;
    int awarness = 5;
    int influence = 5;

    int exhaustion;
    int hunger;
    int thirst;
    

public:
    //constructor

    Inventory *inventory_object;
    Room *current_room_object;
    std::vector<Quest *> active_quests; 
    
    

    Player(string first_name, string last_name, int hp, Room *current_room_object, Inventory *inventory_object); 

    //Getters
    string get_profile_name();

    string get_first_name();
    string get_last_name();
    int get_hp();
    
    int get_strength();
    int get_endurance();
    int get_iq();
    int get_reflexes();
    int get_awarness();
    int get_influence();

    int get_exhaustion();
    int get_hunger();
    int get_thirst();
    

    // Room* get_current_room_object();

    //Setters
    void set_profile_name(string name);

    string set_first_name(string first_name);
    string set_last_name(string set_last_name);
    int set_hp(int hp);

    void set_strength(int strength);
    void set_endurance(int endurance);
    void set_iq(int iq);
    void set_reflexes(int reflexes);
    void set_influence(int influence);
    
    void set_exhaustion(int exhaustion);
    void set_hunger(int hunger);
    void set_thirst(int thirst);
    void set_awarness(int awarness);
    // void set_current_room(Room *room_object);

    //Methods

    int increase_hp(int increase_value);
    int decrease_hp(int decrease_value);

    void show_stats();

    static void display_inventory_categories(Player *player_object);
    static void display_items_in_inventory(string user_category_selection, Player *player_object);
    static void display_list_of_quests(Player *player_object);
//     static void display_detail_of_quest(Quest quest,Player *player_object);
};

#endif

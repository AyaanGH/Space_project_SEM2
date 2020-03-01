#include <iostream>
#include "../include/player.h"
#include "../include/menu.h"
#include "../include/room.h"
#include "../include/npc.h"
#include "../include/conv.h"
#include "../include/inventory.h"
#include "../include/item_class_header/item.h"
#include "../include/item_class_header/weapon.h"
#include "../include/item_class_header/apparel.h"
#include "../include/item_class_header/consumable.h"
#include <stdio.h>
#include <conio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <cstdlib>
#include <random>
#include <thread>

using std::string;

// class Conversation;

int stats_boundary_check(int &skill_points_available)
{
    int user_stat;
    do
    {
        {
            std::cin >> user_stat;

            if (user_stat <= skill_points_available && user_stat >= 0)
            {

                skill_points_available -= user_stat;
                std::cout << "\nYou have " << skill_points_available << " avaiable to allocate\n"
                          << std::endl;
                return user_stat;
            }

            else
            {
                std::cout << "Invalid input\n";
            }
        }
    } while (user_stat < 0 || user_stat > skill_points_available);

    return 0;
}
int main()
{

    Menu game_menu;

    game_menu.show_cursor(false);

    //Rooms
    Room market(10, "Marketplace", "Can purchase items", {12, -1, 14, 15});
    Room power_plant(15, "Power Plant", "Can purchase items", {-1, 10, -1, -1});
    Room dock(12, "Docks", "Space ships dock", {-1, 13, 10, -1});
    Room ship_yard(13, "Ship Yard", "Construction", {-1, -1, -1, 12});
    Room o2_farm(14, "Oxygen Farm", "Fresh air", {10, -1, -1, -1});

    //Conveersation

    Conversation buy(1, "What do you have in store?");

    Conversation walk_away(2, "Walk away");

    //Bill Internship Conversation
    Conversation not_ready{"I think I will come back later", "I'm closing shop, come back tomorrow", {}};
    

    Conversation correct_ans{"Answer is 144", "Correct! You get the job. You start tomorrow morning"};
    Conversation wrong_ans{"I think it is 120", "Wrong! You are not smart enough. Apply next year"};
    Conversation question{"Go ahead", "What is 12 x 12 ?", {&correct_ans, &wrong_ans}};

    Conversation ready{"Absolutely, bring it on!", "You seem enthusiastic, here is your first question", {&question}};
    Conversation shy{"Do I have to?", "Absolutely, no pain no gain. Here is the question", {&question}};

    Conversation internship("Ask for internship", "So you want a job huh? You got to pass the on the spot interview ...", {&ready, &shy, &not_ready});

    //William hungry conversation
    Conversation no_more_hungry{"Thanks", "", {}};
    Conversation sad{"Awww come on", "", {}};

    Conversation insecure("I don't know actually", "Are you making fun of me? DO NOT waste my time", {&sad});
    Conversation confident("I am very hungry", "You can have some of my food then", {&no_more_hungry});

    Conversation food("Ask for food", "So, are you hungry?", {&confident, &insecure});

    //Items
    Weapon pistol("Plasma Pistol", "Small range, high accuracy. Great for small-medium range space combat", "Weapons", 10, 100, 55, 70, 70);
    Consumable adrenaline("Adrenaline rush", "Surge of power with the cost of fatigue after rush", "Consumables", 3, 1, 120);
    Consumable g_force("G-Force juice", "Survive high G manoeuvres in space combat", "Consumables", 3, 1, 300);
    Apparel EVA_suit("EVA Suit", "Designed for comfort on space walks", "Apparel", 3, 10, 28);

    //Inventory
    Inventory player_inventory(50, {&pistol, &adrenaline, &g_force, &EVA_suit});

    Player myPlayer("Peter", "Parker", 100, &market, &player_inventory);

    Inventory npc1_inventory(20, {});
    Inventory npc2_inventory(12, {});
    Inventory npc3_inventory(3, {});

    //Players

    //NPCs
    NPC npc1("Bill", "the Employer", 100, &market, &npc1_inventory, {&buy, &internship, &walk_away});
    NPC npc2("Simon", "", 100, &market, &npc2_inventory, {});
    NPC npc3("William", "", 100, &dock, &npc3_inventory, {&food, &walk_away});

    // npc_option {buy(),&wallet,exit()};

    // std::cout << myItem.get_description();
    // Sleep(10000);
    // std::cout<<npc1.inventory_object->get_total_slots() << std::endl;
    // for(int i=0; i<npc1.inventory_object->get_vector_of_items().size();i++)
    // {
    //     std::cout<<npc1.inventory_object->get_vector_of_items()[i]->get_name() <<std::endl;

    // }

    // Sleep(10000);

    string name;

    int skill_points_available = 10;
    std::cout << "Enter your name: ";
    std::cin >> name;
    myPlayer.set_profile_name(name);

    Menu::clear_screen();
    Menu::slow_print("You have " + std::to_string(skill_points_available) + " skill points to spend for upgrading your stats. You start with a base of 5 in everything.", 55);
    std::cout << std::endl;
    std::cout << "Strength: ";

    myPlayer.set_strength(stats_boundary_check(skill_points_available));
    std::cout << "Endurance: ";

    myPlayer.set_endurance(stats_boundary_check(skill_points_available));
    std::cout << "IQ: ";

    myPlayer.set_iq(stats_boundary_check(skill_points_available));
    std::cout << "Influence: ";
    std::cout << std::endl;
    myPlayer.set_influence(stats_boundary_check(skill_points_available));
    std::cout << "Reflexes: ";
    std::cout << std::endl;
    myPlayer.set_reflexes(stats_boundary_check(skill_points_available));
    std::cout << "Awarness: ";

    myPlayer.set_awarness(stats_boundary_check(skill_points_available));

    Sleep(5000);

    while (true)
    {
        Menu::clear_screen();
        game_menu.show_menu_buttons();
        game_menu.check_menu_bar_button_press(&myPlayer);
    }

    // auto here = Room::get_current_room_object();

    return 0;
}

// struct Vector3
// {
//   float x;
//   float y;
//   float z;
// };

// class Player
// {
// public:
//   Player()
//   {
//     health = 100;
//     alive = true;
//     position.x = 0.f;
//     position.y = 0.0;
//     position.z = 0.f;
//   };
//   ~Player(){};

//   int health;
//   bool alive;
//   Vector3 position;
// };

// void playerMove(Player *bob)
// {
//   bob->position.x += 0.1f;
// }

//Quest stuff

// class Conversation

// {

// private:
// public:
//     string name;
//     string npc_response;
//     std::vector<Conversation> choice_list;
//     int id;

//     Conversation(int id, string name)
//     {
//             this -> name = name;
//             this -> id = id;
//     }
//     Conversation(string name, string npc_response, std::vector<Conversation> choice_list)

//     {

//         this->name = name;
//         this->npc_response = npc_response;
//         this->choice_list = choice_list;
//     }

//     //method

//     void checkID()

//     {

//     }
// };

// for (int i = 0; i < market.get_list_of_npc_objects().size(); i++)
// {
//     std::cout << market.get_list_of_npc_objects()[i].get_first_name() << " \n";
// }
#include <iostream>
#include "../include/player.h"
#include "../include/menu.h"
#include "../include/room.h"
#include "../include/npc.h"
#include "../include/conv.h"
#include "../include/item_class_header/item.h"
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

class Conversation;

int main()
{

    Menu game_menu;

    game_menu.show_cursor(false);

    Room market(10, "Marketplace", "Can purchase items", {12, -1, 14, 15});
    Room power_plant(15, "Power Plant", "Can purchase items", {-1, 10, -1, -1});
    Room dock(12, "Docks", "Space ships dock", {-1, 13, 10, -1});
    Room ship_yard(13, "Ship Yard", "Construction", {-1, -1, -1, 12});
    Room o2_farm(14, "Oxygen Farm", "Fresh air", {10, -1, -1, -1});

    Player myPlayer("Peter", "Parker", 100, &market);

    
    Conversation buy(1, "What do you have in store?");

    Conversation walk_away(2, "Walk away");

    //Bill Internship Conversation
    Conversation not_ready{"I think I will come back later", "I'm closing shop, come back tomorrow", {}};
    Conversation correct_terminate{"Thanks", "", {}};
    Conversation incorrect_terminate{"Awww come on", "", {}};

    Conversation correct_ans{"Answer is 144", "Correct! You get the job. You start tomorrow morning", {&correct_terminate}};
    Conversation wrong_ans{"I think it is 120", "Wrong! You are not smart enough. Apply next year", {&incorrect_terminate}};
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

    //Tom Quest collect conversation

    
    Conversation agree2("You've got it!", "Ok, cool I will see you later",{});
    Conversation agree("Yes sure, I have time to kill", "Well I hope you you don't kill anyone, can you bring me 5 pieces?",{&agree2,&not_ready});

    Conversation confused("Hey, you look confused","Sorry, i'm just looking for some materials, can you help me?",{&agree,&not_ready});



    NPC npc1("Bill", "the Employer", 100, &market, {&buy, &internship, &walk_away});
    NPC npc2("Tom", "", 100, &ship_yard, {&confused,&walk_away});
    NPC npc3("Simon", "", 100, &market, {});
    NPC npc4("William", "", 100, &dock, {&food, &walk_away});

    // npc_option {buy(),&wallet,exit()};
    Item myItem("Bill","Sword","Weapon",10);
    std::cout << myItem.get_description();
    Sleep(10000);

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
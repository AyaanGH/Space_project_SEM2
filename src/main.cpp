#include <iostream>
#include "../include/player.h"
#include "../include/menu.h"
#include "../include/room.h"
#include "../include/npc.h"
#include "../include/conv.h"
#include <stdio.h>
#include <conio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <cstdlib>
#include <random>

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


    Conversation food("I am hungry","Don't you have a wallet?",{});

    Conversation car("I hate walking","Me too",{});

    Conversation wallet("Ask for wallet", "Why do you want my wallet?",{&food,&car});

    Conversation buy(1, "Buy weapons");

    NPC npc("Guy", "bill", 100, &market,{&wallet,&buy});
    NPC npc2("Big", "dude", 100, &market,{});


    // npc_option {buy(),&wallet,exit()};

    Sleep(6000);
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
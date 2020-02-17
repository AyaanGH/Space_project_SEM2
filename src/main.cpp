#include <iostream>
#include "../include/player.h"
#include "../include/menu.h"
#include "../include/room.h"
#include "../include/npc.h"
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
    NPC npc("Sim","bill",100,&market);
    NPC npc2("Big","dude",100,&market);
    
    for(int i=0; i<market.get_list_of_npc_objects().size(); i++)
    {
        std::cout<<market.get_list_of_npc_objects()[i].get_first_name()<<" \n";
    }

    Sleep(19999);
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

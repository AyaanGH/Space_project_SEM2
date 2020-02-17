#include "../include/npc.h"
#include "../include/room.h"


#include <iostream>

using std::string;





// NPC::Player(string first_name, string last_name, int hp, Room *current_room_object)
// {
    


// }



//You need to use the initializer list


NPC::NPC(string first_name, string last_name, int hp, Room *current_room_object) : Player( first_name, last_name, hp, current_room_object) 
{

std::cout << current_room_object ->get_name()<<" \n";

current_room_object->add_npc_to_list({this});


}



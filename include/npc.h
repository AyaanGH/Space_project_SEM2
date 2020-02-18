#ifndef NPC_H
#define NPC_H
#include "player.h"

#include <vector>


//forward declaration
class Room;
class Conversation;

class NPC : public Player
{
protected:
    std::vector<Conversation*> npc_menu;

public:
    NPC(string first_name, string last_name, int hp, Room *current_room_object, std::vector<Conversation*> npc_menu);


    //Getter

    std::vector<Conversation*> get_npc_menu();

    //Setter

    std::vector<Conversation*> set_npc_menu(std::vector<Conversation*> npc_menu);

};

#endif


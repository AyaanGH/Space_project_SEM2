#ifndef NPC_H
#define NPC_H
#include "player.h"


#include <vector>

//forward declaration
class Room;
class Conversation;
class Inventory;
class Quest;

class NPC : public Player
{
protected:
    std::vector<Conversation *> npc_menu;

public:
    std::vector<Quest *> npc_quests;
    NPC(string first_name, string last_name, int hp, Room *current_room_object, Inventory *inventory_object, std::vector<Conversation *> npc_menu, std::vector<Quest *> npc_quests);

    //Getter

    std::vector<Conversation *> get_npc_menu();

    //Setter

    std::vector<Conversation *> set_npc_menu(std::vector<Conversation *> npc_menu);

    //Static method

    static void display_npc_menu(NPC *npc_object);
};

#endif

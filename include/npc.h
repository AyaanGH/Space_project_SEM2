#ifndef NPC_H
#define NPC_H
#include "player.h"


class NPC :public Player
{
protected:
    
public:
    // explicit NPC(string first_name, string last_name, int hp, Room *current_room_object) : Player(first_name, last_name, hp, current_room_object);

    // NPC() : Player(){};
    NPC::NPC(string first_name, string last_name, int hp,  Room *current_room_object);

    ~NPC();

    
   
};

#endif



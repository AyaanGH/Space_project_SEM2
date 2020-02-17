#ifndef NPC_H
#define NPC_H
#include "player.h"

//forward declaration
class Room;

class NPC : public Player
{
protected:

public:
    NPC(string first_name, string last_name, int hp, Room *current_room_object);
};

#endif


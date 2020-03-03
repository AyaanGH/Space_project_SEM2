#ifndef FETCH_H
#define FETCH_H

#include "quest.h"
#include <string>
#include <vector>
using std::string;

//Forward declrations

class Item;

class Fetch : public Quest
{
private:
    std::vector<Item*> quest_item_req;
public:
    Fetch(int quest_id, string quest_title, string quest_short_description, string quest_long_description, bool quest_active, bool quest_completed, std::vector<Item*> quest_item_req);
    
    
    
//Getters
std::vector<Item*> get_quest_item_req();

//Setters

std::vector<Item*> set_quest_item_req(std::vector<Item*> quest_item_req);

//Methods

virtual void display_quest_details();
};
#endif

// QuestID // unique number, primary key and autoincrement.
// QuestTitle
// QuestText
// QuestCompletedText // text displayed when you return to the NPC and finished the quest
// QuestType // Collect, Kill or Explore
// QuestItem // Collect quest: which item
// QuestAmount // Collect quest: how many to collect? Kill quest: how many to kill
// QuestMob // Kill quest: which enemy to kill ( stored as a string )
// QuestActive // is the quest currently active in game, has the player received the quest and accepted it
// QuestComplete // If it is complete the NPC should no longer be able to give it
// QuestZone // Explore quest: which zone
// QuestZoneAutoComplete // if true the quests completed when entering the zone, else go back to the NPC
// NPC_ID // which NPC has given the quest
// QuestCollected // how many items has the player collected or killed
// QuestGold // amount of gold rewarded for completing the quest
// QuestExp // amount of exp rewarded
// QuestEnabled // Is the quest enabled ( can the player receive the quest )
// QuestChain // Is it a single quest or a chain?
// QuestChainType // Is it the start of the chain, a followup or the end
// QuestChainFollowupID // if its a followup or the end, what is the previous quest

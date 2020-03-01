# Quests

Shared pointers
 choices_made = {&internship,&ready,&question,&correct_ans}, //Attribute for each conversation


Types of quest

    -> Fetch Quest
        -> if item in inventory, quest completed 

    -> Combat quest
    -> Deliver quest

        -> Escort 
        -> Destroy


QuestID // unique number, primary key and autoincrement.
QuestTitle
QuestText
QuestCompletedText // text displayed when you return to the NPC and finished the quest
QuestType // Collect, Kill or Explore
QuestItem // Collect quest: which item
QuestAmount // Collect quest: how many to collect? Kill quest: how many to kill
QuestMob // Kill quest: which enemy to kill ( stored as a string )
QuestActive // is the quest currently active in game, has the player received the quest and accepted it
QuestComplete // If it is complete the NPC should no longer be able to give it
QuestZone // Explore quest: which zone
QuestZoneAutoComplete // if true the quests completed when entering the zone, else go back to the NPC
NPC_ID // which NPC has given the quest
QuestCollected // how many items has the player collected or killed
QuestGold // amount of gold rewarded for completing the quest
QuestExp // amount of exp rewarded
QuestEnabled // Is the quest enabled ( can the player receive the quest )
QuestChain // Is it a single quest or a chain?
QuestChainType // Is it the start of the chain, a followup or the end
QuestChainFollowupID // if its a followup or the end, what is the previous quest


# Stats

-Strength : 10 
    -> Combat damage
    -> Power to push/pull/lift objects
    ->
-Endurance
    -> How many G's you can survive
    ->
    ->
-IQ
-Reflexes : 7
-Awarness
-Influence


-Exhaustion 


-Hunger /////
    -> Bigger you are, the more food you need to sustain
    -> If hunger below a certain level for a set period of time, you loose strength as you get weaker
-Thirst +++++

-Sleep
    -> Chrono Library
    -> 24hrs is 30 irl mins
        -> One elapsed second == 1 simulator minute
        -


- Show help 





# Items


-Weapons
    -> Ranged
        -> Accuracy (distance)
        ->
        -> Ammunition 

    -> Melee
-Apparel
-Consumable 
-Misc   



NPC npc3("Simon", "", 100, &market, {}, myInv(slots=10 , {&sword,&shield}));



Player(string first_name, string last_name, int hp, Room *current_room_object,)

# NPC Interaction
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                            /                                                      \ (|)      |
Display List of NPCs      \/                                                           --/\   | 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                                / (|)      |
                            /
NPC Menu                  \/ 
    |
    |---> Display list of interactions    
    
Bill The Shopkeeper

"Looking to protect yourself or deal some damage? "
-----------

- Buy stuff
- Ask him about his favourite video game
- Walk Away
 

options<3,string> {buy,custom1,exit  }
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


"No you cant have my wallet"

50 pts

Menu 1
------------------------
- "Ok fair enough"  = 0pts
-" GIVE It TO ME NOW" = 10 * intimidation_value 
-" But I din't want it in the first place " = +10 reputation 
- "I need money for food" = Persuation_stat * 4pts


Menu 2
------------------------------
- "Ok fair enough"  = 0pts
-" GIVE It TO ME NOW" = 10 * intimidation_value
-" But I din't want it in the first place " = +10 reputation 
- "Need to feed my children" = Persuation_stat * 4pts



TODO: -References, shared pointers, smart pointer, polymorphism





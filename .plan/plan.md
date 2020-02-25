# Items


-Weapons
    -> Ranged
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
                          \/
NPC Menu                  /\ 
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





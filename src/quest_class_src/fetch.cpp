
#include "../../include/quest_class_header/fetch.h"
#include "../../include/quest_class_header/quest.h"
#include "../../include/item_class_header/item.h"
#include <string>
#include <iostream>
#include "../../include/menu.h"
using std::string;





Fetch::Fetch(int quest_id, string quest_title, string quest_short_description, string quest_long_description, bool quest_active, bool quest_completed, std::vector<Item*> quest_item_req) : Quest(quest_id, quest_title, quest_short_description,  quest_long_description,  quest_active,  quest_completed)
{
    this -> quest_item_req = quest_item_req;
}




void Fetch::display_quest_details()
{
    Menu::clear_screen();

    std::cout << this -> get_quest_title() << std::endl;
    std::cout << "------------------\n\n"; 
    Menu::slow_print( this -> get_quest_long_description(),50);
    std::cout<<std::endl;


    if (quest_completed)
    {
        std::cout << "Completed\n";
    }
    else
    {
        std::cout << "Not completed\n";
    }

    if (quest_active)
    {
        std::cout<< "Quest is active\n";
    }
   
    std::cout << "Item requirments:\n";
    
    for(int i=0; i<quest_item_req.size(); i++)
    {
        std::cout << i <<". " << quest_item_req[i]->get_name() << std::endl;
    }
    
    
}
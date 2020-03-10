#include "../../include/quest_class_header/quest.h"
#include <string>
#include <iostream>
#include "../../include/menu.h"
using std::string;



Quest::Quest(int quest_id, string quest_title, string quest_short_description, string quest_long_description, bool quest_active, bool quest_completed)
{
    this -> quest_id = set_quest_id(quest_id);
    this -> quest_title = set_quest_title(quest_title);
    this -> quest_short_description = set_quest_short_description(quest_short_description);
    this -> quest_long_description = set_quest_long_description(quest_long_description);
    this -> quest_active = set_quest_active(quest_active);
    this -> quest_completed = set_quest_completed(quest_completed);
    
}



//Getters
int Quest::get_quest_id()
{

    return quest_id;
}

string Quest::get_quest_title()
{
    return quest_title;
}
string Quest::get_quest_short_description()
{
    return quest_short_description;
}
string Quest::get_quest_long_description()
{

    return quest_long_description;
}

bool Quest::get_quest_active()
{
    return quest_active;
}
bool Quest::get_quest_completed()
{
    return quest_completed;
}

//Setters
int Quest::set_quest_id(int quest_id)
{

    return quest_id;
}
string Quest::set_quest_title(string quest_title)
{

    return quest_title;
}
string Quest::set_quest_short_description(string quest_short_description)
{

    return quest_short_description;
}
string Quest::set_quest_long_description(string quest_long_description)
{
    
    return quest_long_description;
}

bool Quest::set_quest_active(bool quest_active)
{
    return quest_active;
}
bool Quest::set_quest_completed(bool quest_completed)
{
    return quest_completed;
}

//Methods
void Quest::display_quest_details()
{
    Menu::clear_screen();

    std::cout << get_quest_title() << std::endl;
    std::cout << "------------------\n\n"; 
    Menu::slow_print(get_quest_long_description(),50);
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
   
    
    
    
}
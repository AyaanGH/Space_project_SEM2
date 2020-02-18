#include "../include/npc.h"
#include "../include/room.h"
#include "../include/conv.h"
#include "../include/menu.h"

#include <iostream>
#include <vector>

using std::string;

NPC::NPC(string first_name, string last_name, int hp, Room *current_room_object, std::vector<Conversation *> npc_menu) : Player(first_name, last_name, hp, current_room_object)
{
    this->npc_menu = set_npc_menu(npc_menu);
    // std::cout << current_room_object ->get_name()<<" \n";

    for (int index = 0; index < npc_menu.size(); index++)
    {
        std::cout << npc_menu[index]->get_name() << std::endl;
    }

    current_room_object->add_npc_to_list({this});
}

//Getter

std::vector<Conversation *> NPC::get_npc_menu()

{

    return npc_menu;
}

//Setters

std::vector<Conversation *> NPC::set_npc_menu(std::vector<Conversation *> npc_menu)

{

    return npc_menu;
}

//Methods

void NPC::display_npc_menu(NPC *npc_object)

{

    int user_selection = 0;
    char user_input;
    bool user_is_selecting = true;
    int num_choice = npc_object ->get_npc_menu().size();

    if (num_choice <= 0)
    {
        Menu::clear_screen();
        std::cout <<  npc_object -> get_first_name() << "  does not want to talk to you right now..."<< std::endl;
        std::cout << "------------------\n\n";
        std::cout << "\n\n\nBackspace to return to main menu" << std::endl;
        while (true)
        {
            if (_getch() == '\b')
            {
                Menu::loading_animation();
                return;
            }
        }
    }


    
    // while (user_is_selecting)

    // {





    // }    

}

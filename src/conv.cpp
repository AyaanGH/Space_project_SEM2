

#include "../include/conv.h"
#include "../include/npc.h"
#include "../include/menu.h"
#include "../include/player.h"

#include "../include/quest_class_header/quest.h"
#include "../include/quest_class_header/fetch.h"

#include <iostream>
using std::string;
#include <array>
#include <string>
#include <vector>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>


//Static members

Player *Conversation::stored_player_object;

//constructors



Conversation::Conversation(Player *player_object)
{

    stored_player_object = player_object;
    
}

Conversation::Conversation(int id, string name)
{
    this->id = set_option_id(id);
    this->name = set_name(name);
}

//Terminate construct
Conversation::Conversation(string name, string npc_last_response)
{
    
    this->name = set_name(name);

    this->npc_response = set_npc_response(npc_last_response);

    terminate_convo = true;

    

}
//Quest
Conversation::Conversation(string name, string npc_last_response, Fetch *quest_object, bool has_quest)
{
    
    this->name = set_name(name);

    this->npc_response = set_npc_response(npc_last_response);

    this ->quest_object = quest_object;
    
    terminate_convo = true;
    
    this -> has_quest = true;

     std::cout << "DEBUG 3\n";

     std::cout << name << std::endl;
     std::cout << quest_object ->get_quest_title() << std::endl;

    std::cout << std::boolalpha << has_quest ;
    Sleep(2000);

}


Conversation::Conversation(string name, string npc_response, std::vector<Conversation *> choice_list)
{

    this->name = set_name(name);

    this->npc_response = set_npc_response(npc_response);

    this->choice_list = set_vector_of_choices(choice_list);
}

//getters

string Conversation::get_name()
{
    return name;
}

string Conversation::get_npc_response()
{
    return npc_response;
}

std::vector<Conversation *> Conversation::get_vector_of_choices()
{
    return choice_list;
}

int Conversation::get_option_id()
{
    return id;
}

//Setters

string Conversation::set_name(string name)
{
    return name;
}

string Conversation::set_npc_response(string npc_response)
{
    return npc_response;
}

std::vector<Conversation *> Conversation::set_vector_of_choices(std::vector<Conversation *> choice_list)
{
    return choice_list;
}

int Conversation::set_option_id(int id)

{
    return id;
}

// Methods

void Conversation::checkID()
{

    if (id == 1)

    {
        std::cout << "buy code";
    }

    if (id == 2)
    {
        std::cout << "exit code";
    }

    else
    {
        /* code */
    }
}

void Conversation::display_conv_menu(Conversation *conv_object, NPC *npc_object)
{

    int user_selection = 0;
    char user_input;
    bool user_is_selecting = true;
    int num_choice = conv_object->get_vector_of_choices().size();
    int time = 70;

    std::cout << "DEBUG 2";
    std::cout << std::boolalpha <<conv_object ->has_quest;
    Sleep(2000);


    if(conv_object -> has_quest == true)
    {
        Menu::clear_screen();
        std::cout << "Quest ID: " <<conv_object ->quest_object ->get_quest_id();
        Sleep(2000);
        std::cout << "Quest from  " << npc_object->get_first_name() << " " << npc_object->get_last_name() << std::endl;
        std::cout << "------------------\n\n";

        std::cout<<conv_object -> quest_object -> get_quest_title() <<std::endl;

        conv_object -> quest_object -> display_quest_details();
        std::cout << "DEBUG 1";
        Sleep(5000);

        Menu::slow_print(conv_object->quest_object->get_quest_short_description(),50);
        Conversation::stored_player_object->active_quests.push_back(conv_object -> quest_object);
        char user_input = _getch();

        
    }

    if(conv_object->terminate_convo)
    {

        Menu::clear_screen();
        std::cout << "Talking to " << npc_object->get_first_name() << " " << npc_object->get_last_name() << std::endl;
        std::cout << "------------------\n\n";
        // Sleep(1000);

        Menu::slow_print(conv_object->get_npc_response(), time);
        char user_input = _getch();
        std::cout << "\n Returning";
        Menu::loading_animation();
        return;
    }

    if (num_choice <= 0)
    {
        Menu::clear_screen();
        std::cout << "Talking to " << npc_object->get_first_name() << " " << npc_object->get_last_name() << std::endl;
        std::cout << "------------------\n\n";
        std::cout << npc_object->get_first_name() << " is done talking to you." << std::endl;
        std::cout << "\n\n\nBackspace to return to main menu" << std::endl;
        while (true)
        {
            if (_getch() == '\b')
            {
                std::cout << "Returning back to menu";
                Menu::loading_animation();
                return;
            }
        }
    }

    int saved_index;
    while (user_is_selecting)

    {
        while (true)
        {
            if (user_selection < 0)
            {
                user_selection = num_choice - 1;
            }

            if (user_selection > num_choice - 1)
            {
                user_selection = 0;
            }

            else
            {
                break;
            }
        }

        Menu::clear_screen();
        std::cout << "Talking to " << npc_object->get_first_name() << " " << npc_object->get_last_name() << std::endl;
        std::cout << "------------------\n\n";
        // Sleep(1000);

        Menu::slow_print(conv_object->get_npc_response(), time);
        time = 0;

        

        // Sleep(2500);

        std::cout << "\n\n";

        for (int index_of_array = 0; index_of_array < num_choice; index_of_array++)
        {

            if (index_of_array == user_selection)
            {

                std::cout << conv_object->get_vector_of_choices()[index_of_array]->get_name() + " <--------- " + " \n";
                saved_index = index_of_array;
            }

            else
            {

                std::cout << conv_object->get_vector_of_choices()[index_of_array]->get_name() << std::endl;
            }
        }
        char user_input = _getch();

        switch (user_input)
        {
        case 'H':

            user_selection--;
            time = 0;
            break;

        case 'P':
            user_selection++;
            time = 0;
            break;

            // case '\b':

            //     std::cout << " \n\n\nReturning back to menu";
            //     Menu::loading_animation();
            //     user_is_selecting = false;
            //     break;

        case '\r':

            Menu::loading_animation();
            user_is_selecting = false;

            Menu::clear_screen();

            //Display conv menu

            Conversation::display_conv_menu(conv_object->get_vector_of_choices()[saved_index], npc_object);
            // NPC::display_npc_menu(npc_object->get_npc_menu()[saved_index]);
            // Sleep(5000);

            break;

        default:

            break;
        }
    }
}
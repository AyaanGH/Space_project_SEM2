

#include "../include/conv.h"
// #include "../include/player.h"

#include <iostream>
using std::string;
#include <array>
#include <string>
#include <vector>

//constructors

Conversation::Conversation(int id, string name)
{
    this->id = set_option_id(id);
    this->name = set_name(name);
}

Conversation::Conversation(string name, string npc_response, std::vector<Conversation*> choice_list)
{

    this->name = set_name(name);

    this->npc_response = set_npc_response(npc_response);

    this->choice_list = set_vector_of_choices (choice_list);
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

std::vector<Conversation*> Conversation::get_vector_of_choices()
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

string Conversation::set_npc_response(string npc_reponse)
{
    return npc_response;
}

std::vector<Conversation*> Conversation::set_vector_of_choices(std::vector<Conversation*> choice_list)
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

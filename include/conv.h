#ifndef CONV_H
#define CONV_H

#include <iostream>
#include <array>
#include <vector>
using std::string;

//forward declration
class NPC;
class Quest;
class Player;
class Fetch;

class Conversation

{

protected:
    string name;
    string npc_response;
    int id;
    std::vector<Conversation *> choice_list;

public:
    bool terminate_convo = false;
    bool has_quest = false;
    static Player *stored_player_object;

    Fetch *quest_object; 

    Conversation *parent_object;

    //Defauly constructor

    Conversation();

    //Init player object constructor
    Conversation(Player *player_object);
    // Constructors
    Conversation(int id, string name);

    //Normal conversation
    Conversation(string name, string npc_response, std::vector<Conversation *> choice_list);


    //End of conversation line
    Conversation(string name, string npc_last_response);
    
    //Conv with quest 
    Conversation(string name, string npc_last_response, Fetch *quest_object, bool has_quest);


    //Deconstructor

    ~Conversation();

    //Getters

    string get_name();
    string get_npc_response();
    std::vector<Conversation *> get_vector_of_choices();
    int get_option_id();

    //Setters

    string set_name(string name);
    string set_npc_response(string npc_reponse);
    std::vector<Conversation *> set_vector_of_choices(std::vector<Conversation *> choice_list);
    int set_option_id(int id);

    // Methods

    void checkID();



    

    //Static methods


    static void display_conv_menu(Conversation *conv_object, NPC *npc_object);

    
};

#endif


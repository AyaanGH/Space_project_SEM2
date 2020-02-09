#ifndef MENU_H
#define Menu_H
#include "player.h"
#include <iostream>
#include <array>
using std::string;

class Menu
{

private:
    //Attributes

    std::array<string, 5> menu_options = {"Inventory", "Player Stats",
                                         "Interaction", "Map", "Exit"};

public:
    //Constructor
    // Menu() // {}

    //Getters

    std::array<string, 5> get_menu_options();

    //Setters

    //Methods
    void show_cursor(bool showFlag);

    void list_menu_options();

    std::array<int, 2> get_console_size_cr();

    char get_player_input();

    void clear_screen();
    void clear_screen_ansi();

    void setCursorPosition(int x, int y);

    void slow_print(string str_to_print, int time);

    void show_menu_buttons();

    void check_menu_bar_button_press(Player *player_object);

    void render_player();
    
    //void change_scene_to_player_stats();
};

// class MenuItem
// {
// protected:
//   int x;
//   int y;
//   int width;
//   int height;

// public:
//   MenuItem(int x, int y, int width, int height);
//   ~MenuItem();
//   bool checkBounds(int posX, int posY);
//   MenuItem* next;
// };

// MenuItem::MenuItem(int x, int y, int width, int height)
// {
//   this->x = x;
//   this->y = y;
//   this->width = width;
//   this->height = height;
//   this->next = 0;
// }

// MenuItem::~MenuItem()
// {
//     if (next !=0)
//     {
//     delete next;
//     }
// }
// bool MenuItem::checkBounds(int posX, int posY)
// {
//     if ( posX >= x && posX <= x+width)
//     {
//         if ( posY >= y && posY <= y+height)
//         {
//           return true;
//         }
//     }
//     return false;
// }

#endif

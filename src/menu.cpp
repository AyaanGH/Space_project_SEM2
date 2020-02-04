#include "../include/menu.h"
#include <windows.h>
#include <iostream>
using std::string;
#include <array>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <unistd.h>

//constructor

// Menu::Menu()
// {

// }

//getters

// std::array<string,5> Menu::get_menu_options()
// {

// }
//setters

//methods

std::array<int, 2> Menu::get_console_size_cr()

{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    // printf("columns: %d\n", columns);
    // printf("rows: %d\n", rows);
    std::array<int, 2> console_size_cr = {columns, rows};
    return console_size_cr;
}

void Menu::list_menu_options()

{
    // string temp = "| Inventory | | Player Stats | | Interaction | | Map | | Exit |";

    // std::cout<< temp.length();

    int console_height = get_console_size_cr()[1];
    int console_width = get_console_size_cr()[0];
    for (int i = 0; i <= (console_width / 2) - 32; i++)
    {
        std::cout << " ";
    }

    for (string option : menu_options)

    {

        std::cout << "| ";
        std::cout << option << " ";
        std::cout << "| ";
    }
    std::cout << " \n";
}

char Menu::get_player_input()
{
    char move = _getch(); //_getch loads move with one character that the user enters

    return move;
}

void Menu::show_cursor(bool showFlag)
{   

    
     HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}




// void Menu::add_cursor()
// {
//     bool showCursor = true;
 
//   HANDLE std_out = GetStdHandle(STD_OUTPUT_HANDLE); // Get standard output
//   CONSOLE_CURSOR_INFO cursorInfo;                   // 
//   GetConsoleCursorInfo(OUT, &cursorInfo);           // Get cursorinfo from output
//   cursorInfo.bVisible = showCursor;                 // Set flag visible.
//   SetConsoleCursorInfo(OUT, &cursorInfo);
// }
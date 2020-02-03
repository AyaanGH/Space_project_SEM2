#include "../include/menu.h"
#include <windows.h>
#include <iostream>

using std::string;
#include <array>
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
    for (int i = 0; i <= (console_width / 2) -32; i++)
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
#include "../include/menu.h"
#include "../include/room.h"
// #include "../include/player.h"
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

    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}

void Menu::clear_screen_ansi()

{

    std::cout << "\033[2J\033[1;1H";
}

void Menu::clear_screen()

{

    // Get the Win32 handle representing standard output.
    // This generally only has to be done once, so we make it static.
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    COORD topLeft = {0, 0};

    // std::cout uses a buffer to batch writes to the underlying console.
    // We need to flush that to the console because we're circumventing
    // std::cout entirely; after we clear the console, we don't want
    // stale buffered text to randomly be written out.
    std::cout.flush();

    // Figure out the current width and height of the console window
    if (!GetConsoleScreenBufferInfo(hOut, &csbi))
    {
        // TODO: Handle failure!
        abort();
    }
    DWORD length = csbi.dwSize.X * csbi.dwSize.Y;

    DWORD written;

    // Flood-fill the console with spaces to clear it
    FillConsoleOutputCharacter(hOut, TEXT(' '), length, topLeft, &written);

    // Reset the attributes of every character to the default.
    // This clears all background colour formatting, if any.
    FillConsoleOutputAttribute(hOut, csbi.wAttributes, length, topLeft, &written);

    // Move the cursor back to the top left for the next sequence of writes
    SetConsoleCursorPosition(hOut, topLeft);
}

void Menu::setCursorPosition(int x, int y)
{
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout.flush();
    COORD coord = {(SHORT)x, (SHORT)y};
    SetConsoleCursorPosition(hOut, coord);
}

void Menu::slow_print(string str_to_print, int time)
{

    //50 ms
    for (int i = 0; i < str_to_print.length(); i++)
    {

        std::cout << str_to_print[i];

        Sleep(time);
    }
}

void Menu::show_menu_buttons()
{

    //TODO: Show current room in menu
    int width = get_console_size_cr()[0];
    int height = get_console_size_cr()[1];
    show_cursor(false);
    setCursorPosition((width / 2), height - 5);

    const char *longString =
        R""""(
                         +---------------------++--------------------++--------------------++--------------------++--------------------+
                         |                     ||                    ||                    ||                    ||                    |
                         |    I - Inventory    ||  P - Player Stats  ||   E - Interaction  ||      M - Map       ||     J - Journal    |  
                         |                     ||                    ||                    ||                    ||                    |
                         +---------------------++--------------------++--------------------++--------------------++--------------------+)"""";

    // char ship[5][20] =
    //     {
    //         "__",
    //         "| \\",
    //         "=[_H)--.____",
    //         "=[+-,------'",
    //         " [_/"};


    std::cout << longString;

}

void Menu::check_menu_bar_button_press(Player *player_object)
{

    switch (get_player_input())
    {

    case 'i':

        break;
    case 'p':
        clear_screen();

        player_object->show_stats();

        break;
    case 'e':

        break;
    case 'j':

        break;
    case 'm':

        clear_screen();
        Room::display_room_selection((player_object->get_current_room_object()), player_object);

        break;
    }
}

// void

// void Menu::add_cursor()
// {
//     bool showCursor = true;

//   HANDLE std_out = GetStdHandle(STD_OUTPUT_HANDLE); // Get standard output
//   CONSOLE_CURSOR_INFO cursorInfo;                   //
//   GetConsoleCursorInfo(OUT, &cursorInfo);           // Get cursorinfo from output
//   cursorInfo.bVisible = showCursor;                 // Set flag visible.
//   SetConsoleCursorInfo(OUT, &cursorInfo);
// }
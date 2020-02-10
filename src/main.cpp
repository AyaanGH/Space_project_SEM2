#include <iostream>
#include "../include/player.h"
#include "../include/menu.h"
#include "../include/room.h"
#include <stdio.h>
#include <conio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <cstdlib>
#include <random>
//TODO <conio.h>
//TODO <stdio.h>

//https://stackoverflow.com/questions/34842526/update-console-without-flickering-c

using std::string;

int main()
{

    Menu game_menu;
    Player myPlayer("Bill","Nye",100);

    Room bedroom(10,"bedroom","Where you sleep",{11,-1,-1,-1});
    Room bathroom(11,"bathroom","Where you brush your teeth",{-1,-1,10,-1});


    //Changes to object
    // Room::set_current_room(&bedroom);

    myPlayer.set_current_room(&bedroom); 

    std::cout << "Connected rooms: \n"; 

    Room::show_adjacent_rooms(&bedroom);



    for(Room room_object: Room::get_list_of_room_objects() )
    {
        std::cout << room_object.get_name() << std::endl;

        // if(room_object.get_room_id() == Room::get_current_room_object().get_room_id())
        // {

        //     room_selected = &Room::get_current_room_object();
        // }

    }

    Sleep(3000);

    Menu::clear_screen();

    game_menu.show_menu_buttons();
    game_menu.check_menu_bar_button_press(&myPlayer);



    
   //Question. Want to reassign this to a easier to type variable.

    // auto here = Room::get_current_room_object();
    
   

    
    //int user_selection;
    // while (true)
    // {
    //     /* code */

    //     if user_selection < choices and > .....
    //     correct it
    // }
    

    // {
    //     std::cout << con_room <<" ";
    // for(int con_room : bedroom.get_connected_rooms())
    // {
    //     std::cout << con_room <<" ";
    // }
    // std::cout << std::endl;

    // std::cout << "Current room: " << bedroom.get_current_room() << std::endl;

    // std::cout << "Room ID: " << bedroom.get_room_id() << std::endl;

    // std::cout << "Name : " << bedroom.get_name() << std::endl;
    // std::cout << "Description" << bedroom.get_description() << std::endl;

    // std::cout << "List of rooms: ";
    // for(int room : bedroom.get_list_of_rooms())
    // {
    //     std::cout << room <<" ";
    // }



    // Player myPlayer("Bill","Nye",100);
    
    // game_menu.show_cursor(false);

    // game_menu.clear_screen();   
    // game_menu.show_menu_buttons();
    // game_menu.check_menu_bar_button_press(&myPlayer);
       
        

/*

           Docks

    -----> Hotel
           Market
           Ship


*\
    
    

    // std::cout<< " \n\n\n\n\n\n";
    // game_menu.list_menu_options();
    
    //game_menu.print_border();
   
    //  int width = game_menu.get_console_size_cr()[0];
    //  int height = game_menu.get_console_size_cr()[1];

    
     //printf("%c[%dmColouring in terminal is easy!\n", 0x1B, 32);
     //game_menu.slow_print("The slow printing feature is a cool way to display large chunks of text in an easy to read manner. Makes it interesting.",50);
   
    
        /* code */
    // int random_integer1; 
    // int random_integer2;
    // int lowest=1, highest= 20; 
    // int range=(highest-lowest)+1; 
    // for(int index=0; index<20; index++)
    // { 
    // random_integer1 = lowest+int(range*rand()/(RAND_MAX + 1.0));
    // random_integer2 = lowest+int(range*rand()/(RAND_MAX + 1.0)); 
    // game_menu.setCursorPosition(random_integer1,random_integer2);
    // std::cout << "." ;
    // Sleep(100);
    // }
    
    return 0;
}



// std::random_device rd; // obtain a random number from hardware
//     std::mt19937 eng(rd()); // seed the generator
//     std::uniform_int_distribution<> distr(0, width); // define the range
    
//     for(int n=0; n<800; ++n)
//     {
//     game_menu.show_cursor(false);
//          int x = distr(eng);
//          int y = distr(eng); // generate numbers
//         game_menu.setCursorPosition(x,y);
//         game_menu.show_cursor(false);
//         std::cout << "." ;
//         Sleep(10);

    
    // game_menu.

    // Player player1("Peter", "Parker", 10);


   

    // std::cout << player1.get_first_name() << std::endl;

    // std::cout << player1.get_last_name() << std::endl;

    // std::cout << player1.get_hp() << std::endl;

    // player1.set_hp(-5);

    // std::cout << player1.get_hp() << std::endl;

    // player1.decrease_hp(5);

    // std::cout << player1.get_hp() << std::endl;

    // int age;

 
// while(true)
// {
// char move = _getch(); //_getch loads move with one character that the user enters

//    if (move == 'H')
//    {

//        std::cout<< "UP KEY PRESSED\n";

//        printf("%c[%dmHELLO!\n", 0x1B, 32);
//        printf("\x1B[31mTexting\033[0m\t\t");

//    }

// }

/* code */

// Beep(523,5000); // 523 hertz (C5) for 500 milliseconds
//     std::cin.get(); // wait
//     game_menu.show_cursor(false);
//     game_menu.slow_print("Note that this eliminates the flicker, too, since there's no longer any need to clear the screen completely before redrawing -- you can simply change what needs changing without doing an intermediate clear, so the previous frame is incrementally updated, persisting until it's completely up to date.",50);

// while(true)
// {
// int int_width = game_menu.get_console_size_cr()[0];
// game_menu.list_menu_options();

// if (int_width != game_menu.get_console_size_cr()[0] )
// int int_width = game_menu.get_console_size_cr()[0];
// game_menu.list_menu_options();

// if (int_width != game_menu.get_console_size_cr()[0] )

//  system("cls");

// }

//  for (;;) {

//         std::cout << "\b\b\b\b\b\b\b\b\b\bLoading   " << std::flush;
//         Sleep(500);
//         std::cout << "\b\b\b\b\b\b\b\b\b\bLOading   " << std::flush;
//         Sleep(500);
//         std::cout << "\b\b\b\b\b\b\b\b\b\bLoAding   " << std::flush;
//         Sleep(500);
//         std::cout << "\b\b\b\b\b\b\b\b\b\bLoaDing   " << std::flush;
//         Sleep(500);
//         std::cout << "\b\b\b\b\b\b\b\b\b\bLoadIng   " << std::flush;
//         Sleep(500);
//         std::cout << "\b\b\b\b\b\b\b\b\b\bLoadiNg   " << std::flush;
//         Sleep(500);
//         std::cout << "\b\b\b\b\b\b\b\b\b\bLoadinG   " << std::flush;
//         Sleep(500);
//         std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.  " << std::flush;
//         Sleep(500);
//         std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.." << std::flush;
//         Sleep(500);
//         std::cout << "\b\b\b\b\b\b\b\b\b\bLoading..." << std::flush;
//         Sleep(500);
//     }

//   std::cout << '-' << std::flush;
//     for (;;) {
//         //Sleep(100);
//         std::cout << "\b\\" << std::flush;
//         // Sleep(100);
//         std::cout << "\b|" << std::flush;
//         // Sleep(100);
//         std::cout << "\b/" << std::flush;
//         // Sleep(100);
//         std::cout << "\b-" << std::flush;

//     }

// std::cout << "Do you want to see the secret word? (y/n): \n";
// 	   char move = _getch(); //_getch loads move with one character that the user enters

//        if (move == 'H')
//        {

//            std::cout<< "UP KEY PRESSED\n";

//            printf("%c[%dmHELLO!\n", 0x1B, 32);
//            printf("\x1B[31mTexting\033[0m\t\t");

//        }

//        if (move == 'P')
//        {
//            std::cout<< "DOWN KEY PRESSEd \n";
//        }

//        std::cout << move << std::endl;

// struct Vector3
// {
//   float x;
//   float y;
//   float z;
// };

// class Player
// {
// public:
//   Player()
//   {
//     health = 100;
//     alive = true;
//     position.x = 0.f;
//     position.y = 0.0;
//     position.z = 0.f;
//   };
//   ~Player(){};

//   int health;
//   bool alive;
//   Vector3 position;
// };

// void playerMove(Player *bob)
// {
//   bob->position.x += 0.1f;
// }

// void menu()

// {

//    int col_index = 0;
//    while(true)
//    {
//      char move = _getch(); //_getch loads move with one character that the user enters
//        if (move == 'H')
//        {
//            col_index++;
//         //    std::cout<< "UP KEY PRESSED\n";

//         //    printf("%c[%dmHELLO!\n", 0x1B, 32);
//         //    printf("\x1B[31mTexting\033[0m\t\t");

//        }

//        if (move == 'P')
//        {
//            col_index--;
//        }

//        else
//        {
//            continue;
//        }
//        /* code */

//    std::vector<string> menuItems {"Inventory ","Map ","Interact ","Player_stats "};
//    system("cls");

//    for (int i = 0; i < 4; i++)
//    {
//        if (i == col_index)
//        {
//         //    printf("%c[%dm%e\n", 0x1B, 32,menuItems[i]);

//         //    std::cout << "0x1B[32mHello" + menuItems[i];

//         std::cout<<"\033[0;35mhello" << std::endl;
//        //g++ .\src\main.cpp .\src\player.cpp -o .\builds\test
//         }

//         else
//         {
//             std::cout << (menuItems[i]);
//         }
//    }

//     }

// }

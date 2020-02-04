#include <iostream>
#include "../include/player.h"
#include "../include/menu.h"
#include <stdio.h>
#include <conio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
//TODO <conio.h>
//TODO <stdio.h>

//https://stackoverflow.com/questions/34842526/update-console-without-flickering-c

using std::string;


int main()
{  

    
    
   

    
    Menu game_menu;

    game_menu.list_menu_options();


    Player player1("Simon", "Billing", 10);


    std::cout << player1.get_first_name() << std::endl;

    std::cout << player1.get_last_name() << std::endl;

    std::cout << player1.get_hp() << std::endl;

    player1.set_hp(-5);

    std::cout << player1.get_hp() << std::endl;

    player1.decrease_hp(5);

    std::cout << player1.get_hp() << std::endl;


    int age;

    game_menu.show_cursor(false);
    game_menu.slow_print("Note that this eliminates the flicker, too, since there's no longer any need to clear the screen completely before redrawing -- you can simply change what needs changing without doing an intermediate clear, so the previous frame is incrementally updated, persisting until it's completely up to date.",50);
    
    


    

    







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
     return 0;

    /* code */


}

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

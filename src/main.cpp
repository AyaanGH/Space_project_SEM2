#include <iostream>
#include "../include/player.h"
#include <stdio.h>
#include <conio.h>
#include <string>
#include <vector>
#include <stdlib.h>
//TODO <conio.h>
//TODO <stdio.h>

using std::string;



int main()
{  

    
   

    Player player1("Simon", "Billing", 10);

    std::cout << player1.get_first_name() << std::endl;

    std::cout << player1.get_last_name() << std::endl;

    std::cout << player1.get_hp() << std::endl;

    player1.set_hp(-5);

    std::cout << player1.get_hp() << std::endl;

    player1.decrease_hp(5);

    std::cout << player1.get_hp() << std::endl;
   
   
     return 0;
}
    /* code */





  



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

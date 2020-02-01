#include <iostream>
#include "../include/player.h"

using std::string;

int main()
{
    /* code */

    //Create player object

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

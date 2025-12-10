/******************************************
*   Console Lab   
* 
*   Console tools for simple uses.
*   2025 >_
*   
*
*******************************************/
#include <bits/stdc++.h>
#include "include/CelsiusFahrenheit.h"

bool run = true;

int main()
{
    std::cout << "\033[1;36mWelcome \033[0m";
    system("hostname"); 
    std::cout << std::endl;
    while(run)
    {
        int option;
        //Menu
        std::cout << "Xx============ Console Lab ============xX" << std::endl;
        std::cout << "1) Convertors\n";
        std::cout << "Xx=====================================xX" << std::endl;
        std::cout << "Type Zero(0) to exit" << std::endl;
        std::cout << "Enter a number: ";
        if(std::cin >> option && option >= 0 && option <= 5)
        {
            if(option == 0)
            {
                run = false;
            }
            else if(option == 1)
            {
                std::cout << "\033[3J\033[2J\033[H" << std::flush; // to clear terminal using ASCII esc
                convertor();
            }
            std::cout << std::endl;
        }
        else
        {
            std::cout << "\033[0;31m!! invalid option please enter a number form 1-5.\033[0m\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Removes garbage buffer value like string
        }
        std::cout << "\033[3J\033[2J\033[H" << std::flush;
    }

    return 0;
}

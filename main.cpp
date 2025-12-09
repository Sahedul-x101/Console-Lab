/******************************************
*   Console Lab   
* 
*   Console tools for simple uses.
*   2025 >_
*   
*
*******************************************/
#include <bits/stdc++.h>
#include <cstdlib>
#include "include/CelsiusFahrenheit.h"

int main()
{
    bool run = true;
    std::cout << "\033[1;36mWelcome \033[0m";
    system("hostname"); 
    std::cout << std::endl;
    while(run)
    {
        std::cout << "Type Zero(0) to exit" << std::endl;
        int option;
        std::cout << "Xx=========== Console Lab ===========xX" << std::endl;
        std::cout << "1) Convertors\n";
        std::cout << "Xx===================================xX" << std::endl;
        std::cout << "Enter a number: ";
        std::cin >> option;

        if(option == 0)
        {
            run = false;
        }
        else if(option == 1)
        {
            convertor();
        }
        else if(option == 2)
        {

        }

        
    }

    return 0;
}

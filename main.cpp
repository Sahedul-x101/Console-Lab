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
    std::cout << "\033[1;31mWelcome \033[0m";
    system("hostname");
    std::cout << std::endl;
    
    while(true)
    {
        int option;
        std::cout << "Xx=========== Console Lab ===========xX" << std::endl;
        std::cout << "1) Convertor\n";
        std::cout << "Xx===================================xX" << std::endl;
        std::cin >> option;

        if(option == 1)
        {
            convertor();
        }
        else if(option == 2)
        {

        }
        
    }

    return 0;
}

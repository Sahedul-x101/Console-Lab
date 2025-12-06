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

int main()
{
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
        
    }

    return 0;
}
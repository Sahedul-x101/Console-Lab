#include <iostream>
#include "../include/CelsiusFahrenheit.h"


void convertor()
{
    int option;
    std::cout << " Welcome to the convertor app\n";
    std::cout << "1) Celsius to Fahrenheit\n";
    std::cout << "2) Fahrenheit to Celsius\n";
    std::cout << "Enter your option: ";
    std::cin >> option;

    if(option == 1)
    {
        double num;
        std::cin >> num;
        std::cout << celsiusToFahrenheit(num) << "\n";
    }
    else if(option == 2)
    {
        double num2;
        std::cin >> num2;
        std::cout << fahrenheitToCelsius(num2) << "\n";
    }
}

double celsiusToFahrenheit(double celsius)
{
    double Fahernheit = celsius * 9/5.0 + 32;
    return Fahernheit; 
};

double fahrenheitToCelsius(double fahrenheit)
{
    double Celsius = (fahrenheit - 32) * 5/9.0;
    return Celsius;
};
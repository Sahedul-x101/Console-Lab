#include <iostream>
#include "../include/CelsiusFahrenheit.h"


void convertor()
{
    int option;
    std::cout << " Welcome to the convertor app\n";
    std::cout << "1) Celsius to Fahrenheit\n";
    std::cout << "2) Fahrenheit to Celsius\n";
    std::cout << "3) Speed of Light per Second Kilometre\n";
    std::cout << "Enter your option: ";
    std::cin >> option;

    if(option == 1)
    {
        double celsius;
        std::cout << "Enter the celsius value: ";
        std::cin >> celsius;
        std::cout << "Fahrenheit: " << celsiusToFahrenheit(celsius) << "°F" << "\n";
    }
    else if(option == 2)
    {
        double fahrenheit;
        std::cout << "Enter the fahrenheit value: ";
        std::cin >> fahrenheit;
        std::cout << "Celsius: "<< fahrenheitToCelsius(fahrenheit) << "°C"<< "\n";
    }
    else if(option == 3)
    {
        double secound;
        std::cout << "Secound to kilometre: ";
        std::cin >> secound;
        std::cout << speedOfLight(secound) << " Kilometer" << "\n";
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

double speedOfLight(double second)
{
    double Kilometre = (299792.458 * second);
    return Kilometre;
};
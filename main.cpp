#include <iostream>
#include <cmath>
float f, c, r, k;
int choice;
char choie;




void toCelsius()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Type in the Celsius: ";
    std::cin >> c;
}

void toFahrenhiet()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Type in the Fahrenheit: ";
    std::cin >> f;
}

void toRankine()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Type in the Rankine: ";
    std::cin >> r;
}

void toKelvin()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Type in the Kelvin: ";
    std::cin >> k;
}

int main() 
{

    s: 
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Which scale do you want to start with: ";
    std::cout << std::endl;
    std::cout << "(F for Fahrenheit, C for Celsius, R for Rankine and K for Kelvin): ";
    std::cin >> choie;

    if(choie == 'C')
        toCelsius();
    if(choie == 'F')
        toFahrenhiet();
    if(choie == 'R')
        toRankine();
    if(choie == 'K')
        toKelvin();

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "What do you want to convert it to? (1 for Fahrenheit, 2 for Celsius, 3 for Rankine and 4 for Kelvin): ";
    std::cin >> choice;
    
    switch(choice)
    {
        case 1 : 
            f = (1.8 * c) + 32;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "Fahrenheit: " << f;
        goto s;
        break;
         case 2 : 
            c = (f - 32) / 1.8;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "Celsius: " << c;
        goto s; 
        break;
         case 3 : 
            r = f + 459.7;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "Rankine: " << r;
        goto s;
        break;
         case 4 : 
            k = c + 273.2;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "Kelvin: " << k;
        goto s;
        break;
    }

    
    return 0;  
}
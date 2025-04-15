#include <iostream>

int main(){
    int goldinv = 100;
    int cost = 10;
    int potions;

    std::cout << "Welcome to my shop! How many potions would you like? ";
    std::cin >> potions;
    int quantityCost = potions * cost;
    std::cout << "\nAlright! That will be " << quantityCost << "G!" << std::endl;

    if (goldinv > quantityCost)
    {
        goldinv -= quantityCost;

        std::cout << "\nThank you for your purchase!\nYou bought " << potions <<
        " potions.\n" << goldinv << "G left" << std::endl;
    }
    else
    {
        std::cout << "\nOH! Sorry, you can't afford that.\nCome back when you're a little, mmmm RICHER!" << std::endl;
    }
    
    return 0;
}
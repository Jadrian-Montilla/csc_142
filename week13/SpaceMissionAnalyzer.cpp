#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    int crew;
    double distance, fuel, ship_weight, support;

    std::cout << "Enter distance to new location (Million km): ";
    std::cin >> distance;
    std::cout << "How much fuel (Tons): ";
    std::cin >> fuel;
    std::cout << "Number of members: ";
    std::cin >> crew;
    std::cout << "Enter ship weight (Tons): ";
    std::cin >> ship_weight;
    std::cout << "How long will support last (Days): ";
    std::cin >> support;

    double efficiency = (fuel / ship_weight) * 100;
    double speed = (fuel * 10000) / (crew * ship_weight);
    double travel = (distance * 1000000) / speed;

    bool possible = (efficiency >= 20.0) && 
    (support >= travel + 10) && 
    (crew >= 2 && crew <= 8) && 
    (ship_weight < 500);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nFuel efficiency: " << efficiency << "%" << std::endl;

    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Estmimate speed: " << speed << " km/day" << std::endl;
    std::cout << "Estmimate travel time: " << travel << " day(s)" << std::endl;

    std::cout << "\nMission Status: ";
    if (possible)
    {
        std::cout << "Good to go, get ready for smooth sailing!\n" << std::endl;
    }
    else
    {
        std::cout << "Nahhh, not possible. Sorry.\n" << std::endl;
    }
    
    return 0;
}
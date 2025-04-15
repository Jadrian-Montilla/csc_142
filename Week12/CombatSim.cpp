#include <iostream>
#include <ctime>

int rolls(int sides){
    return (rand()% sides) + 1;
}

int main(){
    srand(time(0));

    int heroHP = 20;
    int heroDF = 15;
    int gobHP = 10;
    int gobDF = 12;

    std::cout << "-- Battle Start!! --" << std::endl;

    while (heroHP > 0 && gobHP > 0)
    {
        std::cout << "\n> Hero's turn!" << std::endl;
        int hRoll = rolls(20);
        std::cout << "The Hero rolls...\nand gets a " << hRoll << "!" << std::endl;
        if (hRoll >= gobDF)
        {
            int heroDMG = rolls(8);
            gobHP -= heroDMG;
            std::cout << "\nThe Hero strikes the Goblin for " << heroDMG << " damage!\nThe Goblin has " << 
            gobHP << "HP left" << std::endl;
        }
        else
        {
            std::cout << "\nThe Hero whiffed the attack!" << std::endl;
        }
        
        if (gobHP <= 0)
        {
            break;
        }
        

        std::cout << "\n> Goblin's turn!" << std::endl;
        int gRoll = rolls(20);
        std::cout << "The Goblin rolls...\nand gets a " << gRoll << "!" << std::endl;
        if (gRoll >=heroDF)
        {
            int gobDMG = rolls(6);
            heroHP -= gobDMG;
            std::cout << "\nThe Goblin strikes the Hero for " << gobDMG << " damage!\nThe Hero has " << 
            heroHP << "HP left" << std::endl;
        }
        else
        {
            std::cout << "\nThe Goblin whiffed the attack!" << std::endl;
        }

        if (heroHP <= 0)
        {
            break;
        }       
    }
    
    if (heroHP <= 0)
    {
        std::cout << "The winner is...\nThe Goblin! Oh dear!" << std::endl;
    }
    else
    {
        std::cout << "The winner is...\nThe Hero! Hooray!" << std::endl;
    }

    return 0;
}

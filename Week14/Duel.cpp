#include <iostream>
#include <ctime>

int roll_attack(){
    return rand() % 10 + 1;
}

int roll_defense(){
    return rand() % 10 + 1;
}

bool is_hit(int att, int def){
    return att > def;
}

void duel(int rounds){
    int obi_wins = 0, maul_wins = 0;
    
    for (int i = 1; i <= rounds; i++)
    {
        int fight = roll_attack();
        int defend = roll_defense();
        std::cout << "-- Round " << i << " --\nObi-Wan strikes with " << fight << ", Maul blocks with " << defend;

        if (is_hit(fight, defend))
        {
            std::cout << ": STRUCK !\n" << std::endl;
            obi_wins +=1 ;
        }
        else
        {
            std::cout << ": BLOCKED !\n" << std::endl;
            maul_wins += 1;
        }
        
    }

    std::cout << "Obi-Wan - " << obi_wins << "\nDarth Maul - " << maul_wins << "\n\nThe Winner is . . ." << std::endl;

    if (obi_wins > maul_wins)
    {
        std::cout << "OBI-WAN ! !" << std::endl;
    }
    else if (obi_wins < maul_wins)
    {
        std::cout << "DARTH MAUL ! !" << std::endl;
    }
    else
    {
        std::cout << "No one . . . ?" << std::endl;
    }
    
}

int main(){
    srand(time(0));
    duel(5);
    return 0;
}
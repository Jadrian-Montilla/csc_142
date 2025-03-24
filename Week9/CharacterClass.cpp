#include <iostream>

enum CharacterClass { Warrior, Mage, Archer, Rogue};

struct Character{
    std::string name;
    CharacterClass type;
    int hp;
    float st;
};

std::string classToString(CharacterClass type) {
    switch(type) {
        case CharacterClass::Warrior:   return "Warrior";
        case CharacterClass::Mage:      return "Mage";
        case CharacterClass::Archer:    return "Archer";
        case CharacterClass::Rogue:     return "Rogue";
        default:                        return "Mystery";
    }
}

int main(){
    Character characters[5]{
        {"Simon", CharacterClass::Mage, 180, 100.5f},
        {"Pom", CharacterClass::Archer, 110, 80.0f},
        {"Nisci", CharacterClass::Mage, 205, 90.5f},
        {"Sunday", CharacterClass::Warrior, 150, 120.0f},
        {"Cotton", CharacterClass::Rogue, 100, 75.5f}
    };

    std::cout << "Party:\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Name" << characters[i].name << ", Type: " << classToString(characters[i].type)
        << ", Health: " << characters[i].hp << ", Strength: " << characters[i].st << std::endl;
    }
    
    int healthsum = 0;
    for (int i = 0; i < 4; i++)
    {
        healthsum += characters[i].hp;
    }
    
    float averageHP = static_cast<float>(healthsum) / 4.0f;
    std::cout << "Health average: " << averageHP << std::endl;

    return 0;
}
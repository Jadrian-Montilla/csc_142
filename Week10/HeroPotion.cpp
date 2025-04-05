#include <iostream>

void drinkPotion(int& hp, int heal){
    hp += heal;
}

void damageHero(int* hp, int damage){
    *hp -= damage;
}

int main(){
    int heroHP = 10;

    std::cout << "\nThe Hero begins their journey at " << heroHP << " HP." << std::endl;
    std::cout << "The Hero found a health potion! (+10 HP)" << std::endl;
    drinkPotion(heroHP, 10);
    std::cout << "Current HP: " << heroHP << std::endl;
    std::cout << "Oh no! The Hero came across an evil goblin! (-6 HP)" << std::endl;
    damageHero(&heroHP, 6);
    std::cout << "The Hero got away before it became too bad.\nCurrent HP: " << heroHP << std::endl;

    return 0;
}

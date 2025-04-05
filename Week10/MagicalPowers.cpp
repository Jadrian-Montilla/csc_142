#include <iostream>

class MagicalItem
{
private:
    std::string name;
    std::string power;
    int usages;
public:
    MagicalItem(const std::string& name, const std::string& power, int usages):
        name(name), power(power), usages(usages){std::cout << "This new ability... " << name 
        << " (" << power << ") granted to you, has " << usages << " uses!\n";
    }

    void shots(){
        if (usages > 0){
            usages--;
            std::cout << name << " has been fired!\n" << usages << " left..." << std::endl; 
        }
        else
        {
            std::cout << "You're all out of " << name << "!" << std::endl;
        }
        
    }

    void blocked(){
        if (usages > 0)
        {
            usages--;
            std::cout << name << " was used to block your blow!\n" << usages << " left..." << std::endl;
        }
        else
        {
            std::cout << name << " has lost its aura!" << std::endl;
        }
        
    }
};

int main(){
    MagicalItem shield("Shield of Madness", "Chaos Power", 10);
    shield.blocked();
    shield.shots();

    MagicalItem pistol("Divine Arrow", "Purity", 5);
    pistol.shots();
    pistol.shots();
    pistol.shots();
    shield.blocked();
    pistol.shots();
    pistol.shots();
    pistol.shots();

    return 0;
}

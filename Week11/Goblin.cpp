#include <iostream>

class Goblin
{
private:
    /* data */
public:
    Goblin(/* args */){
        std::cout << "\nA Goblin has appeared!!" << std::endl;
    };
    ~Goblin(){
        std::cout << ".\n.\n.\nThe Goblin has blown up!!\nFuneral will be scheduled 4 days from now." << std::endl;
    };
};

int main(){
    Goblin gob;

    return 0;
}

#include <iostream>

void countdown(int seconds){
    std::cout << "Jumping in ";
    for (int i = seconds; i > 0; i--)
    {
        std::cout << i << "..." << std::endl;
    }
    std::cout << "Punch it, Chewie!" << std::endl;
}

int main(){
    int number = 5;
    countdown(number);
    return 0;
}

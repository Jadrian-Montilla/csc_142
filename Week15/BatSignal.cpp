#include <iostream>

int main(){
    std::string name;
    std::string location;

    std::cout << "Who did you see? ";
    std::getline(std::cin, name);
    std::cout << "Where did you see them? ";
    std::getline(std::cin, location);

    std::pair<std::string, std::string> sig(name, location);

    std::cout << sig.first << " was spotted at " << sig.second << "!" << std::endl;

    return 0;
}

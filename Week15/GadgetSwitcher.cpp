#include <iostream>

int main(){
    std::string first = "Batarang";
    std::string second = "Grappling Hook";

    std::cout << "\nPrimary Gadget: " << first << "\nSecondary Gadget: " << second << std::endl;

    std::swap(first, second);

    std::cout << "\nPrimary Gadget: " << first << "\nSecondary Gadget: " << second << std::endl;

    return 0;
}
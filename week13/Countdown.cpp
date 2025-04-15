#include <iostream>

int main(){
    for (int i = 10; i > 0; i--)
    {
        std::cout << i << "...\n";
        if (i == 1)
        {
            std::cout << "We have lift off!" << std::endl;
        }
        
    }
    return 0;
}

#include <iostream>

class Inventory
{
private:
    std::string* items;
    int capacity;
    int number;
public:
    Inventory(int cap = 10)
        : capacity(cap), number(0) {
            items = new std::string[capacity];
        };
    Inventory(const Inventory& other)
        : capacity(other.capacity), number(other.number) {
            items = new std::string[capacity];
            for (int i = 0; i < number; i++)
            {
                items[i] = other.items[i];
            }
            
        };
    ~Inventory(){
        delete[] items;
    };

    void addItem (const std::string& name){
        if (number < capacity) {
            items[number++] = name;
        }
        else
        {
            std::cout << "You're out of room to add more items!" << std::endl;
        }
        
    }

    void showInvent () const {
        for (int i = 0; i < number; i++)
        {
            std::cout << " > " << items[i] << std::endl;
        }
        
    }
};

int main(){
    Inventory bag;
    bag.addItem("Magic Sword");
    bag.addItem("Potion of Healing");

    Inventory purse = bag;
    purse.addItem("Bag of Holding");

    bag.addItem("Cat's Stone");

    std::cout << "\nPrimary Inventory" <<  std::endl;
    bag.showInvent();

    std::cout << "\nSecondary Inventory" << std::endl;
    purse.showInvent();

    return 0;
}
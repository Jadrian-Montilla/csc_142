#include <iostream>

int main(){
    int age;
    std::string name;

    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Now enter your age: ";
    std::cin >> age;

    int days = age * 365;

    std::cout << "\nGreetings, " << name << ". Today you are " << age << " years old.\nIn days that is " << days << " days." << std::endl;
}

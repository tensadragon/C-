#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your favourite colour: ";
    std::string colour{};
    std::getline(std::cin >> std::ws, colour);


    std::cout << "Your name is " << name << " and your favourite colour is " << colour << "\n";

    return 0;
}

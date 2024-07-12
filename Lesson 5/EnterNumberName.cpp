#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter the number 1 or 2: ";
    int choice{};
    std::cin >> choice;

    std::cout << "Enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Your number is " << choice << " and your name is " << name << "\n";
    
    return 0;
}

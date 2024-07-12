#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    int len{static_cast<int>(name.length())};

    std::cout << "Your age + length of name is: " << age+len << "\n";

    return 0;
}

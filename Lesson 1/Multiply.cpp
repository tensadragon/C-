#include <iostream>

int main()
{
    int x{};

    std::cout << "Enter an integer: ";
    std::cin >> x;

    std::cout << "Double that number is: " << x * 2 << '\n';
    std::cout << "Triple that number is: " << x * 3 << '\n';

    return 0;
}

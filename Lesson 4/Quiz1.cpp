#include <iostream>

int main()
{
    std::cout << "Enter a single character: ";
    char c{};
    std::cin >> c;

    std::cout << "You entered " << c << " which has a ASCII code " << static_cast<int>(c);

    return 0;
}

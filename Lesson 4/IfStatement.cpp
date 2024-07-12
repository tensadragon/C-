#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    if (x == 0)
        std::cout << "The value is zero\n";

    else
        std::cout << "This day SUCKS ASS!!\n";
    return 0;
}

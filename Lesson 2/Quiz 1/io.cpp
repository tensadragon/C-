#include <iostream>
#include "io.h"

int readNumber()
{
    std::cout << "Enter an integer :";
    int x{};
    std::cin >> x;

    return x;
}

void writeNumber(int x)
{
    std::cout << "The answer is : " << x << "\n";
}

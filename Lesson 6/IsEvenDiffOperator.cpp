#include <iostream>

int getValue()
{
    std::cout << "Enter an integer: ";
    int value{};
    std::cin >> value;

    return value;

}

bool isEven(int x)
{
    return !(x % 2);
}

void printResult(int x)
{
    if (isEven(x))
        std::cout << x << " is even.\n";
    else
        std::cout << x << " is odd.\n";
}

int main()
{
    int x{getValue()};
    
    printResult(x);

    return 0;
}

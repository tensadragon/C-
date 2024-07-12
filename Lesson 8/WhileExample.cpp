#include <iostream>

int incrementToTen()
{
    int value{0};

    while (value <= 10)
    {
        std::cout << value << "\n";
        ++value;
    }

    return value;
}

int main()
{
    incrementToTen();

    return 0;
}

#include <iostream>

bool isAllowedOnFunRide()
{
    std::cout << "How tall are you (cm)?";
    int x{};
    std::cin >> x;

    return x >= 140.0;
}

int main()
{
    if (isAllowedOnFunRide())
    {
        std::cout << "Have fun!\n";
    }
    else
    {
        std::cout << "TOO SHORT, PAL!\n";
    }

    return 0;
}

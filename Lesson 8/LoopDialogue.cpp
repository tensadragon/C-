#include <iostream>


int main()
{
    while (true)
    {
        std::cout << "Can you help me with my quest?";
        char c{};
        std::cin >> c;

        if (c == 'y')
        {
            std::cout << "Thank you! I'll compensate you for your service!";
            return 0;
        }

    }

    return 0;
}

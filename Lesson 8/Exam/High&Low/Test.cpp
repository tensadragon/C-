#include <iostream>

int main()
{
    bool isLoop = true;
    bool isLoop2 = true;

    while (isLoop)
    {
        std::cout << "Loop 1\n";
        int value{};
        std::cin >> value;

        if (value == 0)
        {
            std::cout << "Donkey!\n";
            isLoop = false;
        }
        if (value == 100)
        {
            std::cout << "Let's continue\n";
        }

        while (isLoop2)
        {
            std::cout << "Loop 2\n";
            int value2{};
            std::cin >> value2;

            if (value2 == 20)
                break;
            if (value2 == 30)
            {
                isLoop = false;
                break;
            }
            else
            {
                std::cout << "Try Again Donkey.\n";
            }

        }

    }

    return 0;
}

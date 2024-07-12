#include <iostream>

int main()
{
    bool isLoop = true;

    while (isLoop)
    {
        int value{};
        std::cin >> value;

        if (value == 0)
        {
            std::cout << "Donkey!\n";
            isLoop = false;
        }
    }

    return 0;
}

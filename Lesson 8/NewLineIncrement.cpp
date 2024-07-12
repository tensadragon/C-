#include <iostream>

int main()
{
    int outer{1};

    while(outer <= 5)
    {
        int inner{1};
        int value{2};

        while (inner <= outer)
        {
            std::cout << value*value << " ";
            ++inner;
        }

        std::cout << "\n";
        ++outer;
    }

    return 0;
}

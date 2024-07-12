#include <iostream>
#include <bitset>

int main()
{
    std::cout << (std::bitset<4>{0b0110} & std::bitset<4>{0b0100});

    return 0;
}

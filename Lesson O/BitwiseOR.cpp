#include <iostream>
#include <bitset>

int main()
{
    std::cout << (std::bitset<4>{0b0101} | std::bitset<4>{0b0110}) << "\n";

    return 0;
}

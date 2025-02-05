#include <iostream>
#include <bitset>

int main()
{
    std::bitset<8> bits{0b000'1101};
    std::cout << bits.size() << " bits are in the bitset\n";
    std::cout << bits.count() << " bits are set to true\n";

    std::cout << std::boolalpha;
    std::cout << "All bits are true: " << bits.all() << "\n";
    std::cout << "Some bits are true: " << bits.any() << "\n";
    std::cout << "No bits are true: " << bits.none() << "\n";

    return 0;
}

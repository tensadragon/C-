#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
// Your code here

    // test to see if bit 3 is 1, if so, shift to the left and set bit 0 to 1, otherwise, simply shift left
    if (bits.test(3))
    {
        bits <<= 1;
        bits.set(0);
        return bits;
    }

    return bits << 1;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}

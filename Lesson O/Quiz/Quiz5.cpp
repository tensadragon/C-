#include <iostream>

/*

Write a program that asks the user to input a number between 0 and 255. 
Print this number as an 8-bit binary number (of the form #### ####). 
Don’t use any bitwise operators. Don’t use std::bitset.


Hint: Use method 2. Assume the largest power of 2 is 128.

Hint: Write a function to test whether your input number is greater than some power of 2. 
If so, print ‘1’ and return your number minus the power of 2.
Reminder: std::uint8_t is usually treated as a char, not an int. 
This may cause unexpected behavior when used with input or output.

*/

int getValue()
{
    std::cout << "Enter a number between 0 and 255: ";
    int value{};
    std::cin >> value;

    return value;

}

int decrementBit(int number, int power)
{
    if (number >= power)
    {
        std::cout << "1";

        return (number - power);
    }

    std::cout << "0";
    
    return number;
    
}

void convertToBinary(int number)
{
    number = decrementBit(number, 128);
    number = decrementBit(number, 64);
    number = decrementBit(number, 32);
    number = decrementBit(number, 16);

    std::cout << " ";

    number = decrementBit(number, 8);
    number = decrementBit(number, 4);
    number = decrementBit(number, 2);
    number = decrementBit(number, 1);
}

int main()
{
    int value{getValue()};

    convertToBinary(value);

    return 0;
}

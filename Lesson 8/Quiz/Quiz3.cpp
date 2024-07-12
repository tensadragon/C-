#include <iostream>

/*
Write a program that prints out the letters a through z along with their ASCII codes. 
Use a loop variable of type char.

Hint: To print characters as integers, you have to use a static_cast.

*/

int main()
{
    char ascii{97};

    while (ascii <= 122)
    {
        std::cout << ascii << " and " << static_cast<int>(ascii) << "\n";
        ++ascii;
    }

    return 0;
}

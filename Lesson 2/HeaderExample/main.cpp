#include "square.h"
#include <iostream>

int main()
{
    std::cout << "a square has " << get_square_sides() << " sides.\n";
    std::cout << "The square has a perimeter of " << get_square_perimeter(5) << "\n";

    return 0;
}

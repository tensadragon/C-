#include "square.h"
#include <iostream>


int get_square_sides()
{
    return 4;
}

int get_square_perimeter(int sideLength)
{
    return sideLength * get_square_sides();
}

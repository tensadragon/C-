#include <iostream>
#include "io.h"

int main()
{
    int x{readNumber()};
    int y{readNumber()};
    int z{readNumber()};

    writeNumber(x+y+z);

    return 0;
}

#include <iostream>

void doIt(int x)
{
    int y{3};

    std::cout << "doItx is: " << x << " and doIty is: " << y << "\n";

    x = 3;

    std::cout << "doItx is: " << x << " and doIty is: " << y << "\n";
}


int main()
{
    int x{1};
    int y{2};

    std::cout << "x is: " << x << " and y is: " << y << "\n";

    doIt(x);

    std::cout << "x is: " << x << " and y is: " << y << "\n";

    return 0;
}

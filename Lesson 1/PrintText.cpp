#include <iostream>

int main()
{
    int x{5};
    int y{7};
    int z{};
    int r{};

    std::cout << "The value of y: " << y << '\n';
    std::cout << "The value of x: " << x << '\n';
    std::cout << "The end, pals! NOT! \n";

    std::cout << "Enter the values for z and r: ";
    std::cin >> z >> r;

    std::cout << "The value of z is " << z << " and the value for z is " << r << '\n';

    return 0;
}

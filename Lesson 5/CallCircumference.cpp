#include <iostream>

constexpr double callCircumference(double radius)
{
    constexpr double pi {3.14159265359};
    return 2.0*pi*radius;
}

int main()
{
    constexpr double circumference { callCircumference(3.0) };

    std::cout << "Our circle has circumference " << circumference << "\n";

    return 0;
}

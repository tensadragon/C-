#include <iostream>
#include <algorithm>
#include <cmath>


bool approxEqualRel(double a, double b, double relEpsilon)
{
    
    return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b))*relEpsilon));
}

bool approxEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
    if (std::abs(a - b) <= absEpsilon)
        return true;
    return approxEqualRel(a, b, relEpsilon);
}

int main()
{

    constexpr double a{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

    constexpr double relEps{1e-8};
    constexpr double absEps{1e-12};

    std::cout << std::boolalpha;

    std::cout << approxEqualRel(a, 1.0, relEps) << "\n";
    std::cout << approxEqualRel(a-1.0, 0.0, relEps) << "\n";

    std::cout << approxEqualAbsRel(a, 1.0, absEps, relEps) << "\n";
    std::cout << approxEqualAbsRel(a-1.0, 0.0, absEps, relEps) << "\n";
    
}

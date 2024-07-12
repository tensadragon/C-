#include <iostream>

int sumTo(int value)
{
    int sum{};

    for(int i{1}; i <= value; ++i)
    {
        sum += i;
    }

    std::cout << sum << "\n";
    return sum;
}

int main()
{
    sumTo(5);

    return 0;
}

#include <iostream>

int accumulate(int x)
{
    static int value{0};

    value += x;

    return value;
}

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}

/*
#1: Because we used a static local variable, the function became much harder to understand without looking
at the implementation. Readers would be confused with the inconsistency of the function's behaviour

#2: It is not reusable because it has an internal state and the variable cannot be reset


*/
